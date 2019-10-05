#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int dauTienTrongDoan(int a[],int n, int x, int y);
int main()
{
	int Array[100];
	int nSize;
	int x,y;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap y: ";
	cin>>y;
	cout<<"Gia tri dau tien nam trong doan ("<<x<<","<<y<<") : "<<dauTienTrongDoan(Array,nSize,x,y)<<endl;
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
int dauTienTrongDoan(int a[],int n, int x, int y)
{
	int dem = 0;
	int m;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > x && a[i] < y )
		{
			m = a[i];
			dem = 1; 
			break;
		}
	}
	if(dem != 0)
	{
		return m;
	}
	else
	{
		return x;
	}
}