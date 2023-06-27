#ifndef _CLIENT_H_
#define _CLIENT_H_

#include <string>

class Client
{
private:
	std::string _name;
	std::string _surname;
	std::string _address;
	float _balance;
	bool _active;
	
public:
	static int _countOfClients;
	Client() : _name(""), _surname(""), _address(""), _balance(0.0f), _active(true) {}

	Client(std::string name, std::string surname, std::string address, float balance, bool active)
		: _name(name), _surname(surname), _address(address), _balance(balance), _active(active)
	{
		if(_active)
			_countOfClients++;
	}

	Client(std::string name) : Client(name, "", "", 0.0f, true) 
	{
		if (_active)
			_countOfClients++;
	}

	Client(std::string name, std::string surname) : Client(name, surname, "", 0.0f, true)
	{
		if (_active)
			_countOfClients++;
	}

	Client(std::string name, std::string surname, std::string address) : Client(name, surname, address, 0.0f, true)
	{
		if (_active)
			_countOfClients++;
	}

	Client(const Client& cl) : _name(cl._name), _address(cl._address), _balance(cl._balance), _active(false){}

	~Client()
	{
		if (_active)
			_countOfClients--;
	}
};

#endif // !_CLIENT_H_

