#include <iostream>
using namespace std;
void nhap(struct SOPHUC a[], int &n);
void xuat(struct SOPHUC a[], int n);
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
	xuat(dcm,mSize);
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