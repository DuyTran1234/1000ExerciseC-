#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int soAmDauTien(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So am dau tien: "<<soAmDauTien(Array,nSize)<<endl;
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
int soAmDauTien(int a[],int n)
{
	int dem = 0;
	int m;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			m = a[i];
			dem = 1;
			break;
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