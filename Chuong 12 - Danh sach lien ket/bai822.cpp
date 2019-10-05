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
void exchangeNode(node *a, node *b);
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

void sortAscending(list &l)
{
	for(node *i = l.pHead; i != l.pTail; i = i->pNext)
	{
		if(i->data.a / i->data.b > 0)
		{
			for(node *j = i->pNext; j != NULL; j = j->pNext)
			{
				if(j->data.a / j->data.b > 0)
				{
					if(i->data.a / i->data.b > j->data.a / j->data.b)
					{
						exchangeNode(i,j);	
					}
				}
			}
		}
	}
}
void exchangeNode(node *a, node *b)
{
	node *temp = new node;
	temp->data = a->data;
	a->data = b->data;
	b->data = temp->data;
}


int main()
{
	list l;
	createList(l);
	int n;
	importList(l,n);
	exportList(l);
	sortAscending(l);
	cout<<"DSLK sau khi sap xep: "<<endl;
	exportList(l);
}