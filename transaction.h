#ifndef TRANSACTION_H
#define TRANSACTION_H
#include "date.h"
#include "movie.h"
#include "customer.h"
class Transaction
{
	Date date;
public:
	int TypeID;
	void* transactionObj;
	virtual bool execute(void* from, Customer& to) const = 0;
	Transaction();
	~Transaction();
};
#endif
