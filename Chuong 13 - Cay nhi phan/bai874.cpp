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
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		addNodeInTree(tree, x);
	}
}
void xuat(node *tree, int k)
{
	if(tree != NULL)
	{
		k--;
		cout<<k<<"dcm"<<endl;
		xuat(tree->pLeft,k);
		if(k == 0)
		{
			cout<<tree->data<<endl;		
		}
		xuat(tree->pRight,k);		
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int k;
	cout<<"Nhap tang k: ";
	cin>>k;
	xuat(p,k);	
}