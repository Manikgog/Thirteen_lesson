#ifndef _HEADER_H_
#define _HEADER_H_
#include <vector>
#include <iostream>

extern int g;

class MyClass
{
public:
	MyClass();
	~MyClass();
	template <typename Type>
	void foo(Type a);
	
private:
	int a;
	int b;
	static int count;
	static const int g_rgav{ 10 };
	static std::vector<int> vectName;
};

template <typename Type>
inline void MyClass::foo(Type a) 
{
	std::cout << "foo\n";
}

#endif // !_HEADER_H_

//:::::::::::: ЗОНЫ ПАМЯТИ ПРОГРАММЫ  :::::::::::::::
// 0
// service
// program - откомпилированная текстовая часть программы
// data(brs) - в этой зоне памяти располагаются статические переменные инициализированные
// bss - неинициализированные статические переменные
// heap - куча
// stack - стек
// args - зона аргументов
