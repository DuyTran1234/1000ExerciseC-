#include <iostream>
using namespace std;

struct phanSo
{
	double tuSo;
	double mauSo;
};

struct node
{
	phanSo data;
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

node* createNode(phanSo x)
{
	node *p = new node;
	p->data.tuSo = x.tuSo;
	p->data.mauSo = x.mauSo;
	p->pNext = NULL;
	return p;
}

void addTailList(list &lst, node *p)
{
	if(lst.pHead == NULL)
	{
		lst.pHead = lst.pTail = p;
	}
	else
	{
		lst.pTail->pNext = p;
		lst.pTail = p;
	}
}
void importList(int &n, list &lst)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		phanSo x;
		node *p = new node;
		cout<<"Nhap tu so node "<<i<<": ";
		cin>>x.tuSo;
		cout<<"Nhap mau so node "<<i<<": ";
		cin>>x.mauSo;
		p = createNode(x);
		addTailList(lst,p);
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
	int n;
	importList(n,lst);
	exportList(lst);
}