#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraDauLe(int x);
int dauLeDauTien(int a[], int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Gia tri co dau le dau tien trong mang: "<<dauLeDauTien(Array,nSize)<<endl;
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
int kiemTraDauLe(int x)
{	
	int xCopy = x;
	int tachSo = 0;
	while(x!=0)
	{
		tachSo = x%10;
		x = x/10;
	}
	if(tachSo % 2 != 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int dauLeDauTien(int a[], int n)
{
	int m;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraDauLe(a[i])==1)
		{
			m = a[i];
			dem++;
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