#include <iostream>
using namespace std;

struct node
{
	int data;
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
node* createNode(int x)
{
	node *p = new node;
	p->data = x;
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
void importList(int &n, list &lst)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		node *p = new node;
		cout<<"Nhap gia tri: ";
		cin>>x;
		p = createNode(x);
		addHeadList(lst,p);
	}
}
void exportList(list lst)
{
	for(node *i = lst.pHead; i != NULL; i = i->pNext)
	{
		cout<<i->data<<endl;
	}
}
bool checkListEmpty(list lst)
{
	if(lst.pHead == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	list lst;
	createList(lst);
	int n;
	importList(n,lst);
	checkListEmpty(lst);
	exportList(lst);
}