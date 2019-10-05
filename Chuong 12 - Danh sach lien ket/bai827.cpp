#include <iostream>
#include <string.h>
using namespace std;

struct PHONG
{
	char maPhong[5];
	char tenPhong[30];
	double donGia;
	int soLuongGiuong;
	bool tinhTrang;	
};
struct node
{
	PHONG data;
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
node *createNode(PHONG x)
{
	node *p = new node;
	p->data.donGia = x.donGia;
	strcpy(p->data.maPhong, x.maPhong);
	strcpy(p->data.tenPhong, x.tenPhong);
	p->data.soLuongGiuong = x.soLuongGiuong;
	p->data.tinhTrang = x.tinhTrang;
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
	for(int i = 1; i <= n; i++)
	{
		PHONG x;
		cout<<"PHONG "<<i<<": "<<endl;
		cout<<"Nhap ma phong: ";
		cin.getline(x.maPhong,5);
		cout<<"Nhap ten phong: ";
		cin.getline(x.tenPhong,30);
		cout<<"Nhap don gia thue: ";
		cin>>x.donGia;
		cout<<"So luong giuong: ";
		cin>>x.soLuongGiuong;
		cout<<"Tinh trang phong (0: ranh, 1: ban): ";
		cin>>x.tinhTrang;
		cin.ignore(32767,'\n');
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<"PHONG: "<<endl;
		cout<<"Ma phong: "<<i->data.maPhong<<endl;
		cout<<"Ten phong: "<<i->data.tenPhong<<endl;
		cout<<"Don gia thue: "<<i->data.donGia<<endl;
		cout<<"So luong giuong: "<<i->data.soLuongGiuong<<endl;
		cout<<"Tinh trang phong: ";
		if(i->data.tinhTrang == true)
		{
			cout<<"Ban"<<endl;
		}
		else
		{
			cout<<"Ranh"<<endl;
		}
	}
}
void lietKePhongTrong(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.tinhTrang == false)
		{
			cout<<"Ma phong: "<<i->data.maPhong<<endl;
			cout<<"Ten phong: "<<i->data.tenPhong<<endl;
		}
	}
}
int tongSoLuongGiuong(list l)
{
	int S = 0;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		S = S + i->data.soLuongGiuong;
	}
	return S;
}
void exchangeNodeData(node *a, node *b)
{
	node *temp = createNode(a->data);
	a->data = b->data;
	b->data = temp->data;
}
void sortAscending(list &l)
{
	for(node *i = l.pHead; i != l.pTail; i = i->pNext)
	{
		for(node *j = i->pNext; j != NULL; j = j->pNext)
		{
			if(i->data.donGia > j->data.donGia)
			{
				exchangeNodeData(i,j);
			}
		}
	}
}
int main()
{
	list l;
	createList(l);
	importList(l);
	exportList(l);
	cout<<"Cac phong trong trong danh sach: "<<endl;
	lietKePhongTrong(l);
	cout<<"Tong so luong giuong: "<<tongSoLuongGiuong(l)<<endl;
	cout<<"DSLK sau khi sap xep tang dan: "<<endl;
	sortAscending(l);
	exportList(l);
}