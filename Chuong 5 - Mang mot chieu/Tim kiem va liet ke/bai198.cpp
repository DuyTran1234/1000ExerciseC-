#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int giaTriMax(int a[],int n);
void viTriLonNhat(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	viTriLonNhat(Array,nSize);
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
int giaTriMax(int a[],int n)
{
	int max = a[0];
	for(int i = 0; i < n; i++ )
	{
		if(a[i] > max )
		{
			max = a[i];
		}
	}
	return max;
}
void viTriLonNhat(int a[],int n)
{
	int max = giaTriMax(a,n);
	cout<<"Nhung vi tri ma tai do la gia tri max: "<<endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == max)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}