#include <iostream>

int readNumber()
{
	int number;
	std :: cout << "Enter a number :" << std::endl;
	std :: cin >> number;
	return number; 
}

void writeAnswer(int summ)
{
	std :: cout << "Sum of numbers: ";
	std :: cout << summ << std::endl;
}

int main()
{
	int a, b;
	a = readNumber();
	b = readNumber();
	writeAnswer(a + b);
	return 0;
}