#include <iostream>
using namespace std;
void nhapMang(int a[], int n);
void xuatMang(int a[], int n, int i);
int main()
{
	int nArray[1000];
	int mSize;
	cout<<"Nhap so luong phan tu: ";
	cin>>mSize;
	int i = 0;
	nhapMang(nArray,mSize - 1);
	xuatMang(nArray,mSize - 1,i);
}
void nhapMang(int a[], int n)
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
		nhapMang(a,n - 1);
	}
}
void xuatMang(int a[], int n, int i)
{
	if(i == n)
	{
		cout<<a[i]<<endl;
	}
	else
	{
		cout<<a[i]<<endl;
		xuatMang(a,n,i+1);
	}
}