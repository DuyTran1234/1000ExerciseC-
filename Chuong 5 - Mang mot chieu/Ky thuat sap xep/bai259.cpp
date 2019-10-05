#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void hoanVi(int &x ,int &y);
int kiemTraHoanThien(int x);
void hoanThienGiamDan(int a[],int n);

int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	hoanThienGiamDan(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
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
	for(int i = 1; i <x; i++)
	{
		if(x%i==0)
		{
			S = S + i;
		}
	}
	if(S==x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void hoanVi(int &x ,int &y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
void hoanThienGiamDan(int a[],int n)
{
	for(int i = 0; i < n-1; i++)
	{
		if(kiemTraHoanThien(a[i])==1)
		{
			for(int j = i + 1; j < n; j++)
			{
				if(kiemTraHoanThien(a[j])==1)
				{
					if(a[i] < a[j])
					{
						hoanVi(a[i],a[j]);
					}
				}
			}
		}
	}
}