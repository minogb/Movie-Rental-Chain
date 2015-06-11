#ifndef FORMAT_H
#define FORMAT_H
#include <string>
using namespace std;
class Format
{
public:
	static const int NUM_FORMAT = 1;
	//static const string FORMAT_NAME[NUM_FORMAT] = {"DVD"};
	int count[NUM_FORMAT];
	int getAllStock() const;
	int getStock(int index) const;
	string toString(int index) const;
	Format();
	~Format();
};
#endif
