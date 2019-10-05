#include <iostream>
#include <math.h>
using namespace std;

struct OXY
{
	double x;
	double y;	
};
struct node
{
	OXY data;
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
node *createNode(OXY x)
{
	node *p = new node;
	p->data.x = x.x;
	p->data.y = x.y;
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
	for(int i = 0; i < n; i++)
	{
		OXY x;
		cout<<"Diem thu "<<i<<": "<<endl;
		cout<<"Nhap hoanh do: ";
		cin>>x.x;
		cout<<"Nhap tung do: ";
		cin>>x.y;
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<"M("<<i->data.x<<","<<i->data.y<<")"<<endl;
	}
}
void lietKePhanI(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		if(i->data.x > 0 && i->data.y > 0)
		{
			cout<<"M("<<i->data.x<<","<<i->data.y<<")"<<endl;
		}
	}
}
node *tungDoMax(list l)
{
	node *max = l.pHead;
	for(node *i = l.pHead; i !=  NULL; i = i->pNext)
	{
		if(i->data.y > max->data.y)
		{
			max = i;
		}
	}
	return max;
}
void exchangeDataNode(node *a, node *b)
{
	node *temp = createNode(a->data);
	a->data = b->data;
	b->data = temp->data;
}
void sortDescending(list &l)
{
	for(node *i = l.pHead; i != l.pTail; i = i->pNext)
	{
		for(node *j = i->pNext; j != NULL; j = j->pNext)
		{
			if( pow(i->data.x,2) + pow(i->data.y,2) < pow(j->data.x,2) + pow(j->data.y,2))
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
	cout<<"Cac toa do nam trong goc phan tu thu nhat: "<<endl;
	lietKePhanI(l);
	cout<<"Diem co tung do lon nhat: ";
	cout<<"M("<<tungDoMax(l)->data.x<<","<<tungDoMax(l)->data.y<<")"<<endl;
	cout<<"Danh sach sau khi sap xep giam dan theo khoang cach tu diem den goc toa do: "<<endl;
	sortDescending(l);
	exportList(l);
}