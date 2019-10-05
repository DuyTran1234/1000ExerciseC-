#include <iostream>
using namespace std;
void nhapMang(int a[], int n);
void xuat(int a[], int n);
int tongGiaTri(int a[], int n);
int tongSoDuong(int a[], int n);
int tichGiaTri(int a[], int n);
int main()
{
	int nArray[1000];
	int mSize;
	cout<<"Nhap so luong phan tu: ";
	cin>>mSize;
	mSize--;
	nhapMang(nArray,mSize);
	xuat(nArray,mSize);
	cout<<"S = "<<tichGiaTri(nArray,mSize)<<endl;
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
int tichGiaTri(int a[], int n)
{
	if(n == 0)
	{
		return a[n] + 1;
	}
	else
	{
		return (a[n] + 1) * tichGiaTri(a,n-1);
	}
}