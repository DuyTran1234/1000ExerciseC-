#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int nhoNhat(int a[], int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Gia tri nho nhat cua mang: "<<nhoNhat(Array,nSize)<<endl;
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap phan tu thu "<<i<<": ";
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
int nhoNhat(int a[], int n)
{
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}