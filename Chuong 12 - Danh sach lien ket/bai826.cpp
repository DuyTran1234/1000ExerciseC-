#include <iostream>
#include <string.h>
using namespace std;

struct DATE{
	int day;
	int month;
	int year;
};
struct HOPSUA
{
	char nhanHieu[20];
	double trongLuong;
	DATE NSX;	
};
struct node
{
	HOPSUA data;
	node *pNext;
};
struct list
{
	node *pHead;
	node *pTail;
};
void createList(list &l)
{
	l.pHead = l.pTail = NULL;
}
node *createNode(HOPSUA x)
{
	node *p = new node;
	p->data.trongLuong = x.trongLuong;
	strcpy(p->data.nhanHieu,x.nhanHieu);
	p->data.NSX.day = x.NSX.day;
	p->data.NSX.month = x.NSX.month;
	p->data.NSX.year = x.NSX.year;
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
void importList(list &l)
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		HOPSUA x;
		cout<<"HOP SUA "<<i<<": "<<endl;
		cout<<"Nhap nhan hieu: ";
		cin.getline(x.nhanHieu,20);
		cout<<"Nhap trong luong: ";
		cin>>x.trongLuong;
		cout<<"Nhap NSX: "<<endl;
		cout<<"Ngay: ";
		cin>>x.NSX.day;
		cout<<"Thang: ";
		cin>>x.NSX.month;
		cout<<"Nam: ";
		cin>>x.NSX.year;
		cin.ignore(32767,'\n');
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<"HOP SUA: "<<endl;
		cout<<"Nhan hieu: "<<i->data.nhanHieu<<endl;
		cout<<"Trong luong: "<<i->data.trongLuong<<endl;
		cout<<"NSX: "<<i->data.NSX.day<<"/"<<i->data.NSX.month<<"/"<<i->data.NSX.year<<endl;
	}
}
int demHopSua(list l)
{
	int count = 0;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.NSX.year <= 2003)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	list l;
	createList(l);
	importList(l);
	exportList(l);
	cout<<"So luong hop sua san xuat truoc 2003: "<<demHopSua(l)<<endl;
	
}