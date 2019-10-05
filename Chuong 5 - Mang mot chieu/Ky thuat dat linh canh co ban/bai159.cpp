#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int dauTien(int a[], int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Gia tri dau tien cua mang lon hon 2003: "<<dauTien(Array,nSize)<<endl;
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
int dauTien(int a[], int n)
{
	int dem = 0;
	int m;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 2003)
		{
			dem = 1;
			m = a[i];
			break;
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