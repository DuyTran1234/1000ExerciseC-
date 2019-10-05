#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int soNguyenToNhoNhat(int y);
int soLonNhat(int a[],int n);
int kiemTraNguyenTo(int x);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	int y = soLonNhat(Array,nSize);
	cout<<"So NT nho nhat lon hon moi gia tri trong mang: "<<soNguyenToNhoNhat(y)<<endl;
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
int soLonNhat(int a[],int n)
{
	int max = a[0];
	for(int i = 0; i < n; i++)
	{
		if(a[i] > max )
		{
			max = a[i];
		}
	}
	return max;
}
int soNguyenToNhoNhat(int y)
{
	int x = 0;
	int m = 0;
	int dem = 0;
	while(1)
	{
		if(kiemTraNguyenTo(x)==1)
		{
			if( static_cast<double>(x)/y > 1 )
			{
		 		m = x;
		 		dem++;
		 		break;
			}
		}	
		x++;
	}
	if(dem != 0)
	{
		return m;
	}
	else 
	{
		return 0;
	}
}
int kiemTraNguyenTo(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x%i==0)
		{
			dem++;
		}
	}
	if(dem==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}