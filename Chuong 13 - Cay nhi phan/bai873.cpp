#include <iostream>
using namespace std;
struct node
{
	int data;
	node *pLeft;
	node *pRight;
};
void createTree(node* &tree)
{
	tree = NULL;
}
void addNodeInTree(node* &tree, int x)
{
	if(tree == NULL)
	{
		node *p = new node;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		tree = p;
	}
	else if(x > tree->data)
	{
		addNodeInTree(tree->pRight, x);
	}
	else if(x < tree->data)
	{
		addNodeInTree(tree->pRight, x);
	}
}
void importTree(node* &tree)
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		addNodeInTree(tree, x);
	}
}
bool kiemTraHoanThien(int x){
	int S = 0;
	for(int i = 2; i < x; i++)
	{
		if(x % i == 0)
		{
			S = S + i;
		}
	}
	if(S + 1 == x && x != 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
void xuatSoHoanThien(node *tree)
{
	if(tree != NULL)
	{
		if(kiemTraHoanThien(tree->data) == true)
		{
			cout<<tree->data<<endl;
		}
		xuatSoHoanThien(tree->pLeft);
		xuatSoHoanThien(tree->pRight);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	xuatSoHoanThien(p);
}