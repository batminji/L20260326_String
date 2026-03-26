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

String::String(const String& Other)
{
	Length = Other.Length;
	Data = new char[Length + 1];
	CopyString(Other.GetPointer());
}

String::~String()
{
	delete[] Data;
	Data = nullptr;
}

String String::operator+(const String& RHS) const
{
	size_t NewLength = Length + RHS.Length;
	char* NewResult = new char[NewLength + 1];

	for (size_t i = 0; i < Length; ++i)
	{
		NewResult[i] = Data[i];
	}
	for (size_t i = 0; i < RHS.Length; ++i)
	{
		NewResult[i + Length] = RHS.Data[i];
	}
	NewResult[NewLength] = '\0';

	String Result(NewResult);
	delete[] NewResult;

	return Result;
}

bool String::operator==(const String& Other) const
{
	if (Length != Other.Length)
	{
		return false;
	}
	for (int i = 0; i < Length; ++i)
	{
		if (Data[i] != Other.Data[i])
		{
			return false;
		}
	}
	return true;
}

inline const char* String::GetPointer() const
{
	return Data;
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
	Data[Length] = '\0';
}
