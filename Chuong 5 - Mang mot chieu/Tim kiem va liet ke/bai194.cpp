#include <iostream>
#include <cmath>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void lietKe(int a[],int n);
int giaTriGanNhauNhat(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	lietKe(Array,nSize);
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
int giaTriGanNhauNhat(int a[],int n)
{
	int min = abs(a[0] - a[1]);
	for(int i = 0; i < n; i++)
	{
		if( abs(a[i] - a[i+1]) <= min )
		{
			min = abs(a[i] - a[i+1]);
		}
	}
	return min;
}
void lietKe(int a[],int n)
{
	cout<<"Cac cap gia tri gan nhau nhat trong mang: "<<endl;
	int min = giaTriGanNhauNhat(a,n);
	for(int i = 0; i < n; i++)
	{
		if( abs(a[i] - a[i+1]) == min )
		{
			cout<<"("<<a[i]<<","<<a[i+1]<<")"<<endl;
		}
	}
}