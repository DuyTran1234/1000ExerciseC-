#include <iostream>
using namespace std;
void nhapMang(int a[], int n);
void xuat(int a[], int n);
int tongGiaTri(int a[], int n);
void giaTriMax(int a[], int n, int &max, int &index);
int main()
{
	int nArray[1000];
	int mSize;
	
	cout<<"Nhap so luong phan tu: ";
	cin>>mSize;
	mSize--;
	nhapMang(nArray,mSize);
	xuat(nArray,mSize);
	int MAX = nArray[0];
	int idx = 0;
	giaTriMax(nArray,mSize,MAX,idx);
	cout<<"Vi tri max = "<<idx<<endl;
}
void nhapMang(int a[], int n)
{
	if(n == 0)
	{
		cout<<"a["<<n<<"] = ";
		cin>>a[n];
	}
	else
	{
		cout<<"a["<<n<<"] = ";
		cin>>a[n];
		nhapMang(a,n-1);
	}	
}
void xuat(int a[], int n)
{
	if(n == 0)
	{
		cout<<a[n]<<endl;
	}
	else
	{
		cout<<a[n]<<endl;
		xuat(a,n-1);
	}
}
void giaTriMax(int a[], int n, int &max, int &index)
{
	if(n == 0)
	{
		if(a[n] > max)
		{
			max = a[n];
			index = n;
		}	
	}
	else
	{
		if(a[n] > max)
		{
			max = a[n];
			index = n;		
		}
		giaTriMax(a,n-1,max,index);
	}
}