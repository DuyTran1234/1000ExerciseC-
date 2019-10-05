#include <iostream>
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
	for(int i = 1; i <= n; i++)
	{
		OXY x;
		cout<<"Nhap toa do diem "<<i<<": "<<endl;
		cout<<"Hoanh do: ";
		cin>>x.x;
		cout<<"Tung do: ";
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
int main()
{
	list l;
	createList(l);
	int n;
	importList(l,n);
	exportList(l);
}