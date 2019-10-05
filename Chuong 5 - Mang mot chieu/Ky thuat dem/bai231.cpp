#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void lietKeDuyNhat(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	lietKeDuyNhat(Array,nSize);
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
void lietKeDuyNhat(int a[],int n)
{
	cout<<"Cac gia tri xuat hien 1 lan: "<<endl;
	for(int i = 0; i < n; i++)
	{
		int dem = 0;
		for(int j = 0; j < n; j++)
		{
			if(a[i] == a[j])
			{
				dem++;
			}
		}
		if(dem == 1)
		{
			cout<<a[i]<<endl;
		}
	}
}