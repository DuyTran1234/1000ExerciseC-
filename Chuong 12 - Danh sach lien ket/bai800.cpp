#include <iostream>
using namespace std;

struct node
{
	int data;
	node *pNext;
};
node *createNode(int x)
{
	node *p = new node;
	p->data = x;
	p->pNext = NULL;
	return p;
}

int main()
{
	
}