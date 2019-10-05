#include <iostream>
using namespace std;
void nhap(struct soPhuc &a);
void xuat(struct soPhuc a);
struct soPhuc tong2soPhuc(struct soPhuc a, struct soPhuc b);
struct soPhuc luyThuaBacN(struct soPhuc a);

struct soPhuc
{
	int a;		// phan thuc
	int b;		// phan ao
};
int main()
{
	soPhuc dcm1;
	nhap(dcm1);
	soPhuc dcm3 = luyThuaBacN(dcm1);
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
struct soPhuc luyThuaBacN(struct soPhuc a)
{
	int n = 0;
	soPhuc dcm2;
	cout<<"Nhap n = ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		dcm2 = tong2soPhuc(a,a);
	}
	return dcm2;
}