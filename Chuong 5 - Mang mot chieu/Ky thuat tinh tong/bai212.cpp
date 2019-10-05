#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int trungBinhCongDuong(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"Trung binh cong so duong: "<<trungBinhCongDuong(Array,nSize)<<endl;
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
int trungBinhCongDuong(int a[],int n)
{
	double S = 0;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0 )
		{
			dem++;
			S = S + a[i];
		}
	}
	int TB = S / static_cast<double>(dem);
	return TB;
}