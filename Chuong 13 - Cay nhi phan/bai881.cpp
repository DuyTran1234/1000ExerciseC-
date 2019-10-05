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
		addNodeInTree(tree,x);
	}
}
bool kiemTraChinhPhuong(int x)
{
	bool check = false;
	if(x == 0)
	{
		return false;
	}
	if(x == 1)
	{
		return true;
	}
	for(int i = 2; i <= sqrt(x); i++)
	{
		if(i * i == x)
		{
			check = true;
		}
	}
	return check;
}
void demSoLuong(node *tree, int &count)
{
	if(tree != NULL)
	{
		if(kiemTraChinhPhuong(tree->data) == true)
		{
			if(tree->pLeft != NULL && tree->pRight != NULL)
			{
				count++;
			}
		}
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int n = 0;
	demSoLuong(p,n);
	cout<<"So luong phan tu thoa man dieu kien: "<<n<<endl;
}