#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void viTriBangSoDuongNhoNhat(int a[],int n);
int soDuongNhoNhat(int a[],int n,int &index);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	viTriBangSoDuongNhoNhat(Array,nSize);
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
int soDuongNhoNhat(int a[],int n,int &index)
{
	int min = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] < min)
		{
			min = a[i];
			index = i;
		}
	}
	return min;
}
void viTriBangSoDuongNhoNhat(int a[],int n)
{
	int index = 0;
	int min = soDuongNhoNhat(a,n,index);
	cout<<"Nhung vi tri thoa man yeu cau: "<<endl;
	for(int i = index + 1; i < n; i++)
	{
		if(a[i] == min)
		{
			cout<<i<<" ";
		}
	}
	cout<<endl;
}