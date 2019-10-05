#include <iostream>
using namespace std;

struct PHANSO
{
	double a;
	double b;
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
node *createNode(PHANSO x)
{
	node *p = new node;
	p->data.a = x.a;
	p->data.b = x.b;
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
		cout<<"Nhap phan so "<<i<<": "<<endl;
		cout<<"Tu so: ";
		cin>>x.a;
		cout<<"Mau so: ";
		cin>>x.b;
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<i->data.a<<"/"<<i->data.b<<endl;
	}
}

node *fractionMax(list l)
{
	node *max = new node;
	max = l.pHead;
	for(node *i = l.pHead->pNext; i != NULL; i = i->pNext)
	{
		if(i->data.a / i->data.b > max->data.a / max->data.b)
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
	int n;
	importList(l,n);
	exportList(l);
	cout<<"Phan so max: "<<fractionMax(l)->data.a<<"/"<<fractionMax(l)->data.b<<endl;
}