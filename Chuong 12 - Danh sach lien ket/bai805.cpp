#include <iostream>
using namespace std;

struct PHONG
{
	char maPhong[5];
	char tenPhong[30];
	double donGia;
	int soLuong;
	bool tinhTrang;
};
struct node
{
	PHONG data;
	node *pNext;
};
node *createNode(PHONG x)
{
	node *p = new node;
	strcpy(p->data.maPhong, x.maPhong);
	strcpy(p->data.tenPhong, x.tenPhong);
	p->data.donGia = x.donGia;
	p->data.soLuong = x.soLuong;
	p->data.tinhTrang = x.tinhTrang;
	return p;
}

int main()
{
	
}