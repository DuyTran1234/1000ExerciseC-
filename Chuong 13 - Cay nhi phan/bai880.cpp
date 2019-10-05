#include <iostream>
#include <math.h>
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
		addNodeInTree(tree->pRight,x);
	}
	else if(x < tree->data)
	{
		addNodeInTree(tree->pLeft,x);
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
		addNodeInTree(tree,x);
	}
}
bool kiemTraNguyenTo(int x)
{
	bool check = true;
	if(x == 1 || x == 0)
	{
		return false;
	}
	if(x == 5)
	{
		return true;
	}
	for(int i = 2; i <= x/2; i++)
	{
		if(x % i == 0)
		{
			check = false;
		}
	}
	return check;
}
void demSoLuong(node *tree, int &count)
{
	if(tree != NULL)
	{
		if(kiemTraNguyenTo(tree->data) == true)
		{
			if(tree->pLeft != tree->pRight && (tree->pLeft == NULL || tree->pRight == NULL))
			{
				count++;
			}
		}
		demSoLuong(tree->pLeft,count);
		demSoLuong(tree->pRight,count);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int dem = 0;
	demSoLuong(p,dem);
	cout<<"So luong phan tu thoa man dieu kien: "<<dem<<endl;
}