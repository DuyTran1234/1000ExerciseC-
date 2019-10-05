#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraDauChan(int x);
int tongDauChan(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Tong cac chu so dau chan: "<<tongDauChan(Array,nSize)<<endl;
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
int kiemTraDauChan(int x)
{
	
	int tachSo = 0;
	while(x!=0)
	{
		tachSo = x % 10;
		x = x /10;
	}
	if(tachSo % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int tongDauChan(int a[],int n)
{
	int S = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraDauChan(a[i])==1)
		{
			S = S + a[i];
		}
	}
	return S;
}