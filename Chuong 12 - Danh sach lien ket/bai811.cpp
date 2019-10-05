#include <iostream>
using namespace std;

struct SOTHUC
{
	int phanNguyen;
	int phanThapPhan;
};

struct node
{
	SOTHUC data;
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
node *createNode(SOTHUC x)
{
	node *p = new node;
	p->data.phanNguyen = x.phanNguyen;
	p->data.phanThapPhan = x.phanThapPhan;
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
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		SOTHUC x;
		cout<<"Nhap so phuc "<<i<<": "<<endl;
		cout<<"Phan nguyen: ";
		cin>>x.phanNguyen;
		cout<<"Phan thap phan: ";
		cin>>x.phanThapPhan;
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<i->data.phanNguyen<<","<<i->data.phanThapPhan<<endl;
	}
}
int main()
{
	list l;
	createList(l);
	int n;
	importList(l,n);
	exportList(l);
}