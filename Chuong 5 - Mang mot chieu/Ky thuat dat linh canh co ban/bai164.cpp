#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraSoDao(int x);
int soDaoDauTien(int a[], int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So ganh dau tien: "<<soDaoDauTien(Array,nSize)<<endl;
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
int kiemTraSoDao(int x)
{
	int xCopy = x;
	int tachSo;
	int nSoDao = 0;
	while(x!=0)
	{
		tachSo = x % 10;
		nSoDao = nSoDao * 10 + tachSo;
		x = x/10;
	}
	if(nSoDao == xCopy)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int soDaoDauTien(int a[], int n)
{
	int dem = 0;
	int m;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraSoDao(a[i])==1)
		{
			m = a[i];
			dem++;
			break;
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