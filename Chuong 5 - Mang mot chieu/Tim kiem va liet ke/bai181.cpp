#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void lanCanChan(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	lanCanChan(Array,nSize);
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
void lanCanChan(int a[],int n)
{
	cout<<"Nhung gia tri thoa man ycdb: ";
	for(int i = 0; i < n; i++)
	{
		if(i == 0 || i == n-1)
		{
			if(i == 0 && a[i]%2 == 0 && a[i+1]%2==0 )
			{
				cout<<a[i]<<" ";
			}
			else if( i == n-1 && a[i]%2 == 0 && a[i-1]%2==0)
			{
				cout<<a[i]<<" ";
			}
			else 
			{
				continue;
			}
		}
		else
		{
			if( (a[i]%2 ==0) && (a[i+1]%2 ==0 || a[i-1]%2 ==0 ) )
			{
				cout<<a[i]<<" ";
			}
		}
	}
	cout<<endl;
}