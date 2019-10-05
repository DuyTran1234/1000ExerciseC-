#include <iostream>
#include <string.h>
using namespace std;

struct SACH
{
	char tenSach[50];
	char tacGia[30];
	int namXuatBan;	
};

struct node
{
	SACH data;
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
node *createNode(SACH x)
{
	node *p = new node;
	strcpy(p->data.tenSach, x.tenSach);
	strcpy(p->data.tacGia, x.tacGia);
	p->data.namXuatBan = x.namXuatBan;
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
void addHeadList(list &l, node *p)
{
	if(l.pHead == NULL)
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		p->pNext = l.pHead;
		l.pHead = p;
	}
}
void importList(list &l)
{
	int n;
	cout<<"Nhap so luong sach: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 1; i <= n; i++)
	{
		SACH x;
		cout<<"SACH "<<i<<": "<<endl;
		cout<<"Nhap ten sach: ";
		cin.getline(x.tenSach,50);
		cout<<"Nhap ten tac gia: ";
		cin.getline(x.tacGia,30);
		cout<<"Nhap nam xuat ban: ";
		cin>>x.namXuatBan;
		cin.ignore(32767,'\n');
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<"SACH: "<<endl;
		cout<<"Ten sach: "<<i->data.tenSach<<endl;
		cout<<"Ten tac gia: "<<i->data.tacGia<<endl;
		cout<<"Nam xuat ban: "<<i->data.namXuatBan<<endl;
	}
}
node *sachCuNhat(list l)
{
	node *min = new node;
	int nMin = l.pHead->data.namXuatBan;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.namXuatBan < min->data.namXuatBan)
		{
			min = i;
			nMin = i->data.namXuatBan;
		}
	}
	return min;
}
node *namXuatBanMax(list l)
{
	node *pMax = new node;
	int max = 0;
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		int count = 0;
		for(node *j = l.pHead; j != NULL; j = j->pNext)
		{
			if(i->data.namXuatBan == j->data.namXuatBan)
			{
				count++;
			}
		}
		if(count > max)
		{
			max = count;
			pMax = i;
		}	
	}
	return pMax;
}
void sachXuatBan(list l, node *p)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.namXuatBan == p->data.namXuatBan)
		{
			cout<<i->data.tenSach<<endl;
		}
	}
}
int main()
{
	list l;
	createList(l);
	importList(l);
	exportList(l);
	cout<<"Sach cu nhat: "<<sachCuNhat(l)->data.tenSach<<endl;
	cout<<"Nam co nhieu sach xuat ban nhat: "<<namXuatBanMax(l)->data.namXuatBan<<endl;
	cout<<"Cac sach duoc xuat ban trong nam do: "<<endl;
	sachXuatBan(l,namXuatBanMax(l));
}