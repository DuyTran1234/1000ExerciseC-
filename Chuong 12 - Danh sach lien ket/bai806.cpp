#include <iostream>
using namespace std;

struct OXY
{
	double x;
	double y;
};
struct node
{
	OXY data;
	node *pNext;
};
node *createNode(OXY x)
{
	node *p = new node;
	p->data.x = x.x;
	p->data.y = x.y;
	p->pNext = NULL;
	return p;
}

int main()
{
	
}