#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void viTriNT(int a[],int n);
int kiemTraNguyenTo(int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	viTriNT(Array,nSize);
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
int kiemTraNguyenTo(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x%i == 0)
		{
			dem++;
		}
	}
	if(dem == 2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void viTriNT(int a[],int n)
{
	cout<<"Nhung vi tri ma tai do la so Nguyen To: ";
	for(int i = 0; i < n; i++)
	{
		if(kiemTraNguyenTo(a[i])==1)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}