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
	if(tree != NULL)
	{
		node *p = new node;
		p->data = x;
		p->pLeft = NULL;
		p->pRight = NULL;
		tree = p;
	}
	else if(x < tree->data)
	{
		addNodeInTree(tree->pLeft, x);
	}
	else if(x > tree->data)
	{
		addNodeInTree(tree->pRight, x);
	}
}

int main()
{
	
}