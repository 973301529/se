#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "linklist.h"

void info();
void plus();
void minus();
void multiply();
void divide();
void power();
void square();
void factorial();
void absolute();
void quit();

#define CMD_MAX_LEN 128
#define DESC_LEN 1024
#define CMD_NUM 20

static tDataNode head[] =
{
	{"info", "Command Informations", info, &head[1]},
	{"plus", "result of a + b", plus, &head[2]},
	{"minus", "result of a - b", minus, &head[3]},
	{"multiply", "result of a * b", multiply, &head[4]},
	{"divide", "result of a / b", divide, &head[5]},
	{"power", "result of a ^ b", power, &head[6]},
	{"square", "result of square root of a", square, &head[7]},
	{"factorial", "result of a!", factorial, &head[8]},
	{"absolute", "result of |a|", absolute, &head[9]},
	{"quit", "end this program", quit, NULL},
};

int main ()
{
	char cmd[CMD_MAX_LEN];
	info();
	printf("Plesea input a command:\n");

	while (1)
	{
		printf(">>>");
		scanf("%s", cmd);
		tDataNode *p = FindCmd(head, cmd);
		if (p == NULL)
		{
			printf("Error: Wrong command!\n");
			printf("Type 'info' for available commands.\n");
		}
		printf("%s - %s\n", p->cmd, p->desc);
		if(p->handler != NULL)
		{
			p->handler();
		}
	}
	return 0;
}
//defination of info()
//show commands avilable
void info()
{
	printf("**************** info ****************\n");
	printf("Commands     -     Descriptions       \n");
	printf("**************************************\n");
	ShowAllCmd(head);
	printf("**************************************\n");
}

void plus()
{
	float a,b;
	printf("Input two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("The sum of %f and %f is %f\n", a, b, a+b);
}

void minus()
{
	float a,b;
	printf("Input two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("%f minus %f equals %f\n", a, b, a-b);
}

void multiply()
{
	float a,b;
	printf("Input two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("%f multiply %f equals %f\n", a, b, a*b);
}

void divide()
{
	float a,b;
	printf("Input two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	if ( b == 0)
		printf("Error: 0 can not be used as a divisor!\n");
	else
		printf("%f divided by %f is %f\n", a, b, a/b);
}

void power()
{
	int a,b;
	printf("Input two intgers:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d th power of %d is %f\n", b, a, pow(a, b));
}

void square()
{
	int a;
	printf("Input a intger:\n");
	scanf("%d", &a);
	printf("The square root of %d is %f\n", a, sqrt(a));
}

void factorial()
{
	int a;
	int a_fac = 1;
	printf("Input a intger:\n");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
	{
		a_fac *= i;
	}
	printf("The factorial of %d is %d\n", a, a_fac);
}

void absolute()
{
	float a;
	float a_abs;
	printf("Input a number:\n");
	scanf("%f", &a);
	if (a >= 0)
		a_abs = a;
	else
		a_abs = -a;
	printf("The absolute value of %f is %f\n", a, a_abs);
}

void quit()
{
	exit(0);
}
