#ifndef GBST_H
#define GBST_H
#include <iostream>
using namespace std;
class Product;
class GBST
{
	friend ostream& operator<<(ostream& output, const GBST& toPrint);
	class Node
	{
	public:
		Product* data;
		Node* left;
		Node* right;
		Node(Product* input);
		~Node();
	};
	void printHelper(ostream& output, Node* current) const;
	Node* root;
	void add(Product* toAdd, Node* current);
	void clearTree(Node* current);
public:
	GBST();
	~GBST();
	void add(Product* toAdd);
};
#endif
