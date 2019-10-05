#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void giaTriCucDai(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	giaTriCucDai(Array,nSize);
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
void giaTriCucDai(int a[],int n)
{
	cout<<"Cac gia tri cuc dai trong mang: "<<endl;
	for(int i = 0; i < n; i++)
	{
		if(i ==0 || i == n-1)
		{
			if(i==0 && a[i] > a[i+1] )
			{
				cout<<a[i]<<" ";
			}
			else if(i== n -1 && a[i] > a[i-1] )
			{
				cout<<a[i]<<" ";
			}
		}
		else
		{
			if(a[i] > a[i+1] && a[i] > a[i-1])
			{
				cout<<a[i]<<" ";
			}
		}
	}
	cout<<endl;
}