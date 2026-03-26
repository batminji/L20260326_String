#pragma once
class String
{
public:
	String();
	String(const char* InString);
	~String();

	inline size_t GetLength() const
	{
		return Length;
	}
protected:
	size_t CountLength(const char* InString) const;
	void CopyString(const char* InString);

protected:
	char* Data;
	size_t Length = 0;
};

