#ifndef _CALCULATOR_H_
#define _CALCULATOR_H_

#include <iostream>


class Calculator
{
	// Для обеспечения требования - не хранить данные внутри класса, полей в классе нет.
	// Соответственно не нужны конструкторы и деструкторы.
public:
		
	static int Action(int num1, int num2, char c);

	static double Action(double num1, double num2, char c);

	static float Action(float num1, float num2, char c);

};



#endif // !_CLIENT_H_

