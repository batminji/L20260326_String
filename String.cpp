#include "String.h"

String::String()
{
	Data = new char[1];
	Data[0] = '\0';
	Length = 0;
}

String::String(const char* InString)
{
	Length = CountLength(InString);
	Data = new char[Length + 1]; // \0
	CopyString(InString);
}

String::~String()
{
	delete[] Data;
	Data = nullptr;
}

size_t String::CountLength(const char* InString) const
{
	size_t Count = 0;
	while (InString[Count] != '\0')
	{
		Count++;
	}
	return Count;
}

void String::CopyString(const char* InString)
{
	for (int i = 0; i < Length; ++i)
	{
		Data[i] = InString[i];
	}
	Data[Length + 1] = '\0';
}
