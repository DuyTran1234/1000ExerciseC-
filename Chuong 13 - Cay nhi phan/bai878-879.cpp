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
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		addNodeInTree(tree,x);
	}
}
void Count(node *tree, int &count)
{
	if(tree != NULL)
	{
		if(tree->data % 2 == 0)
		{
			count++;
		}
		Count(tree->pLeft,count);
		Count(tree->pRight, count);
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int n = 0;
	Count(p,n);
	cout<<"So luong nut chan: "<<n<<endl;
}