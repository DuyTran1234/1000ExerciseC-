#include <iostream>
#include <string.h>
using namespace std;

struct DATE
{
	int day;
	int month;
	int year;	
};
struct NHANVIEN
{
	char hoTen[30];
	DATE ngaySinh;
	double luong;
	bool gioiTinh;
};
struct node
{
	NHANVIEN data;
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
node *createNode(NHANVIEN x)
{
	node *p = new node;
	strcpy(p->data.hoTen, x.hoTen);
	p->data.ngaySinh = x.ngaySinh;
	p->data.luong = x.luong;
	p->data.gioiTinh = x.gioiTinh;
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
	cout<<"Nhap so luong nhan vien: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 1; i <= n; i++)
	{
		NHANVIEN x;
		cout<<"Nhan vien "<<i<<": "<<endl;
		cout<<"Nhap ho ten: ";
		cin.getline(x.hoTen,30);
		cout<<"Nhap ngay sinh: "<<endl;
		cout<<"Ngay: ";
		cin>>x.ngaySinh.day;
		cin.ignore(32767,'\n');
		cout<<"Thang: ";
		cin>>x.ngaySinh.month;
		cin.ignore(32767,'\n');
		cout<<"Nam: ";
		cin>>x.ngaySinh.year;
		cin.ignore(32767,'\n');
		cout<<"Nhap muc luong: ";
		cin>>x.luong;
		cin.ignore(32767,'\n');
		cout<<"Nhap gioi tinh (Nam: 1, Nu: 0) : ";
		cin>>x.gioiTinh;
		cin.ignore(32767,'\n');
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<"NHAN VIEN: "<<endl;
		cout<<"Ho ten: "<<i->data.hoTen<<endl;
		cout<<"Ngay sinh: "<<i->data.ngaySinh.day<<"/"<<i->data.ngaySinh.month<<"/"<<i->data.ngaySinh.year<<endl;
		cout<<"Muc luong: "<<i->data.luong<<endl;
		cout<<"Gioi tinh: ";
		if(i->data.gioiTinh == true)
		{
			cout<<"Nam"<<endl;
		}
		else
		{
			cout<<"Nu"<<endl;
		}
		cout<<endl;
	}
}
void exportListUpTo40YearsOld(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(2019 - i->data.ngaySinh.year >= 40)
		{
			cout<<i->data.hoTen<<endl;
		}
	}
}
int countSalaryUpTo500(list l)
{
	int count = 0;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.luong > 500)
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

void sortDescendingYearsOld(list &l)
{
	for(node *i = l.pHead; i != l.pTail; i = i->pNext)
	{
		for(node *j = i->pNext; j != NULL; j = j->pNext)
		{
			if(2019 - i->data.ngaySinh.year < 2019 - j->data.ngaySinh.year)
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
	exportList(l);
	cout<<"Nhung nguoi tren 40 tuoi: "<<endl;
	exportListUpTo40YearsOld(l);
	cout<<"So luong nhan vien > 500$: "<<countSalaryUpTo500(l)<<endl;
	cout<<"DSLK sau khi sap xep giam dan theo nam sinh: "<<endl;
	sortDescendingYearsOld(l);
	exportList(l);
}