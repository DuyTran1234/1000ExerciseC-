#include <iostream>
#include <string.h>
using namespace std;

struct HOCSINH
{
	char hoTen[30];
	double diemToan;
	double diemVan;
	double diemTB;	
};
struct node
{
	HOCSINH data;
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
node *createNode(HOCSINH x)
{
	node *p = new node;
	p->data.diemToan = x.diemToan;
	strcpy(p->data.hoTen, x.hoTen);
	p->data.diemVan = x.diemVan;
	p->data.diemTB = x.diemTB;
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
void importList(list &l, int &n)
{
	cout<<"Nhap so luong hoc sinh: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 1; i <= n; i++)
	{
		HOCSINH x;
		cout<<"HOC SINH "<<i<<": "<<endl;
		cout<<"Nhap ho ten: ";
		cin.getline(x.hoTen,30);
		cout<<"Nhap diem toan: ";
		cin>>x.diemToan;
		cout<<"Nhap diem van: ";
		cin>>x.diemVan;
		cin.ignore(32767,'\n');
		x.diemTB = (x.diemToan + x.diemVan)/2;
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<"HOC SINH: "<<endl;
		cout<<"Ho ten: "<<i->data.hoTen<<endl;
		cout<<"Diem toan: "<<i->data.diemToan<<endl;
		cout<<"Diem van: "<<i->data.diemVan<<endl;
		cout<<"Diem TB: "<<i->data.diemTB<<endl;
		cout<<endl;
	}
}
void exportStudentDownToMath5(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.diemToan < 5)
		{
			cout<<i->data.hoTen<<endl;
		}
	}
}
int countStudent(list l)
{
	int count;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.diemToan > 8 && i->data.diemVan > 8)
		{
			count++;
		}
	}
	return count;
}
void exchangeDataNode(node *a, node *b)
{
	node *temp = new node;
	temp->data = a->data;
	a->data = b->data;
	b->data = temp->data;
}
void sortDescendingMediumScore(list &l)
{
	for(node *i = l.pHead; i != l.pTail; i = i->pNext)
	{
		for(node *j = i->pNext; j != NULL; j = j->pNext)
		{
			if(i->data.diemTB < j->data.diemTB)
			{
				exchangeDataNode(i,j);
			}
		}
	}
}
int main()
{
	list l;
	createList(l);
	int n;
	importList(l,n);
	cout<<"DANH SACH HOC SINH: "<<endl;
	exportList(l);
	cout<<endl;
	cout<<"Cac hoc sinh co diem toan duoi 5: "<<endl;
	exportStudentDownToMath5(l);
	cout<<"So luong hoc sinh co toan va van > 8: "<<countStudent(l)<<endl;
	cout<<"Mang sau khi sap xep giam dan theo diem TB: "<<endl;
	sortDescendingMediumScore(l);
	exportList(l);
	cout<<endl;
}