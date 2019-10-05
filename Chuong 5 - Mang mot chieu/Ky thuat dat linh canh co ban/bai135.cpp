#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
int timGiaTriDuong(int a[],int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	if(timGiaTriDuong(Array,nSize)!= (-1) )
	{
		cout<<"Gia tri duong dau tien: "<<Array[timGiaTriDuong(Array,nSize)]<<endl;
	}
	else 
	{
		cout<<timGiaTriDuong(Array,nSize)<<endl;
	}
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		a[i] = rand()%100 - 90;
	}
	
}
void xuatMang(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int timGiaTriDuong(int a[],int n)
{
	int S = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] > 0 )
		{
			S = i;
			break;
		}
	}
	if(S!=0)
	{
		return S;
	}
	else
	{
		return -1;
	}
}