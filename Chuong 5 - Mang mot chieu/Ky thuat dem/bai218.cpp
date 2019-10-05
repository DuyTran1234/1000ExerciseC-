#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraDoiXung(int x);
int soLuongSoDoiXung(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"So luong so doi xung: "<<soLuongSoDoiXung(Array,nSize)<<endl;
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
int kiemTraDoiXung(int x)
{
	int tachSo = 0;
	int soDao = 0;
	int xCopy = x;
	while(x != 0)
	{
		tachSo = x % 10;
		soDao = soDao * 10 + tachSo;
		x = x /10;
	}
	if(soDao == xCopy)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int soLuongSoDoiXung(int a[],int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraDoiXung(a[i])==1)
		{
			dem++;
		}
	}
	return dem;
}