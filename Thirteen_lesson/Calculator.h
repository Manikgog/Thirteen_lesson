#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include <iostream>

static class Calculator
{
private:
	double _num1;
	double _num2;
	char _c;

public:
	Calculator(double num1, double num2, char c)
		: _num1(num1), _num2(num2), _c(c) 
	{
		Action(_num1, _num2, _c);
	}

	Calculator(float num1, float num2, char c)
		: _num1(num1), _num2(num2), _c(c)
	{
		Action(_num1, _num2, _c);
	}

	Calculator(int num1, int num2, char c)
		: _num1(num1), _num2(num2), _c(c)
	{
		Action(_num1, _num2, _c);
	}

	Calculator(char num1, char num2, char c)
		: _num1(num1), _num2(num2), _c(c)
	{
		Action(_num1, _num2, _c);
	}

	Calculator(unsigned char num1, unsigned char num2, char c)
		: _num1(num1), _num2(num2), _c(c)
	{
		Action(_num1, _num2, _c);
	}
	
	Calculator(unsigned int num1, unsigned int num2, char c)
		: _num1(num1), _num2(num2), _c(c)
	{
		Action(_num1, _num2, _c);
	}

	template <typename T>
	T Action(T num1, T num2, char c)
	{
		if (_c == '+')
			std::cout << _num1 + _num2;
		else if (_c == '-')
			std::cout << _num1 - _num2;
		else if (_c == '*')
			std::cout << _num1 * _num2;
		else if (_c == '/')
		{
			if (num2 == 0)
				exit(1);
			std::cout << _num1 / _num2;
		}
		else if (_c == '%')
		{
			std::cout << (num2 / 100) * num1;
		}
	}

};



#endif // !_CLIENT_H_

