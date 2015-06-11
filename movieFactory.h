#ifndef MOVIE_FACTORY_H
#define MOVIE_FACTORY_H
#include <string>
class Product;
using namespace std;
class MovieFactory
{
public:
	//genre, director, title, actor, month, year
	Product* getNewProduct(string data);
	MovieFactory();
	~MovieFactory();
};
#endif
