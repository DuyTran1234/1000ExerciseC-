#include <iostream>
using namespace std;
void nhap(struct soPhuc &a);
void xuat(struct soPhuc a);
struct soPhuc tong2soPhuc(struct soPhuc a, struct soPhuc b);
struct soPhuc
{
	int a;		// phan thuc
	int b;		// phan ao
};
int main()
{
	soPhuc dcm1;
	soPhuc dcm2;
	nhap(dcm1);
	nhap(dcm2);
	soPhuc dcm3 = tong2soPhuc(dcm1,dcm2);
	xuat(dcm3);
}
void nhap(struct soPhuc &a)
{
	cout<<"Nhap phan thuc: ";
	cin>>a.a;
	cout<<"Nhap phan ao: ";
	cin>>a.b;
}
void xuat(struct soPhuc a)
{
	cout<<a.a<<" + "<<a.b<<"i"<<endl;
}
struct soPhuc tong2soPhuc(struct soPhuc a, struct soPhuc b)
{
	soPhuc c;
	c.a = a.a*b.a - a.b*b.b;
	c.b = a.a * b.b + b.a*a.b;
	return c;
}