#ifndef TRAN_ARRAY_H
#define TRAN_ARRAY_H
class Transaction;
class TranList
{
	class Node
	{
	public:
		Transaction* data;
		Node* next;
		Node(Transaction* data);
		~Node();
	};
	Node* root;
	Node* tail;
public:
	TranList();
	~TranList();
	void add(Transaction& toAdd);
};
#endif
