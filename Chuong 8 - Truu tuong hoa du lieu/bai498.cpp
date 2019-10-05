#include <iostream>
using namespace std;
void nhap(struct daThuc a[], int &n);
void xuat(struct daThuc a[], int n);
void daoHam(struct daThuc a[], int n);
struct daThuc
{
	int a;
	int n;
};
int main()
{
	daThuc dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	daoHam(dcm,mSize);
	xuat(dcm,mSize);
}
void nhap(struct daThuc a[], int &n)
{
	cout<<"Nhap so luong cac don thuc trong da thuc: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap he so da thuc "<<i+1<<" : ";
		cin>>a[i].a;
		cout<<"Nhap so mu don thuc "<<i+1<<" : ";
		cin>>a[i].n;
	}
}
void xuat(struct daThuc a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i].a<<"x^"<<a[i].n;
		if(i != n - 1)
		{
			cout<<" + ";
		}
	}
	cout<<endl;
}
void daoHam(struct daThuc a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i].n != 0)
		{
			a[i].a = a[i].a * a[i].n;
			a[i].n = a[i].n - 1;
		}
		else
		{
			a[i].a = 0;
		}
	}
}