#include "product.h"
#include <iostream>
#include <string>
using namespace std;
Product::Product()
{

}
Product::~Product()
{

}
ostream& operator<<(ostream& output, const Product& toPrint)
{
	return output << toPrint.toString();
}