#include <iostream>
#include <cmath>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraCapSoCong(int a[],int n,int &d);
int main()
{
	int Array[MAX];
	int nSize;
	int d = 0;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	if(kiemTraCapSoCong(Array,nSize,d)==1)
	{
		cout<<kiemTraCapSoCong(Array,nSize,d)<<endl;
		cout<<"Cong sai d = "<<d<<endl;
	}
	else
	{
		cout<<kiemTraCapSoCong(Array,nSize,d)<<endl;
	}
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuatMang(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int kiemTraCapSoCong(int a[],int n,int &d)
{
	int kiemTra = 1;
	d = a[n-1] - a[n-2];
	for(int i = n - 1; i > 0; i--)
	{
		if( (a[i] - a[i-1]) != d )
		{
			kiemTra = 0;
		}
	}
	if(kiemTra == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}