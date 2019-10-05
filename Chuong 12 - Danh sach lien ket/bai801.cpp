#include <iostream>
using namespace std;

struct SOTHUC
{
	int phanNguyen;
	int phanThuc;
};
struct node
{
	SOTHUC data;
	node *pNext;
};
node *createNode(SOTHUC x)
{
	node *p = new node;
	p->data.phanNguyen = x.phanNguyen;
	p->data.phanThuc = x.phanThuc;
	p->pNext = NULL;
	return p;
}

int main()
{
	
}