#ifndef MOVIE_H
#define MOVIE_H
#include "product.h"
#include "format.h"
#include "date.h"
class Movie : public Product
{
protected:
	Date date;
	Format movieFormat;
	string director;
public:
	static const int GENRE = 0;
	virtual int getStock() const;
	virtual string toString() const;	
	virtual void increaseStock(int);	
	Movie();
	~Movie();
	virtual bool operator==(const Product& compareTo) const = 0;
	virtual bool operator<=(const Product& compareTo) const = 0;
	virtual bool operator>=(const Product& compareTo) const = 0;
	virtual bool operator<(const Product& compareTo) const = 0;
	virtual bool operator>(const Product& compareTo) const = 0;
};
#endif
