#include <iostream>
#include <string>
#include "String.h"

int main()
{
	std::string s1 = "Hello";
	std::string s2("World");

	std::string s3 = s1 + " " + s2;

	std::cout << s3 << std::endl;

	String S1{ "Hello" };
	String S2 = "World";
	String S3 = S1 + " " + S2;

	std::cout << S3.GetPointer() << std::endl;
	return 0;
}