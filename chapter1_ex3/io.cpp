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