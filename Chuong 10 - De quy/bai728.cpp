#include <iostream>
using namespace std;
void nhapMang(int a[], int n);
void xuat(int a[], int n);
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
void sapXepTangDan(int a[], int n)
{
	
}