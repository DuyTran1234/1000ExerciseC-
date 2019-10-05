#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int haiKhong(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Kiem Tra: "<<haiKhong(Array,nSize)<<endl;
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
int haiKhong(int a[],int n)
{
	int b[1000];
	int kiemTra = 0;
	for(int i = 0; i < n; i++)
	{
		if( (a[i] == 0 && a[i+1] == 0) || (a[i] == 0 && a[i-1] == 0) )
		{
			kiemTra = 1;
		}
	}
	if(kiemTra==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
