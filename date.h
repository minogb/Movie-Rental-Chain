#ifndef DATE_H
#define DATE_H
#include <string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	string toString() const;
	void set(int d = 0, int m = 0, int y = 0);
	void set(const Date& d);
	Date(int d = 0, int m = 0, int y = 0);
	~Date();
	bool operator==(const Date& compareTo) const;
	bool operator!=(const Date& compareTo) const;
	bool operator>(const Date& compareTo) const;
	bool operator<(const Date& compareTo) const;
	bool operator<=(const Date& compareTo) const;
	bool operator>=(const Date& compareTo) const;
};
#endif
