#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int tinhChat(int a[],int n);
int kiemTraHoanHao(int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<tinhChat(Array,nSize)<<endl;
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
int kiemTraHoanHao(int x)
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
int tinhChat(int a[],int n)
{
	int kiemTra = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraHoanHao(a[i])==1 && a[i] > 256 )
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