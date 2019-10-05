#include <iostream>
using namespace std;

struct PHANSO
{
	double tuSo;
	double mauSo;
};
struct node
{
	PHANSO data;
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
node* createNode(PHANSO x)
{
	node *p = new node;
	p->data.tuSo = x.tuSo;
	p->data.mauSo = x.mauSo;
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
		PHANSO x;
		cout<<"Nhap gia tri so nguyen "<<i<<": "<<endl;
		cout<<"Nhap tu so: ";
		cin>>x.tuSo;
		cout<<"Nhap mau so: ";
		cin>>x.mauSo;
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<i->data.tuSo<<"/"<<i->data.mauSo<<endl;
	}
}
int main()
{
	list lst;
	createList(lst);
	int n = 0;
	importList(lst,n);
	exportList(lst);
}