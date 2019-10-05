#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
bool kiemTraNguyenTo(int x);
int demNguyenTo(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"So luong so nguyen to trong mang: "<<demNguyenTo(Array,nSize)<<endl;
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
bool kiemTraNguyenTo(int x)
{
	int kiemTra = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x%i==0)
		{
			kiemTra++;
		}
	}
	if(kiemTra == 2)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int demNguyenTo(int a[],int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraNguyenTo(a[i])==true)
		{
			dem++;
		}
	}
	return dem;
}