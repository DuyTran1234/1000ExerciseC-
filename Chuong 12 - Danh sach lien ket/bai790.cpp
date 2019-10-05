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
void addNodeBehindNode(list &l)
{
	if(l.pHead == l.pTail)
	{
		int x;
		cout<<"Nhap gia tri phan tu can them: ";
		cin>>x;
		node *p = createNode(x);
		addTailList(l,p);
	}
	else
	{
		int x,y;
		cout<<"Nhap gia tri phan tu can them: ";
		cin>>x;
		cout<<"Nhap gia tri node can them vao sau: ";
		cin>>y;
		for(node *i = l.pHead; i != NULL; i = i->pNext)
		{
			if(i->data == y)
			{
				node *p = createNode(x);
				p->pNext = i->pNext;
				i->pNext = p;
			}
		}
	}
}
void importList(int &n, list &l)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<i->data<<endl;	
	}
}
int main()
{
	list lst;
	createList(lst);
	int n;
	importList(n,lst);
	exportList(lst);
	addNodeBehindNode(lst);
	exportList(lst);
}