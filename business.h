#ifndef BUSINESS_H
#define BUSINESS_H
#include "inventory.h"
#include "customerArray.h"
#include <iostream>
using namespace std;
class Business
{
	friend istream& operator>>(istream& input, Business& toPrint);
	CustomerArray customers;
	Inventory stock;
public:
	Inventory stockList;
	Business();
	~Business();
};
#endif
