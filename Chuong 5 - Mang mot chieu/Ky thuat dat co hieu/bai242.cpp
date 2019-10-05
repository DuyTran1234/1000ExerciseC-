#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tonTaiChan(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<tonTaiChan(Array,nSize)<<endl;
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
int tonTaiChan(int a[],int n)
{
	int kiemTra = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0 )
		{
			kiemTra = 1;
			break;
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