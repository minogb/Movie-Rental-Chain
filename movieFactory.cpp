#include "movieFactory.h"
#include "classic.h"
#include <string>
using namespace std;
MovieFactory::MovieFactory()
{
}


MovieFactory::~MovieFactory(void)
{
}
Product* getNewProduct(string data)
{
	char testing = data[0];
	string director;
	string title;
	switch (testing){
		case 'F':

		case 'D':

		case 'C':
			//string title, string dir, string act, Date created
			Classic* retVal; 
			director = data.substr(2, data.find_first_of(','));
			
			break;
		default:
	}

}