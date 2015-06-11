#ifndef CUSTOMER_ARRAY_H
#define CUSTOMER_ARRAY_H
#include "customer.h"
class CustomerArray
{
	Customer** customerArray;
	int avSize;
	int size;
	void initCArray(Customer** array, int sizeTo);
public:
	void add(Customer* toAdd);
	CustomerArray();
	~CustomerArray();
};
#endif
