#ifndef PRODUCT_H
#define PRODUCT_H
#include <iomanip>
using namespace std;
class Product
{
	friend ostream& operator<<(ostream& output, const Product& toPrint);

protected:
public:
	int id;
	string name;
	Product();
	~Product();
	virtual int getStock() const = 0;
	virtual void increaseStock(int) = 0;
	virtual string toString() const = 0;	
	virtual bool operator==(const Product&) const = 0;
	virtual bool operator!=(const Product&) const = 0;
	virtual bool operator<(const Product&) const = 0;
	virtual bool operator>(const Product&) const = 0;
	virtual bool operator<=(const Product&) const = 0;
	virtual bool operator>=(const Product&) const = 0;
};
#endif
