#include <iostream>
using namespace std;
#define MAX 1000
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int demPhanBiet(int a[],int n);
int main()
{
	int Array[MAX];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"So luong phan tu khac biet: "<<demPhanBiet(Array,nSize)<<endl;
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
int demPhanBiet(int a[],int n)
{
	int dem = 0;
	for(int i = 0; i< n; i++)
	{
		int kiemTra = 0;
		for(int j = 0; j < n; j++)
		{
			if(a[i] == a[j])
			{
				kiemTra++;
			}
		}
		if(kiemTra == 1)
		{
			dem++;
		}
	}
	return dem;
}