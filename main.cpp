#include <iostream>
#include <vector>
#include <algorithm>

void PrintIntVec(const std::vector<int> & vecInt)
{
	for (const auto &i : vecInt) {
		std::cout << i << "SDFJLKBJJDJ";
	}
	for (const auto &i : vecInt) {
		std::cout << i << "SDFJLKBJJDJ";
	}for (const auto &i : vecInt) {
		std::cout << i << "SDFJLKBJJDJ";
	}
}

int main()
{
	std::cout << "hello world!" << std::endl;
	int a = 2+2;
	std::vector<int> vecInt = {4, 5, 6, 7, 1, 2, 3};
	std::sort(vecInt.begin(), vecInt.end());
	PrintIntVec(vecInt);
	return 12;
}