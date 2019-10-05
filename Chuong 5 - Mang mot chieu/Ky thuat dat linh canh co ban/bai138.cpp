#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
int viTriChanDauTien(int a[],int n);

int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Vi tri gia tri chan dau tien: "<<viTriChanDauTien(Array,nSize)<<endl;
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap a["<<i<<"]: ";
		cin>>a[i];
	}
	
}
void xuatMang(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int viTriChanDauTien(int a[],int n)
{
	int kiemTra = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		{
			kiemTra = i;
			break;
		}
	}
	if(kiemTra != 0)
	{
		return kiemTra;
	}
	else 
	{
		return -1;
	}
}