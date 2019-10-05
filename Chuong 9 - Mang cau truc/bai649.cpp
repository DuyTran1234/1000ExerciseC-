#include <iostream>
using namespace std;
void nhap(struct SOPHUC a[], int &n);
void xuat(struct SOPHUC a[], int n);
int dauTien(struct SOPHUC a[], int n);
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
	cout<<"So phuc dau tien duong: "<<dauTien(dcm,mSize)<<endl;
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
int dauTien(struct SOPHUC a[], int n)
{
	int index = -1;
	for(int i = 0; i < n; i++)
	{
		if(a[i].a > 0 && a[i].b > 0)
		{
			index = i;
			break;
		}
	}
	return index;
}