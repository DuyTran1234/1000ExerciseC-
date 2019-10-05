#include <iostream>
using namespace std;
void nhapMang(double a[], int &n);
void xuatMang(double a[], int n);
double cuoiCung(double a[],int n);
int main()
{
	double Array[100];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So am cuoi cung < -1: "<<cuoiCung(Array,nSize)<<endl;
}
void nhapMang(double a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
}
void xuatMang(double a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
double cuoiCung(double a[],int n)
{
	int dem = 0;
	double m;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0 && a[i] > (-1) )
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
		return 0;
	}
}