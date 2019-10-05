#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraHoanThien(int x);
int demSoHoanHao(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"So luong so hoan hao: "<<demSoHoanHao(Array,nSize)<<endl;
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
int kiemTraHoanThien(int x)
{
	int S = 0;
	for(int i = 1; i < x; i++)
	{
		if(x%i==0)
		{
			S = S + i;
		}
	}
	if(S == x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int demSoHoanHao(int a[],int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraHoanThien(a[i])==1)
		{
			dem++;
		}
	}
	return dem;
}