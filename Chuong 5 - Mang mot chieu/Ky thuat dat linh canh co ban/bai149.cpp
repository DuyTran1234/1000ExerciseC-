#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int soHoanThienCuoiCung(int a[],int n);
int kiemTraHoanThien(int x);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So hoan thien cuoi cung: "<<soHoanThienCuoiCung(Array,nSize)<<endl;
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
int kiemTraHoanThien(int x)
{
	int tong = 0;
	for(int i = 1; i < x; i++)
	{
		if(x%i==0)
		{
			tong = tong + i;
		}
	}
	if(tong == x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int soHoanThienCuoiCung(int a[],int n)
{
	int dem = 0;
	int m;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraHoanThien(a[i]) == 1)
		{
			dem = 1;
		 	m = a[i];
		 	
		}
	}
	if(dem!=0)
	{
		return m;
	}
	else 
	{
		return -1;
	}
}