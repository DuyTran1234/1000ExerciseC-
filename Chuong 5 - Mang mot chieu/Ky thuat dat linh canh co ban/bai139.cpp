#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
int kiemTraSoHoanThien(int n);
int viTriHoanThienCuoiCung(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Vi tri so hoan thien cuoi cung: "<<viTriHoanThienCuoiCung(Array,nSize)<<endl;
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap a["<<i<<"]: ";
		cin>>a[i];
	}
	
}
void xuatMang(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int kiemTraSoHoanThien(int n)
{
	int Tong = 0;
	for(int i = 1; i < n; i++)
	{
		if(n % i == 0)
		{
			Tong = Tong + i;
		}
	}
	if(Tong == n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int viTriHoanThienCuoiCung(int a[],int n)
{
	int kt = 0;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraSoHoanThien(a[i]) == 1 )
		{
			kt = i;
			dem++;
		}
	}
	if(dem != 0)
	{
		return kt;
	}
	else 
	{
		return -1;
	}
}