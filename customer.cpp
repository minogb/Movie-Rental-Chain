#include "customer.h"


Customer::Customer(int id)
{
	ID = id;

}


Customer::~Customer()
{
}

bool Customer::operator==(const Customer& toCompare) const
{
	return ID == toCompare.ID;
}