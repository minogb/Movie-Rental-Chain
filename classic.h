#ifndef CLASSIC_H
#define CLASSIC_H
#include "movie.h"
class Classic : public Movie
{
public:
	static const int GENRE = 1;
	string actor;
	Classic(string title, string Director, string Actor, Date created);
	Classic();
	~Classic();
	virtual string toString() const;	
	virtual bool operator==(const Product&) const;
	virtual bool operator!=(const Product&) const;
	virtual bool operator<(const Product&) const;
	virtual bool operator>(const Product&) const;
	virtual bool operator<=(const Product&) const;
	virtual bool operator>=(const Product&) const;
};
#endif
