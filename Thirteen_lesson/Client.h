#ifndef _CLIENT_H_
#define _CLIENT_H_

#include <string>

class Client
{
private:
	std::string _name;
	std::string _address;
	float _balance;
	bool _active;
	static int count;

public:
	Client() : _name(""), _address(""), _balance(0.0f), _active(false) {}
	Client(std::string name, std::string address, float balance, bool active)
		: _name(name), _address(address), _balance(balance), _active(active)
	{
		if(_active)
			count++;
	}
	Client(std::string name) : Client(name, "", 0.0f, false) 
	{
		if (_active)
			count++;
	}
	Client(std::string name, std::string address) : Client(name, address, 0.0f, false) 
	{
		if (_active)
			count++;
	}
	Client(const Client& cl) : _name(cl._name), _address(cl._address), _balance(cl._balance), _active(false)
	{}
	~Client()
	{
		if (_active)
			count--;
	}
};

#endif // !_CLIENT_H_

