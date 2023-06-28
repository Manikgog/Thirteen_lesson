#include "Calculator.h"


int Calculator::Action(int num1, int num2, char c)
{
	if (c == '+')
		return num1 + num2;
	else if (c == '-')
		return num1 - num2;
	else if (c == '*')
		return num1 * num2;
	else if (c == '/')
	{
		if (num2 == 0)
			exit(1);
		return num1 / num2;
	}
	else if (c == '%')
	{
		return (num2 / 100) * num1;
	}
}

double Calculator::Action(double num1, double num2, char c)
{
	if (c == '+')
		return num1 + num2;
	else if (c == '-')
		return num1 - num2;
	else if (c == '*')
		return num1 * num2;
	else if (c == '/')
	{
		if (num2 == 0)
			exit(1);
		return num1 / num2;
	}
	else if (c == '%')
	{
		return (num2 / 100) * num1;
	}
}

float Calculator::Action(float num1, float num2, char c)
{
	if (c == '+')
		return num1 + num2;
	else if (c == '-')
		return num1 - num2;
	else if (c == '*')
		return num1 * num2;
	else if (c == '/')
	{
		if (num2 == 0)
			exit(1);
		return num1 / num2;
	}
	else if (c == '%')
	{
		return (num2 / 100) * num1;
	}
}