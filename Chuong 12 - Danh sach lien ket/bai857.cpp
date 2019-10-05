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
		p->pPrev = l.pTail;
		l.pTail = p;
	}
}
void importList(list &l)
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"Nhap gia tri phan tu "<<i<<": ";
		cin>>x;
		node *p = createNode(x);
		addTailList(l,p);
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
void addNodeAheadNode(list &l)
{
	int x,y;
	cout<<"Nhap gia tri can them: ";
	cin>>x;
	cout<<"Nhap gia tri node q: ";
	cin>>y;
	for(node *i = l.pTail; i != NULL; i = i->pPrev)
	{
		if(i->data == y)
		{
			node *p = createNode(x);
		 	p->pPrev = i->pPrev;
		 	i->pPrev->pNext = p;
		 	p->pNext = i;
		 	i->pPrev = p;
		}
	}
}
int main()
{
	list l;
	createList(l);
	importList(l);
	exportHeadToTail(l);
	addNodeAheadNode(l);
	cout<<"DSLK khi them node p vao truoc node q: "<<endl;
	exportHeadToTail(l);
	cout<<endl;
}