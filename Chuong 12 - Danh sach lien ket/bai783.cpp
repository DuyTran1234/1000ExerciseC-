#include <iostream>
using namespace std;

struct phanSo
{
	double tuSo;
	double mauSo;
};
struct node
{
	phanSo data;
	node *pNext;
};
node* createNode(struct phanSo x)
{
	node *p = new node;
	p->data = x;
	p->pNext = NULL;
	return p;
}

int main()
{
	
}