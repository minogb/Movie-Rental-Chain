#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "tranList.h"
class Customer
{
private:
	int ID;
public:
	TranList history;
	Customer(int id);
	~Customer();
	bool operator==(const Customer& toCompare) const;
};
#endif
