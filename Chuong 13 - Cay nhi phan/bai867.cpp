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
void totalValue(node *tree, bool &check)
{
	if(tree != NULL)
	{
		if(tree->data == 0)
		{
			check = true;
		}
		totalValue(tree->pLeft,check);
		totalValue(tree->pRight,check);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	bool check = false;
	cout<<"Ton tai gia tri 0? : "<<check<<endl;
}