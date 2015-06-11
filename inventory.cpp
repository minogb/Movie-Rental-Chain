#include "inventory.h"
#include "gbst.h"
#include "product.h"
Inventory::Inventory()
{
	avSize = 10;
	array = new GBST[avSize];
}


Inventory::~Inventory()
{
}

void Inventory::add(Product* toAdd)
{
	if(toAdd->id < size)
	{
		array[toAdd->id].add(toAdd);
	}
}