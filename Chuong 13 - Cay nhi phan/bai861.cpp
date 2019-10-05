#include <iostream>
using namespace std;

struct node
{
	int data;
	node *pLeft;
	node *pRight;
};
void KhoiTaoCay(node * &tree);
void ThemNodeVaoCay(node * &tree, int x);
void importTree(node * &p);
void DuyetNLR(node *p);
int main()
{
	node *tree = new node;
	KhoiTaoCay(tree);
	importTree(tree);
	DuyetNLR(tree);
}
void KhoiTaoCay(node * &tree)
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
void importTree(node * &p)
{
	while(true)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		ThemNodeVaoCay(p,x);
		int choice;
		cout<<"Ban co muon tiep tuc? (1: YES, 0: NO) : ";
		cin>>choice;
		if(choice == 0)
		{
			break;
		}
	}
}
void DuyetNLR(node *p)
{
	if(p != NULL)
	{
		cout<<p->data<<endl;
		DuyetNLR(p->pLeft);
		DuyetNLR(p->pRight);
	}
}