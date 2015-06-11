#include "customerArray.h"
#include <iostream>
using namespace std;

CustomerArray::CustomerArray()
{
	avSize = 15;
	customerArray = new Customer*[avSize];
	initCArray(customerArray, avSize);
	size = 0;
}

void CustomerArray::initCArray(Customer** array, int sizeTo)
{
	for(int i = 0; i < sizeTo; i++)
	{
		customerArray = NULL;
	}
}

CustomerArray::~CustomerArray()
{
	for(int i = 0; i < size; i++)
		delete customerArray[i];
	delete customerArray;
}
void CustomerArray::add(Customer* toAdd)
{
	if(size < avSize)
	{
		customerArray[size++] = toAdd;
	}
	else
	{
		avSize *= 2;
		Customer** tempArray = new Customer*[avSize];
		initCArray(tempArray, avSize);
		for(int i = 0; i < size; i++)
			tempArray[i] = customerArray[i];
		delete []customerArray;
		customerArray = tempArray;
	}
}
