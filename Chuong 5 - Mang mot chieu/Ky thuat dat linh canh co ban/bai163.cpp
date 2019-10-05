#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int chinhPhuongDauTien(int a[], int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"So chinh phuong dau tien: "<<chinhPhuongDauTien(Array,nSize)<<endl;
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
int kiemTraChinhPhuong(int x)
{
	int dem = 0;
	for(int i = 0; i <= x; i++)
	{
		if(i*i == x)
		{
			dem++;
		}
	}
	if(dem != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int chinhPhuongDauTien(int a[], int n)
{
	int m;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraChinhPhuong(a[i]) == 1)
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
		return -1;
	}
}