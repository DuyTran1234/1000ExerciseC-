#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int soLonNhat(int a[], int n);
int soBeNhat(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Doan ["<<soBeNhat(Array,nSize)<<","<<soLonNhat(Array,nSize)<<"] chua tat cac cac gia tri trong mang"<<endl;
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
int soBeNhat(int a[],int n)
{
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min )
		{
			min = a[i];
		}
	}
	return min;
}
int soLonNhat(int a[], int n)
{
	int max = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max)
		{
			max = a[i];
		}
	}
	return max;
}