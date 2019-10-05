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
	else if(tree->data < x)
	{
		addNodeInTree(tree->pRight, x);
	}
	else if(tree->data > x)
	{
		addNodeInTree(tree->pLeft, x);
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
void totalValue(node *tree, int &S)
{
	if(tree != NULL)
	{
		if(tree->data < 2004 && tree->data > 0)
		{
			S = S + tree->data;
		}
		totalValue(tree->pLeft,S);
		totalValue(tree->pRight,S);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int S = 0;
	totalValue(p,S);
	cout<<"S = "<<S<<endl;
}