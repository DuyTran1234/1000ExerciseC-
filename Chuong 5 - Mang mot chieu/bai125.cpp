#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[],int n);
void inSoNguyenTo(int a[], int n);
int kiemTraSoNguyenTo(int n);
int main()
{
	int Array[1000];
	int nSize;
	nhapMang(Array,nSize);
	xuatMang(Array,nSize);
	cout<<"Cac phan tu la so nguyen to < 100: "<<endl;
	inSoNguyenTo(Array,nSize);
}
void nhapMang(int a[], int &n)
{
	cout<<"Nhap so luong phan tu: ";
	cin>>n;
	srand(time(NULL));
	for(int i = 0; i < n; i++)
	{
		a[i] = rand()%200 + 1;
	}
	
}
void xuatMang(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"a["<<i<<"] = "<<a[i]<<endl;
	}
}
int kiemTraSoNguyenTo(int n)
{
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	{
		return 1;
	}
}
void inSoNguyenTo(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(kiemTraSoNguyenTo(a[i])== 1 && a[i] < 100 )
		{
			cout<<"a["<<i<<"] = "<<a[i]<<endl;
		}
	}
}