#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void viTriBangSoAmDauTien(int a[],int n);
void giaTriAmDauTien(int a[],int n, int &soAmDauTien, int &index);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	viTriBangSoAmDauTien(Array,nSize);
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
void giaTriAmDauTien(int a[],int n, int &soAmDauTien, int &index)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			soAmDauTien = a[i];
			index = i;
			break;
		}
	}
}
void viTriBangSoAmDauTien(int a[],int n)
{
	int soAm = 0;
	int index = 0;
	giaTriAmDauTien(a,n,soAm,index);
	cout<<"Vi tri thoa man yeu cau de bai: ";
	for(int i = index + 1; i < n; i++)
	{
		if(a[i] == soAm)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}