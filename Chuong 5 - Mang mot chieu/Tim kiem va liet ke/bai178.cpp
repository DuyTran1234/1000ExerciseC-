#include <iostream>
using namespace std;
void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void thuocDoanXY(int a[],int n);
int main()
{
	int Array[100];
	int nSize;
	nhapMang(Array,nSize);
	cout<<endl;
	xuatMang(Array,nSize);
	thuocDoanXY(Array,nSize);
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
void thuocDoanXY(int a[],int n)
{
	int x, y;
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Nhap y: ";
	cin>>y;
	cout<<"Nhung gia tri chan thuoc doan ["<<x<<","<<y<<"]: "<<endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i] >= x && a[i] <= y && a[i]%2 ==0 )
		{
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}