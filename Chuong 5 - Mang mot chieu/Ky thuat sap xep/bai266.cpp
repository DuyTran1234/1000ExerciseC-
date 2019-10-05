#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void themViTri(int a[],int &n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	themViTri(Array,nSize);
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
void themViTri(int a[],int &n)
{
	int index;
	int x;
	cout<<"Nhap vi tri can them phan tu: ";
	cin>>index;
	cout<<"Nhap gia tri can them: ";
	cin>>x;
	n = n + 1;
	for(int i = n ; i > index ; i--)
	{
		a[i] = a[i-1];
	}
	a[index] = x;
}