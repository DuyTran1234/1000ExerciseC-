#include <iostream>
#include <string.h>
using namespace std;

struct hocSinh
{
	char hoTen[30];
	short diemToan;
	short diemVan;
	double diemTB;
};
struct node
{
	hocSinh data;
	node *pNext;
};
node *createNode(hocSinh x)
{
	node *p = new node;
	strcpy(p->data.hoTen,x.hoTen);
	p->data.diemToan = x.diemToan;
	p->data.diemVan = x.diemVan;
	p->data.diemTB = x.diemTB;
	p->pNext = NULL;
	return p;
}

int main()
{
	
}