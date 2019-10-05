#include <iostream>
using namespace std;

struct node
{
	int data;
	node *pNext;
	node *pPrev;
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
node *createNode(int x)
{
	node *p = new node;
	p->data = x;
	p->pNext = NULL;
	p->pPrev = NULL;
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
		p->pPrev = l.pTail;
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
		l.pHead->pPrev = p;
		l.pHead = p;
	}
}
void importList(list &l)
{
	int n;
	cout<<"Nhap so luong: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"Nhap gia tri "<<i<<": ";
		cin>>x;
		node *p = createNode(x);
		addHeadList(l,p);
	}
}
void exportHeadToTail(list l)
{
	for(node *i = l.pHead; i != l.pTail->pNext; i = i->pNext)
	{
		cout<<i->data<<endl;
	}
}
void exportTailToHead(list l)
{
	for(node *i = l.pTail; i != NULL; i = i->pPrev)
	{
		cout<<i->data<<endl;
	}
}
int main()
{
	list l;
	createList(l);
	importList(l);
	exportHeadToTail(l);
	cout<<endl;
	exportTailToHead(l);
}