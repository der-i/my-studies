#include "../include/file1.hpp"

file1::file1()
{
	a = 10;
	b = 12;
}

file1::~file1()
{
	std::cout << "destructor";
	std::cout << "destructor";
	std::cout << "destructor";
	std::cout << "destructor2";
}