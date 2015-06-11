#include "gbst.h"
#include "product.h"

GBST::Node::Node(Product* input)
{
	data = input;
	left = NULL;
	right = NULL;
}
GBST::Node::~Node()
{
//	delete data;
}
GBST::GBST()
{
	root = NULL;
}
GBST::~GBST()
{
	clearTree(root);
}
void GBST::add(Product* toAdd)
{
	if(root == NULL)
	{
		root = new Node(toAdd);
	}
	else
	{
		add(toAdd, root);
	}
}
void GBST::add(Product* toAdd, Node* current)
{
	if(*toAdd == *current->data)
	{
		toAdd->increaseStock(toAdd->getStock());
	}
	else if (*toAdd < *current->data)
	{
		if(current->left != NULL)
			add(toAdd, current->left);
		else
			current->left = new Node(toAdd);
	}
	else
	{
		if(current->right != NULL)
			add(toAdd, current->right);
		else
			current->right = new Node(toAdd);
	}
}

void GBST::clearTree(Node* current)
{
	if(current != NULL)
	{
		clearTree(current->left);
		clearTree(current->right);
		delete current;
	}
}
ostream& operator<<(ostream& output, const GBST& toPrint)
{
	toPrint.printHelper(output, toPrint.root);
	return output;
}
void GBST::printHelper(ostream& output, Node* current) const
{
	if(current != NULL)
	{
		printHelper(output, current->left);
		output << *current->data << endl;
		printHelper(output, current->right);
	}
}