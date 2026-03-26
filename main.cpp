#include <iostream>
#include "String.h"

int main()
{
	String S1{ "Hello" };
	String S2{ "Hello" };
	String S3 = S1 + " " + S2;

	// std::cout << S3.GetPointer() << std::endl;
	std::cout << (S1 == S2) << std::endl;
	return 0;
}