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
void demSoLuong(node *tree, int k, int &count)
{
	if(tree != NULL)
	{
		demSoLuong(tree->pLeft,k - 1, count);
		if(k < 0)
		{
			count++;
		}
		demSoLuong(tree->pRight, k - 1, count);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int dem = 0;
	int k;
	cout<<"Nhap tang k can dem: ";
	cin>>k;
	demSoLuong(p,k,dem);
	cout<<"So luong nut nam thap hon tang "<<k<<": "<<dem<<endl;
}