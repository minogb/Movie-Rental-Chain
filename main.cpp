#include "format.h"
#include "date.h"
#include "customer.h"
#include "gbst.h"
#include "classic.h"
#include "business.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	Format a;
	cout << "----------------------------------------" << endl;
	cout << "Get all stock of a: " << a.getAllStock() << endl;
	cout << "get stock of index 0 of a: "  << a.getStock(0) << endl;
	cout << "to string print of index 0 of a: " << a.toString(0) << endl;
	cout << "----------------------------------------" << endl;
	cout << "----------------------------------------" << endl;
	Date d(2,0,1994);
	cout << "Print out date: " << d.toString() << endl;
	Date d1(2,0, 1994);
	cout << "Compare d to d1 equal: " << ((d == d1) ? "True": "False") << endl;
	cout << "d is greater than or equal d1: " << ((d >= d1) ? "True": "False") << endl;
	cout << "d is less than or equal d1: " << ((d >= d1) ? "True": "False") << endl;
	cout << "Change d1 to be less than d " << endl;
	d1.set(1,0, 1994);
	cout << "d is greater than d1: " << ((d > d1) ? "True" : "False") << endl;
	cout << "Change d1 to be greater than d " << endl;
	d1.set(3,0, 1994);
	cout << "d is greater than d1: " << ((d > d1) ? "True" : "False") << endl;
	cout << "----------------------------------------" << endl;
	cout << "----------------------------------------" << endl;
	Customer f(0);
	Customer g(1);
	Customer h(1);
	cout << "Is f == g: " << ((f==g) ? "True" : "False") << endl;
	cout << "Is g == h: " << ((h==g) ? "True" : "False") << endl;
	cout << "----------------------------------------" << endl;
	cout << "----------------------------------------" << endl;
	GBST tree;
	Classic test("THING!", "DUDE", "DUDET", d);
	Classic test2("THING2!", "DUDE", "DUDET1", d);
	Classic test3("THING3!", "DUDE", "DUDET2", d);
	Classic test4("THING4!", "DUDE", "DUDET3", d);
	Classic test5("THING5!", "DUDE", "DUDET4", d);
	tree.add(&test);
	tree.add(&test);
	tree.add(&test);
	tree.add(&test);
	test.increaseStock(1);
	tree.add(&test3);
	tree.add(&test2);
	tree.add(&test5);
	tree.add(&test4);
	cout << tree << endl;
	cout << "----------------------------------------" << endl;
	cout << "----------------------------------------" << endl;
	Business bus;
	fstream k;
	k.open("data.txt");
	k >> bus;
}
