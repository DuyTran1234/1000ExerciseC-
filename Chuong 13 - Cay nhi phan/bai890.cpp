#include <iostream>
using namespace std;
struct node
{
	int data;
	node *pLeft;
	node *pRight;
};
void createTree(node * &tree)
{
	tree = NULL;
}
void addNodeInTree(node * &tree, int x)
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
		addNodeInTree(tree->pLeft, x);
	}
}
void importTree(node * &tree)
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 0; i < n ; i++)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		addNodeInTree(tree, x);
	}
}
void tongNutLe(node *tree, int &S)
{
	if(tree != NULL)
	{
		tongNutLe(tree->pLeft,S);
		if(tree->data % 2 == 0)
		{
			S = S + tree->data;
		}
		tongNutLe(tree->pRight, S);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int S = 0;
	tongNutLe(p,S);
	cout<<"S = "<<S<<endl;	
}