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
	for(int i = 1; i <= n ; i++)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		addNodeInTree(tree, x);
	}
}
void demSoLuong(node *tree, int &count)
{
	if(tree != NULL)
	{
		demSoLuong(tree->pLeft, count);
		if(tree->pLeft != NULL && tree->pRight != NULL)
		{
			count = count + tree->data;
		}
		demSoLuong(tree->pRight, count);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int dem = 0;
	demSoLuong(p,dem);
	cout<<"Tong cac nut cua cay "<<dem<<endl;
}