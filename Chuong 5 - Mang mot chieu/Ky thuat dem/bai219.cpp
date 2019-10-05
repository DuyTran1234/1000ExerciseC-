#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tanSuat(int a[],int n, int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Nhap x: ";
	int x;
	cin>>x;
	cout<<x<<" xuat hien : "<<tanSuat(Array,nSize,x)<<endl;
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
int tanSuat(int a[],int n, int x)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == x)
		{
			dem++;
		}
	}
	return dem;
}