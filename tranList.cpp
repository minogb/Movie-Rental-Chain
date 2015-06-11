#include "tranList.h"
#include <iostream>
using namespace std;

TranList::TranList()
{
	root = NULL;
	tail = NULL;
}
TranList::~TranList()
{
}
void TranList::add(Transaction& toAdd)
{
	if(root == NULL)
	{
		root = new Node(&toAdd);
		tail = root;
	}
	else
	{
		tail->next = new Node(&toAdd);
		tail = tail->next;
	}
}

TranList::Node::Node(Transaction* dat)
{
	data = dat;
	next = NULL;
}