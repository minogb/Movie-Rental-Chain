#include "format.h"


Format::Format()
{
	//FORMAT_NAME[0] = "DVD";
	count[0] = 0;
}
Format::~Format()
{
}

int Format::getAllStock() const
{
	int retVal = 0;
	for(int i = 0; i < NUM_FORMAT; i++)
		retVal += count[i];
	return retVal;
}
int Format::getStock(int index) const
{
	return count[index];
}
string Format::toString(int index) const
{
	return "DVD";
}