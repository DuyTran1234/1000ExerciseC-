#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[],int b[], int &m,int &n);
void xuatMang(int a[],int b[], int m,int n);
int demGiaTri(int a[],int b[],int m,int n);
int main()
{
	int Array[MAX];
	int mArray[MAX];
	int mSize;
	int nSize;
	nhapMang(Array,mArray,mSize,nSize);
	cout<<endl;
	xuatMang(Array,mArray,mSize,nSize);
	cout<<"So luong gia tri xuat hien ca 2 mang: "<<demGiaTri(Array,mArray,mSize,nSize)<<endl;
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
int demGiaTri(int a[],int b[],int m,int n)
{
	int dem = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i] == a[j] && i==j)
			{
				if( a[i] == b[j] )
				{
					dem++;
					break;
				}
			}
			else if(a[i] == a[j] && i != j)
			{
				break;
			}
		}
	}
	return dem;
}