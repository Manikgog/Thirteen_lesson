#include "Calculator.h"

int _num1_int;
int _num2_int;
float _num1_float;
float _num2_float;
double _num1_double;
double _num2_double;
char _c;

int Calculator::Action(int num1, int num2, char c)
{
	_c = c;
	_num1_int = num1;
	_num2_int = num2;
	if (_c == '+')
		return _num1_int + _num2_int;
	else if (_c == '-')
		return _num1_int - _num2_int;
	else if (_c == '*')
		return _num1_int * _num2_int;
	else if (_c == '/')
	{
		if (_num2_int == 0)
			exit(1);
		return _num1_int / _num2_int;
	}
	else if (c == '%')
	{
		return (_num2_int / 100) * _num1_int;
	}
}

double Calculator::Action(double num1, double num2, char c)
{
	_c = c;
	_num1_double = num1;
	_num2_double = num2;
	if (_c == '+')
		return _num1_double + _num2_double;
	else if (_c == '-')
		return _num1_double - _num2_double;
	else if (_c == '*')
		return _num1_double * _num2_double;
	else if (_c == '/')
	{
		if (_num2_double == 0)
			exit(1);
		return _num1_double / _num2_double;
	}
	else if (c == '%')
	{
		return (_num2_double / 100) * _num1_double;
	}
}

float Calculator::Action(float num1, float num2, char c)
{
	_c = c;
	_num1_float = num1;
	_num2_float = num2;
	if (_c == '+')
		return _num1_float + _num2_float;
	else if (_c == '-')
		return _num1_float - _num2_float;
	else if (_c == '*')
		return _num1_float * _num2_float;
	else if (_c == '/')
	{
		if (_num2_float == 0)
			exit(1);
		return _num1_float / _num2_float;
	}
	else if (c == '%')
	{
		return (_num2_float / 100) * _num1_float;
	}
}