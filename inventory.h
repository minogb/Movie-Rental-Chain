#ifndef INVENTORY_H
#define INVENTORY_H
class GBST;
class Product;
class Inventory
{
	GBST* array;
	int avSize;
	int size;
public:
	void add(Product*);
	Inventory();
	~Inventory();
};
#endif

