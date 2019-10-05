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
node *createNode(int x)
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
void importList(list &l)
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"Gia tri phan tu "<<i<<": ";
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
void noi2DSLK(list &lst1, list &lst2)
{
	lst1.pTail->pNext = lst2.pHead;
}
int main()
{
	list lst1;
	list lst2;
	createList(lst1);
	createList(lst2);
	cout<<"Nhap danh sach 1: "<<endl;
	importList(lst1);
	cout<<"DSLK 1: "<<endl;
	exportList(lst1);
	cout<<endl<<endl;
	cout<<"Nhap danh sach 2: "<<endl;
	importList(lst2);
	cout<<"DSLK 2: "<<endl;
	exportList(lst2);
	cout<<"\n\n";
	cout<<"DSLK sau khi noi: "<<endl;
	noi2DSLK(lst1,lst2);
	exportList(lst1);
	
}