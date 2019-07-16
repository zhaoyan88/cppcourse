#include "date.h"
#include<iostream>
#include<string>

struct Position : std::pair<int, int>
{
	using std::pair<int, int>::pair;
};

Position operator+(Position a, Position b)
{
	return Position(a.first + b.first, a.second + b.second);
}

int main()
{
	try
	{
		const Date d{2000,1,32};
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	Date d1{2016,4,30};
	std::string isLeapYear = d1.IsLeapYear()?"It is a leap year.": "It is not a leap year.";
	std::cout << isLeapYear << std::endl;
	std::string s = d1.ToString();
	std::cout << s << std::endl;
	Position p1(1, 2);
	Position p2(1, 0);
	Position p = p1 + p2;
	std::cout << p.first << ", " << p.second << std::endl;
}
