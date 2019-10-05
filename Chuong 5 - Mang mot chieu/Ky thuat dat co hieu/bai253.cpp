#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[],int b[],int &m, int &n);
void xuatMang(int a[],int b[],int m, int n);
int kiemTraPhanTu(int a[],int b[],int m,int n);
int main()
{
	int Array[MAX];
	int mArray[MAX];
	int mSize;
	int nSize;
	nhapMang(Array,mArray,mSize,nSize);
	cout<<endl;
	xuatMang(Array,mArray,mSize,nSize);
	cout<<kiemTraPhanTu(Array,mArray,mSize,nSize)<<endl;
}
void nhapMang(int a[],int b[],int &m, int &n)
{
	cout<<"Nhap so luong phan tu mang A: ";
	cin>>m;
	for(int i = 0; i < m; i++)
	{
		cout<<"a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Nhap so luong phan tu mang B: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"b["<<i<<"] = ";
		cin>>b[i];
	}
}
void xuatMang(int a[],int b[],int m, int n)
{
	cout<<"Mang A: "<<endl;
	for(int i = 0; i < m; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
	cout<<"Mang B: "<<endl;
	for(int i = 0; i < n; i++)
	{
		cout<<"b["<<i<<"] = "<<b[i]<<endl;
	}
}
int kiemTraPhanTu(int a[],int b[],int m,int n)
{
	int kiemTra = 1;
	for(int i = 0; i < m; i++)
	{
		int dem = 0;
		for(int j = 0; j < n; j++)
		{
			if(a[i] == a[j] )
			{
				dem++;
			}
		}
		if(dem == 0)
		{
			kiemTra = 0;
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