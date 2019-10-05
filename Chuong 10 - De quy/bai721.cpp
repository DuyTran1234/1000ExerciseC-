#include <iostream>
using namespace std;
void nhapMang(int a[], int n);
void xuat(int a[], int n);
int main()
{
	int nArray[1000];
	int mSize;
	cout<<"Nhap so luong phan tu: ";
	cin>>mSize;
	mSize--;
	nhapMang(nArray,mSize);
	xuat(nArray,mSize);
}
void nhapMang(int a[], int n)
{
	if(n == 0)
	{
		cout<<"a["<<n<<"] = ";
		cin>>a[n];
	}
	else
	{
		cout<<"a["<<n<<"] = ";
		cin>>a[n];
		nhapMang(a,n-1);
	}	
}
void xuat(int a[], int n)
{
	if(n == 0)
	{
		cout<<a[n]<<endl;
	}
	else
	{
		cout<<a[n]<<endl;
		xuat(a,n-1);
	}
}
int giaTriPhanBiet(int a[], int n)
{
	
}
int soLanXuatHien(int a[], int n)
{
	if(n == 0)
	{
			
	}
}