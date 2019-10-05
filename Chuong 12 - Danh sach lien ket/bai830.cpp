#include <iostream>
#include <string.h>
using namespace std;

struct NGAY
{
	int ngay;
	int thang;
	int nam;
};
struct THOIGIAN
{
	int gio;
	int phut;
};
struct VE
{
	char tenPhim[20];
	int giaTien;
	THOIGIAN xuatChieu;
	NGAY ngayXem;
};
struct node
{
	VE data;
	node *pNext;
};
struct list
{
	node *pHead;
	node *pTail;
};
int main()
{
	
}
void createList(list &l)
{
	l.pHead = l.pTail = NULL;
}
node *createNode(VE x)
{
	node *p = new node;
	strcpy(p->data.tenPhim, x.tenPhim);
	p->data.giaTien = x.giaTien;
	p->data.xuatChieu.gio = x.xuatChieu.gio;
	p->data.xuatChieu.phut = x.xuatChieu.phut;
	p->data.ngayXem.ngay = x.ngayXem.ngay;
	p->data.ngayXem.thang = x.ngayXem.thang;
	p->data.ngayXem.nam = x.ngayXem.nam;
	p->pNext = NULL;
	return p;
}
void addTailList(list &l, node *p)
{
	if(l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;
		l.pTail = p;
	}
}
int main()
{
	
}