#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void giaTriLanCan(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	giaTriLanCan(Array,nSize);
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
void giaTriLanCan(int a[],int n)
{
	cout<<"Cac vi tri thoa man yeu cau: "<<endl;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] == (a[i-1]*a[i+1]) )
		{
			cout<<i<<endl;;
			dem++;
		}
	}
	if(dem==0)
	{
		cout<<-1<<endl;
	}
}