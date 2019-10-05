#include <iostream>
using namespace std;

struct hocSinh
{
	char hoTen[30];
	short diemToan;
	short diemVan;
	double diemTB;
};
struct node
{
	hocSinh data;
	node *pNext;
};