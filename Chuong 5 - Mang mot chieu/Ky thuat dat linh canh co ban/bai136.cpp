#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
int soChanCuoiCung(int a[], int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So chan cuoi cung: "<<soChanCuoiCung(Array,nSize)<<endl;
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
int soChanCuoiCung(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			dem = a[i];
		}
	}
	if(dem !=0)
	{
		return dem;
	}
	else
	{
		return -1;
	}
}