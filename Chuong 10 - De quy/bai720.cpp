#include <iostream>
using namespace std;
void nhap(int a[], int n);
int demSoDuong(int a[], int n);
void xuat(int a[], int n);
int main()
{
	int nArray[1000];
	int mSize;
	cout<<"Nhap so luong phan tu: ";
	cin>>mSize;
	mSize--;
	nhap(nArray,mSize);
	xuat(nArray,mSize);
	cout<<"So luong so duong: "<<demSoDuong(nArray,mSize)<<endl;
}
void nhap(int a[], int n)
{
	if(n == 0)
	{
		cout<<"Nhap a["<<n<<"] = ";
		cin>>a[n];
	}
	else
	{
		cout<<"Nhap a["<<n<<"] = ";
		cin>>a[n];
		nhap(a,n - 1);
	}
}
void xuat(int a[], int n)
{
	if(n == 0)
	{
		cout<<"a["<<n<<"] = "<<a[n]<<endl;
	}
	else
	{
		cout<<"a["<<n<<"] = "<<a[n]<<endl;
		xuat(a,n-1);
	}
}
int demSoDuong(int a[], int n)
{
	if(n == 0)
	{
		if(a[n] > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if(a[n] > 0)
		{
			return 1 + demSoDuong(a,n - 1);
		}
		else
		{
			return 0 + demSoDuong(a,n-1);
		}
	}
}