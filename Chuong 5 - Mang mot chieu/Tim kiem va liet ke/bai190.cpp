#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void giaTriSoToanLe(int a[],int n);
int kiemTraSoToanLe(int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	giaTriSoToanLe(Array,nSize);
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
int kiemTraSoToanLe(int x)
{
	int xCopy = x;
	int nSoTach = 0;
	int dem = 0;
	int nSoLe = 0;
	while(x!=0)
	{
		nSoTach = x % 10;
		if(nSoTach % 2 != 0)
		{
			nSoLe++;
		}
		x = x/10;
		dem++;
	}
	if(nSoLe == dem)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
void giaTriSoToanLe(int a[],int n)
{
	cout<<"Cac gia tri toan so le trong mang: "<<endl;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraSoToanLe(a[i])==1)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}