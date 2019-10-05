#include <iostream>
using namespace std;

struct SOPHUC
{
	double phanThuc;
	double phanAo;
};

struct node
{
	SOPHUC data;
	node *pNext;
};

node *createNode(SOPHUC x)
{
	node *p = new node;
	p->data.phanThuc = x.phanThuc;
	p->data.phanAo = x.phanAo;
	p->pNext = NULL;
	return p;
}