#include "date.h"
#include <iostream>
using namespace std;

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

Date::~Date()
{
}
string Date::toString() const
{
	string retVal = "";
	if(month > 0)
		retVal += "D:" + std::to_string(month);
	if(day > 0)
	{
		if(month > 0)
			retVal += " ";
		retVal += "M:" + std::to_string(day);
	}
	if(year > 0)
	{
		if(day > 0)
			retVal += " ";
		retVal += "Y:" + std::to_string(year);
	}
	return retVal;
}
void Date::set(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}
void Date::set(const Date& d)
{
	day = d.day;
	month = d.month;
	year = d.year;
}
bool Date::operator==(const Date& compareTo) const
{
	if(day != compareTo.day)
		return false;
	if(month != compareTo.month)
		return false;
	if(year != compareTo.year)
		return false;
	return true;
}
bool Date::operator!=(const Date& compareTo) const
{
	return !(*this == compareTo);
}
bool Date::operator>(const Date& compareTo) const
{
	if(year > compareTo.year)
		return true;
	if(month > compareTo.month)
		return true;
	if(day > compareTo.day)
		return true;
	return false;
}
bool Date::operator<(const Date& compareTo) const
{
	return !(*this > compareTo);
}
bool Date::operator<=(const Date& compareTo) const
{
	return (*this < compareTo) || (*this == compareTo);
}
bool Date::operator>=(const Date& compareTo) const
{
	return (*this > compareTo) || (*this == compareTo);
}
