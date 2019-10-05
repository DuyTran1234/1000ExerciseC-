#include <iostream>
using namespace std;

// Khai bao cau truc 1 node
struct node
{
	int data;
	node *pNext;	
};
// Khai bao 1 danh sach lien ket don
struct list
{
	node *pHead;
	node *pTail;
};
// Ham tao Node
node* createNode(int x)
{
	node *p = new node;
	p->data = x;
	p->pNext = NULL;
	return p;
}

int main()
{
	
}