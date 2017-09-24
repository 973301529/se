#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main ()
{
	void info();
	void plus();
	void minus();
	void multiply();
	void divide();
	void power();
	void square();
	void factorial();
	void absolute();

	char cmd[128];
	info();

	while (1)
	{
		printf("Plesea choose a command and type it:\n");
		scanf("%s", cmd);
		if (strcmp(cmd, "info") == 0)
		{
			info();
		}
		else if (strcmp(cmd, "plus") == 0)
		{
			plus();
		}
		else if (strcmp(cmd, "minus") == 0)
		{
			minus();
		}
		else if (strcmp(cmd, "multiply") == 0)
		{
			multiply();
		}
		else if (strcmp(cmd, "divide") == 0)
		{
			divide();
		}
		else if (strcmp(cmd, "power") == 0)
		{
			power();
		}
		else if (strcmp(cmd, "square") == 0)
		{
			square();
		}
		else if (strcmp(cmd, "factorial") == 0)
		{
			factorial();
		}
		else if (strcmp(cmd, "absolute") == 0)
		{
			absolute();
		}
		else if (strcmp(cmd, "quit") == 0)
		{
			printf("Quit the program!\n");
			return 0;
		}
		else
		{
			printf("Error:unsupported command!\n");
			printf("Type 'info' for the available commands.\n");
		}
		//printf("%s\n", cmd);
	}
		return 0;
}
//defination of info()
//show commands avilable
void info()
{
	printf("=================== info ===================\n");
	printf("=    Commands      |     Descriptions      =\n");
	printf("=------------------------------------------=\n");
	printf("=      info        |  Command Informations =\n");
	printf("=      plus        |         a+b           =\n");
	printf("=      minus       |         a-b           =\n");
	printf("=    multiply      |         a*b           =\n");
	printf("=     divide       |         a/b           =\n");
	printf("=      power       |   b th powers of a    =\n");
	printf("=     square       |   square root of a    =\n");
	printf("=    factorial     |          a!           =\n");
	printf("=    absolute      |         |a|           =\n");
	printf("=      quit        |         end           =\n");
	printf("============================================\n");
}

void plus()
{
	float a,b;
	printf("Enter two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("The sum of %f and %f is %f\n", a, b, a+b);
}

void minus()
{
	float a,b;
	printf("Enter two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("%f minus %f equals %f\n", a, b, a-b);
}

void multiply()
{
	float a,b;
	printf("Enter two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("%f multiply %f equals %f\n", a, b, a*b);
}

void divide()
{
	float a,b;
	printf("Enter two numbers:\n");
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
	printf("Enter two intgers:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d th power of %d is %f\n", a, b, pow(a, b));
}

void square()
{
	int a;
	printf("Enter a intger:\n");
	scanf("%d", &a);
	printf("The square root of %d is %f\n", a, sqrt(a));
}

void factorial()
{
	int a;
	int a_fac = 1;
	printf("Enter a intger:\n");
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
	printf("Enter a number:\n");
	scanf("%f", &a);
	if (a >= 0)
		a_abs = a;
	else
		a_abs = -a;
	printf("The absolute value of %f is %f\n", a, a_abs);
}
