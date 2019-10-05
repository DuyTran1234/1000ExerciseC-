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
void createList(list &lst)
{
	lst.pHead = lst.pTail = NULL;
}
node* createNode(int x)
{
	node *p = new node;
	p->data = x;
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

int main()
{
	list lst;
	createList(lst);
	
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		node *p = new node;
		cout<<"Nhap gia tri phan tu: ";
		cin>>x;
		p = createNode(x);
		addTailList(lst,p);
	}
}