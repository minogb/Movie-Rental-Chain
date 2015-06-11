#include "classic.h"


Classic::Classic(string title, string dir, string act, Date created)
{
	name = title;
	director = dir;
	actor = act;
	date.set(created);
	id = 0;
}

Classic::~Classic()
{
}


string Classic::toString() const
{
	string retVal = "";
	retVal += movieFormat.toString(0);
	retVal += ": " + name;
	retVal +=" ";
	retVal += date.toString();
	retVal += " By ";
	retVal += director;
	retVal += " Staring ";
	retVal += actor;
	retVal += " Coppies in stock: ";
	retVal += to_string(getStock());
	return retVal;
}
bool Classic::operator==(const Product& compareTo) const
{
	const Classic& tempC = static_cast<const Classic&>(compareTo);
	if(name != tempC.name)
	{
		return false;
	}
	else if(date != tempC.date)
	{
		return false;
	}
	else if(director != tempC.director)
	{
		return false;
	}
	else if(actor != tempC.actor)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool Classic::operator!=(const Product& compareTo) const
{
	return !(*this == compareTo);
}
bool Classic::operator<=(const Product& compareTo) const
{
	return ( (*this < compareTo) || (*this == compareTo));
}
bool Classic::operator>=(const Product& compareTo) const
{
	return ( (*this > compareTo) || (*this == compareTo));
}
bool Classic::operator<(const Product& compareTo) const
{
	const Classic& tempC = static_cast<const Classic&>(compareTo);
	if(date < tempC.date)
	{
		if(actor.compare(tempC.actor) < 0)
		{
			return true;
		}
	}
	return false;
}
bool Classic::operator>(const Product& compareTo) const
{
	return !(*this < compareTo);
}