#include <iostream>
using namespace std;

struct soThuc
{
	double phanNguyen;
	double phanThuc;
};
struct node
{
	soThuc data;
	node *pNext;
};