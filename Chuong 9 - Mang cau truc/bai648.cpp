#include <iostream>
using namespace std;
void nhap(struct SOPHUC a[], int &n);
void xuat(struct SOPHUC a[], int n);
void tongSoPhuc(struct SOPHUC a[], int n);
struct SOPHUC nhan2SoPhuc(struct SOPHUC a, struct SOPHUC b);
struct SOPHUC
{
	int a;
	int b;
};
int main()
{	
	SOPHUC dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	tongSoPhuc(dcm,mSize);
}
void nhap(struct SOPHUC a[], int &n)
{
	cout<<"Nhap so luong so phuc can nhap: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap so thuc "<<i<<": "<<endl;
		cout<<"Phan thuc: ";
		cin>>a[i].a;
		cout<<"Phan ao: ";
		cin>>a[i].b;
	}
}
void xuat(struct SOPHUC a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i].a<<" + "<<a[i].b<<"i"<<endl;
	}
}
void tongSoPhuc(struct SOPHUC a[], int n)
{
	SOPHUC m = a[0];
	for(int i = 1; i < n; i++)
	{
		 m = nhan2SoPhuc(m,a[i]);
	}
	cout<<"Tong cac so phuc: "<<m.a<<" + "<<m.b<<"i"<<endl;
}
struct SOPHUC nhan2SoPhuc(struct SOPHUC a, struct SOPHUC b)
{
	struct SOPHUC c;
	c.a = a.a * b.a - a.b * b.b;
	c.b = a.a*b.b + b.a*a.b;
	return c;
}