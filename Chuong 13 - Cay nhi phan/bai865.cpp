#include <iostream>
using namespace std;
struct node
{
	int data;
	node *pLeft;
	node *pRight;
};
void KhoiTaoCay(node* &tree)
{
	tree = NULL;
}
void ThemNodeVaoCay(node* &tree, int x)
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
		ThemNodeVaoCay(tree,x);
		cout<<tree<<endl;
	}
}
void demSoAm(node *tree, int &count)
{
	if(tree != NULL)
	{
		if(tree->data < 0)
		{
			count++;
		}
		demSoAm(tree->pLeft,count);
		demSoAm(tree->pRight,count);
	}
}
int main()
{
	node *p = new node;
	KhoiTaoCay(p);
	cout<<p<<endl;
	importTree(p);
	
	
	int count = 0;
	demSoAm(p,count);
	cout<<"So luong so am: "<<count<<endl;
}