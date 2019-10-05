#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int kiemTraChanLe(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<kiemTraChanLe(Array,nSize)<<endl;
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
int kiemTraChanLe(int a[],int n)
{
	int kiemTra = 1;
	for(int i = 0; i < n; i++)
	{
		if(i == 0 || i == n-1)
		{
			if(i == 0)
			{
				if( (a[i]+a[i+1])%2 ==0 )
				{
					kiemTra = 0;
				}
			}
			else if(i == n-1)
			{
				if( (a[i]+a[i-1])%2 ==0 )
				{
					kiemTra = 0;
				}
			}
		}
		else
		{
			if( (a[i]+a[i+1])%2 ==0 || (a[i]+a[i-1])%2 ==0 )
			{
				kiemTra = 0;
			}
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