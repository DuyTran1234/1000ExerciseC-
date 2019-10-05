#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
int soLeNhoNhat(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	cout<<"So chan lon nhat nho hon moi gia tri le trong mang: "<<soLeNhoNhat(Array,nSize)-1<<endl;
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
int soLeNhoNhat(int a[],int n)
{
	int min = a[0];
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i] % 2 != 0)
		{
			dem++;
			if(a[i] < min )
			{
				min = a[i];
			}
		}
	}
	if(dem != 0)
	{
		return min;
	}
	else
	{
		return 0;
	}
}
