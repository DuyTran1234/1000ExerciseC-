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
	else if(x < tree->data)
	{
		addNodeInTree(tree->pLeft, x);
	}
	else if(x > tree->data)
	{
		addNodeInTree(tree->pRight, x);
	}
}
void importTree(node * &tree, int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n ; i++)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		addNodeInTree(tree,x);
	} 
}
void xuat(node *tree, int &k)
{
	if(tree != NULL)
	{
		if( (tree->pLeft == NULL && tree->pRight != NULL) || (tree->pRight == NULL && tree->pLeft != NULL))
		{
			k++;
		}
		xuat(tree->pLeft,k);
		xuat(tree->pRight,k);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	int n;
	importTree(p,n);
	int k = 0;
	xuat(p,k);
	cout<<"So luong node co dung 1 child: "<<k<<endl;
}