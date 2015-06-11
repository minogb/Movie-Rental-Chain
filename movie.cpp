#include "movie.h"
#include <string>

Movie::Movie()
{
}

Movie::~Movie()
{
}
string Movie::toString() const
{
	string retVal = "#";
	retVal += id;
	retVal += " ";
	retVal += date.toString();
	retVal +=" ";
	retVal += movieFormat.toString(0);
	retVal += " By ";
	retVal += director;
	return retVal;
}
int Movie::getStock() const
{
	return movieFormat.getAllStock();
}

void Movie::increaseStock(int toAdd)
{
	//add to lowest
	int indexOfLowest = 0;
	for(int i = 0; i < this->movieFormat.NUM_FORMAT; i++)
	{
		if(movieFormat.getStock(i) < movieFormat.getStock(indexOfLowest))
			indexOfLowest = i;
	}
	movieFormat.count[indexOfLowest] += toAdd;
}