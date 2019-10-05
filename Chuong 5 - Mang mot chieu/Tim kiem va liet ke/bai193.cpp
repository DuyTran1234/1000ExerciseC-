#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void lietKe3k(int a[],int n);
int soNguyenDang3k(int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	lietKe3k(Array,nSize);
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
int soNguyenDang3k(int x)
{
	int S = 1;
	int dem = 0;
	if(x == 1)
	{
		return 1;
	}
	else
	{
		for(int i = 1; i <= x; i++)
		{
			S = 3*S;
			if(S == x)
			{
				dem = 1;
				break;
			}
		}
	}
	if(dem != 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void lietKe3k(int a[],int n)
{
	cout<<"Cac so nguyen dang 3^k thoa man: "<<endl;
	for(int i = 0; i < n; i++)
	{
		if(soNguyenDang3k(a[i])==1)
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}