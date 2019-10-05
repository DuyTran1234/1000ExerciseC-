#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[],int b[],int &m, int &n);
void xuatMang(int a[],int b[],int m, int n);
int kiemTraHoanVi(int a[],int b[],int m,int n);
void hoanVi(int &x,int &y);
void sapXepMang(int a[],int n);
int main()
{
	int Array[MAX];
	int mArray[MAX];
	int nSize;
	int mSize;
	nhapMang(Array,mArray,mSize,nSize);
	xuatMang(Array,mArray,mSize,nSize);
	cout<<kiemTraHoanVi(Array,mArray,mSize,nSize)<<endl;
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
void sapXepMang(int a[],int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if( a[i] > a[j])
			{
				hoanVi(a[i],a[j]);
			}
		}
	}
}
void hoanVi(int &x,int &y)
{
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
int kiemTraHoanVi(int a[],int b[],int m,int n)
{
	sapXepMang(a,m);
	sapXepMang(b,n);
	if(m != n)
	{
		return 0;
	}
	else
	{
		int kiemTra = 1;
		for(int i = 0; i < m; i++)
		{
			if(a[i] != b[i])
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
	
	
}