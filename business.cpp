#include "business.h"
#include <string>
#include <iostream>
using namespace std;

Business::Business()
{
}


Business::~Business()
{
}

 istream& operator>>(istream& input, Business& toPrint)
{
	string in;
	input >> in;
	cout << in;
	while(input.good())
	{
		//genre, director, title, actor, month, year
		input >> in;
		cout << in;
		input >> in;
	}
	return input;
}
