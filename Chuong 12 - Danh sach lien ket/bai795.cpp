#include <iostream>
using namespace std;

struct Oxy
{
	double x;
	double y;
};
struct node
{
	Oxy data;
	node *pNext;
};