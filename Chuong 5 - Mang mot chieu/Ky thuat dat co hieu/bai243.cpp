#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tonTaiNguyenTo(int a[],int n);
int kiemTraNguyenTo(int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<tonTaiNguyenTo(Array,nSize)<<endl;
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
		if(x%i==0)
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
int tonTaiNguyenTo(int a[],int n)
{
	int kiemTra = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraNguyenTo(a[i])==1)
		{
			kiemTra = 1;
		}
	}
	if(kiemTra == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}