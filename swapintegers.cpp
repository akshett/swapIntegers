#include <iostream>

void swapint(int &a, int &b)
{
	a += b;
	b = a - b;
	a = a - b;
}

int main()
{
	int x,y;
	std::cout << "Enter first integer: ";
	std::cin >> x;
	std::cout << "Enter second integer: ";
	std::cin >> y;
	swapint(x,y);
	std::cout << "First integer after swap: " << x << '\n';
	std::cout << "Second integer after swap: " << y << '\n';
	return 0;
}

