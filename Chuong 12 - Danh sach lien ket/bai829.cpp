#include <iostream>
#include <string.h>
using namespace std;
struct TINH
{
	char tenTinh[30];
	double S;
	int danSo;	
};
struct node
{
	TINH data;
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
node *createNode(TINH x)
{
	node *p = new node;
	if(p == NULL)
	{
		cout<<"DCM"<<endl;
	}
	strcpy(p->data.tenTinh,x.tenTinh);
	p->data.S = x.S;
	p->data.danSo = x.danSo;
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
		TINH x;	
		cout<<"TINH "<<i<<": "<<endl;
		cout<<"Nhap ten tinh: ";
		cin.getline(x.tenTinh,30);
		cout<<"Nhap dien tich: ";
		cin>>x.S;
		cout<<"Nhap dan so: ";
		cin>>x.danSo;
		cin.ignore(32767,'\n');
		node *p = createNode(x);
		addTailList(l,p);
	}
}
double tongDienTich(list l)
{
	double S = 0;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		S = S + i->data.S;	
	}
	return S;
}
node *diaChiSMax(list l)
{
	node *max = new node;
	max = l.pHead;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.S > max->data.S)
		{
			max = i;
		}
	}
	return max;
}
node *tinhDanSoMax(list l)
{
	node *max = new node;
	max = l.pHead;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.danSo > max->data.danSo)
		{
			max = i;
		}	
	}
	return max;
}
int main()
{
	list l;
	createList(l);
	importList(l);
	cout<<"Tong dien tich cac tinh: "<<tongDienTich(l)<<endl;
	cout<<"Dia chi cua node chua tinh co S max: "<<diaChiSMax(l)<<endl;
	cout<<"Tinh co dan so max: "<<tinhDanSoMax(l)->data.tenTinh<<endl;
	
}