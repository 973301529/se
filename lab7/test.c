#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "linktable.h"
#include "menu.h"

int Exit(int argc, char *argv[])
{
    printf("exit the program\n");
    exit(0);
}
int Version(int argc, char *argv[])
{
    printf("menu program v3.0\n");
}
int plus(int argc, char *argv[])
{
	float a,b;
	printf("Input two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("The sum of %f and %f is %f\n", a, b, a+b);
}

int minus(int argc, char *argv[])
{
	float a,b;
	printf("Input two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("%f minus %f equals %f\n", a, b, a-b);
}

int multiply(int argc, char *argv[])
{
	float a,b;
	printf("Input two numbers:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	printf("%f multiply %f equals %f\n", a, b, a*b);
}

int divide(int argc, char *argv[])
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

int main(int argc, char *argv[])
{
    MenuConfig("version", "menu program v3.0", Version);
    MenuConfig("plus", "sum of a and b", plus);
    MenuConfig("minus", "result of a minus b", minus);
    MenuConfig("multiply", "result of a times b", multiply);
    MenuConfig("divide", "result of a divided by b", divide);
    MenuConfig("exit", "Exit this program", Exit);
    ExecuteMenu();
    return 0;
}
