#include <iostream>
#include "io.h"

int main()
{
	int a, b;
	a = readNumber();
	b = readNumber();
	writeAnswer(a + b);
	return 0;
}