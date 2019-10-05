#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[],int b[], int &m,int &n);
void xuatMang(int a[],int b[], int m,int n);
void giaTriDauTien(int a[],int b[],int c[],int m,int n,int &dem);
void demSoLan(int a[],int b[],int c[],int m,int n);
int main()
{
	int Array[MAX];
	int mArray[MAX];
	int nArray[MAX];
	int mSize;
	int nSize;
	nhapMang(Array,mArray,mSize,nSize);
	cout<<endl;
	xuatMang(Array,mArray,mSize,nSize);
	demSoLan(Array,mArray,nArray,mSize,nSize);
}
void nhapMang(int a[],int b[], int &m,int &n)
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
void xuatMang(int a[],int b[], int m,int n)
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
void giaTriDauTien(int a[],int b[],int c[],int m,int n,int &dem)
{
	for(int i = 0; i < n; i++)
	{
		if(b[i] == a[0])
		{
			c[dem] = i;
			dem++;
		}
	}
}
void demSoLan(int a[],int b[],int c[],int m,int n)
{
	int dem = 0;
	int dem3 = 0;
	giaTriDauTien(a,b,c,m,n,dem);
	for(int i = 0; i < dem; i++)
	{
		int index = c[i];
		int dem2 = 0;
		for(int j = index , dem1 = 0 ; j < m, dem1 < m; j++,dem1++)
		{
			
			if(b[j] == a[dem1])
			{
				dem2++;
			}
		}
		if(dem2 == m)
		{
			dem3++;
		}
	}
	cout<<"So lan xuat hien mang a trong mang b: "<<dem3<<endl;
}