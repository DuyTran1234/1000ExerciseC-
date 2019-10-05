#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tonTaiKhong(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<tonTaiKhong(Array,nSize)<<endl;
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
int tonTaiKhong(int a[],int n)
{
	int kiemTra = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] != 0)
		{
			kiemTra = 1;
		}
	}
	if(kiemTra == 0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}