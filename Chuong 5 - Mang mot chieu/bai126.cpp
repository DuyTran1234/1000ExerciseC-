#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
int tinhTongSoAm(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<endl<<"Tong cac so am: "<<tinhTongSoAm(Array,nSize)<<endl;
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		a[i] = rand()%100 - 50;
	}
	
}
void xuatMang(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int tinhTongSoAm(int a[],int n)
{
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] < 0)
		{
			tong = tong + a[i];
		}
	}
	return tong;
}