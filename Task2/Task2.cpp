#include <iostream>
#include <Windows.h>

#define SUB(a,b) (a)-(b)

int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a = 6;
	int b = 5;
	int c = 2;
#if defined SUB
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
#else
	std::cout << "Не определен макрос" << std::endl;
#endif
}