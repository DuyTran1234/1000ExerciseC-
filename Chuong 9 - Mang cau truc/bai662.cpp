#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct DUONGTHANG a[], int n);
void nhap(struct DUONGTHANG a[], int &n);
struct DIEM diemQua2DuongThang(struct DUONGTHANG a, struct DUONGTHANG b);
bool kiemTraBaDuongDongQuy(struct DUONGTHANG a[], int n);
struct DUONGTHANG
{
	int a;
	int b;
};
struct DIEM
{
	double x;
	double y;
};
int main()
{
	DUONGTHANG dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	xuat(dcm,mSize);
	cout<<"Kiem tra dong quy: "<<kiemTraBaDuongDongQuy(dcm,mSize)<<endl;
}
void nhap(struct DUONGTHANG a[], int &n)
{
	cout<<"Nhap so luong duong thang: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap duong thang "<<i<<": "<<endl;
		cout<<"a = ";
		cin>>a[i].a;
		cout<<"b = ";
		cin>>a[i].b;
	}
}
void xuat(struct DUONGTHANG a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"y = "<<a[i].a<<"x + "<<a[i].b<<endl;
	}
}
bool kiemTraBaDuongDongQuy(struct DUONGTHANG a[], int n)
{
	bool kiemTra = false;
	for(int i = 0; i < n - 2; i++)
	{
		for(int j = i + 1; j < n - 1; j++)
		{
			for(int k = j + 1; k < n; k++)
			{
				DIEM dcm = diemQua2DuongThang(a[i],a[j]);
				if(a[k].a * dcm.x + a[k].b == dcm.y)
				{
					kiemTra = true;
				}
			}
		}
	}
	if(kiemTra == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
struct DIEM diemQua2DuongThang(struct DUONGTHANG a, struct DUONGTHANG b)
{
	DIEM c;
	c.x = -(a.b - b.b) / (a.a - b.a);
	c.y = a.a * c.x + a.b;
	return c;
}