#include <iostream>

class file1
{
public:
	file1();
	~file1();
	
private:
	int a = 0;
	int b = 0;
};

file1::file1()
{
	a = 10;
	b = 12;
}

file1::~file1()
{
	std::cout << "destructor";
}
