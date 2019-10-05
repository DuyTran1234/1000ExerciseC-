#include <iostream>
#include <string.h>
using namespace std;

struct thiSinh
{
	char STT[5];
	char hoTen[30];
	int diemToan;
	int diemLy;
	int diemHoa;
	double diemTong;	
};
struct node
{
	thiSinh data;
	node *pNext;
};
node *createNode(thiSinh x)
{
	node *p = new node;
	strcpy(p->data.STT, x.STT);
	strcpy(p->data.hoTen, x.hoTen);
	p->data.diemToan = x.diemToan;
	p->data.diemLy = x.diemLy;
	p->data.diemHoa = x.diemHoa;
	p->data.diemTong = x.diemTong;
	return p;
}
int main()
{
	
}