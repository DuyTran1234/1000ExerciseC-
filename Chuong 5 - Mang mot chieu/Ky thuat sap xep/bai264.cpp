#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[],int b[],int &m ,int &n);
void xuatMang(int a[],int b[],int m, int n);
void tronMang(int a[],int b[],int &m,int &n);
void hoanVi(int &x,int &y);
int main()
{
	int Array[MAX];
	int mArray[MAX];
	int mSize;
	int nSize;
	nhapMang(Array,mArray,mSize,nSize);
	xuatMang(Array,mArray,mSize,nSize);
	tronMang(Array,mArray,mSize,nSize);
	xuatMang(Array,mArray,mSize,nSize);
}
void nhapMang(int a[],int b[],int &m ,int &n)
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
void tronMang(int a[],int b[],int &m,int &n)
{
	int mCopy = m;
	m += n;
	for(int i = mCopy; i < m; i++)
	{
		a[i] = b[i - mCopy];
	}
	for(int i = 0; i < m - 1; i++)
	{
		for(int j = i + 1; j < m; j++)
		{
			if(a[j] < a[i])
			{
				hoanVi(a[i],a[j]);
			}
		}
	}
}
void hoanVi(int &x,int &y)
{
	int temp = x;
	x = y;
	y = temp;
}