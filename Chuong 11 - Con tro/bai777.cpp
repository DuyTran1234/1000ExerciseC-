#include <iostream>
using namespace std;
void hoanVi(int *x, int *y);
int main()
{
	cout<<"Nhap 2 so can hoan vi: "<<endl;
	int *a = new int;
	int *b = new int;
	cout<<"Nhap a: ";
	cin>>*a;
	cout<<"Nhap b: ";
	cin>>*b;
	hoanVi(a,b);
	cout<<"2 so sau khi hoan vi: "<<endl;
	cout<<"a = "<<*a<<endl;
	cout<<"b = "<<*b<<endl;
	delete a;
	delete b;
}
void hoanVi(int *x, int *y)
{
	int *temp = new int;
	*temp = *x;
	*x = *y;
	*y = *temp;
	delete temp;
}