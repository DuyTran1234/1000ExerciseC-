#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraNT(int x);
int soNguyenToCuoiCung(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So NT cuoi cung: "<<soNguyenToCuoiCung(Array,nSize)<<endl;
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
int kiemTraNT(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x%i == 0)
		{
			dem++;
		}
	}
	if(dem == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int soNguyenToCuoiCung(int a[],int n)
{
	int m;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraNT(a[i])==1 )
		{
			m = a[i];
			dem = 1;
			
		}
	}
	if(dem != 0)
	{
		return m;
	}
	else
	{
		return -1;
	}
}