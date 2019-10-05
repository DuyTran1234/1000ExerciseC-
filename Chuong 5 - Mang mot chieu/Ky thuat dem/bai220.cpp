#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int soLuongTanCung5(int a[],int n);
int kiemTraTanCung(int x);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"So luong chu so tan cung 5: "<<soLuongTanCung5(Array,nSize)<<endl;
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
int kiemTraTanCung(int x)
{
	if(x%10 == 5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int soLuongTanCung5(int a[],int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(kiemTraTanCung(a[i])==1)
		{
			dem++;
		}
	}
	return dem;
}