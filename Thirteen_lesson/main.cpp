#include <iostream>
#include "Header.h"
#include <cassert>
#include <vector>
#include "Calculator.h"
#include "Client.h"

void TestCalculator()
{
    {
        std::cout << "int:\n";
        int a = 2, b = 1;
        std::cout << a << " + " << b << " = " << Calculator::Action(a, b, '+') << std::endl;
        assert(a+b == Calculator::Action(a, b, '+'));
        std::cout << a << " - " << b << " = " << Calculator::Action(a, b, '-') << std::endl;
        assert(a-b == Calculator::Action(a, b, '-'));
        std::cout << a << " * " << b << " = " << Calculator::Action(a, b, '*') << std::endl;
        assert(a * b == Calculator::Action(a, b, '*'));
        std::cout << a << " / " << b << " = " << Calculator::Action(a, b, '/') << std::endl;
        assert(a / b == Calculator::Action(a, b, '/'));
        a = 5, b = 200;
        std::cout << a << "% от " << b << " = " << Calculator::Action(a, b, '%') << std::endl;
        assert(((b/100)*a) == Calculator::Action(a, b, '%'));
    }
    {
        std::cout << "float:\n";
        float a = 2.2, b = 1.5;
        std::cout << a << " + " << b << " = " << Calculator::Action(a, b, '+') << std::endl;
        assert(a + b == Calculator::Action(a, b, '+'));
        std::cout << a << " - " << b << " = " << Calculator::Action(a, b, '-') << std::endl;
        assert(a - b == Calculator::Action(a, b, '-'));
        std::cout << a << " * " << b << " = " << Calculator::Action(a, b, '*') << std::endl;
        assert(a * b == Calculator::Action(a, b, '*'));
        std::cout << a << " / " << b << " = " << Calculator::Action(a, b, '/') << std::endl;
        assert(a / b == Calculator::Action(a, b, '/'));
        a = 5, b = 200;
        std::cout << a << "% от " << b << " = " << Calculator::Action(a, b, '%') << std::endl;
        assert(((b / 100) * a) == Calculator::Action(a, b, '%'));

    }
    {
        std::cout << "double:\n";
        double a = 2.2, b = 1.5;
        std::cout << a << " + " << b << " = " << Calculator::Action(a, b, '+') << std::endl;
        assert(a + b == Calculator::Action(a, b, '+'));
        std::cout << a << " - " << b << " = " << Calculator::Action(a, b, '-') << std::endl;
        assert(a - b == Calculator::Action(a, b, '-'));
        std::cout << a << " * " << b << " = " << Calculator::Action(a, b, '*') << std::endl;
        assert(a * b == Calculator::Action(a, b, '*'));
        std::cout << a << " / " << b << " = " << Calculator::Action(a, b, '/') << std::endl;
        assert(a / b == Calculator::Action(a, b, '/'));
        a = 5, b = 200;
        std::cout << a << "% от " << b << " = " << Calculator::Action(a, b, '%') << std::endl;
        assert(((b / 100) * a) == Calculator::Action(a, b, '%'));

    }
}

void TestClient()
{
    std::vector<Client> clients;
    clients.push_back(Client("Михаил", "Ежов", "Горького 2-4", 1000, true));
    clients.push_back(Client("Сергей", "Островский", "Победы 15-144", 900, true));
    clients.push_back(Client("Николай", "Петухов", "Горького 10-41", 15000, true));
    clients.push_back(Client("Александр", "Черепанов", "Бажова 8-26", 11000, true));
    clients.push_back(Client("Дмитрий", "Клещеев", "Бажова 8-41", 5000, true));
    clients.push_back(Client("Иван", "Подкидышев", "Мира 30-123", 6000, true));
    clients.push_back(Client("Бобир", "Дадаханов", "Горькова 4-9", 100, true));
    Client c(Client("Михаил", "Ежов", "Горького 2-4", 1000, true));
    assert(Client::_countOfClients != clients.size());
    Client::_countOfClients = clients.size();
    Client c1(c);
    assert(Client::_countOfClients == clients.size());
}

void Test()
{
    TestCalculator();
    TestClient();
}

int main()
{
    setlocale(LC_ALL, "Russian");
    Test();
}
