#include <iostream>
using namespace std;
struct node
{
	int data;
	node *pLeft;
	node *pRight;
};

void khoiTaoCay(node * &tree);
void ThemNodeVaoCay(node * &tree, int x);
void importTree(node * &tree);
void timMax(node *tree, int &max);
int main()
{
	node *p = new node;
	khoiTaoCay(p);
	importTree(p);
	int max = 0;
	timMax(p,max);
	cout<<"MAX = "<<max<<endl;
}
void khoiTaoCay(node * &tree)
{
	tree = NULL;
}
void ThemNodeVaoCay(node * &tree, int x)
{
	if(tree == NULL)
	{
		node *p = new node;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		tree = p;
	}
	else if(tree->data > x)
	{
		ThemNodeVaoCay(tree->pLeft, x);
	}
	else if(tree->data < x)
	{
		ThemNodeVaoCay(tree->pRight, x);
	}
}
void importTree(node * &tree)
{
	int n;
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 1; i <= n; ++i)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		ThemNodeVaoCay(tree, x);
	}
}
void timMax(node *tree, int &max)
{
	if(tree != NULL)
	{
		if(tree->data > max)
		{
			max = tree->data;
		}
		timMax(tree->pLeft,max);
		timMax(tree->pRight,max);
	}
}