#include <iostream>
using namespace std;

struct SOPHUC
{
	double phanThuc;
	double phanAo;
};
struct node
{
	SOPHUC data;
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
node* createNode(SOPHUC x)
{
	node *p = new node;
	p->data.phanThuc = x.phanThuc;
	p->data.phanAo = x.phanAo;
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
		SOPHUC x;
		cout<<"Nhap so phuc "<<i<<": "<<endl;
		cout<<"Phan thuc: ";
		cin>>x.phanThuc;
		cout<<"Phan ao: ";
		cin>>x.phanAo;
		node *p = createNode(x);
		addTailList(l,p);
	}
}
void exportList(list l)
{
	for(node *i = l.pHead; i != NULL; i = i->pNext)
	{
		cout<<i->data.phanThuc<<" + "<<i->data.phanAo<<"i"<<endl;
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