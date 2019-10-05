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
	for(int i = 1; i <= n; i++)
	{
		int x;
		cout<<"Nhap gia tri so nguyen: ";
		cin>>x;
		addNodeInTree(tree,x);
	}
}
void chieuCaoCay(node *tree, int &m, int &n)
{
	if(tree != NULL)
	{	
		if(tree->pLeft != NULL || tree->pRight != NULL)
		{
			cout<<tree->data<<endl;
		}
		chieuCaoCay(tree->pLeft,m,n);
		chieuCaoCay(tree->pRight,m,n);	
	}
}
int main()
{
	node *p = new node;
	createTree(p);
	importTree(p);
	int m = 0;
	int n = 0;
	int h = 0;
	chieuCaoCay(p,m,n);
	cout<<"m = "<<m<<endl;
	cout<<"n = "<<n<<endl;
	if(m > n)
	{
		h = m - 1;
	}
	else
	{
		h = n - 1;
	}
	cout<<"Chieu cao: "<<h<<endl;

}