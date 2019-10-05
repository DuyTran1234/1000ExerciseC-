#include <iostream>
using namespace std;
void xuat(struct TOADO a[], int n);
void nhap(struct TOADO a[], int &n);
int hoanhDoDuong(struct TOADO a[], int n);
struct TOADO
{
	int x;
	int y;
};
int main()
{
	TOADO dcm[100];
	int nSize;
	nhap(dcm,nSize);
	cout<<"So luong diem co hoanh do duong: "<<hoanhDoDuong(dcm,nSize)<<endl;
}
void nhap(struct TOADO a[], int &n)
{
	cout<<"Nhap so luong toa do diem can nhap: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap toa do diem "<<i<<": "<<endl;
		cout<<"Hoanh do: ";
		cin>>a[i].x;
		cout<<"Tung do: ";
		cin>>a[i].y;
	}
}
void xuat(struct TOADO a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"("<<a[i].x<<","<<a[i].y<<")"<<endl;
	}
}
int hoanhDoDuong(struct TOADO a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].x > 0)
		{
			dem++;
		}
	}
	return dem;
}