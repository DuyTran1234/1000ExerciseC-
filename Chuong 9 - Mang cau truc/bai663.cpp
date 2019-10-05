#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct DUONGTHANG a[], int n);
void nhap(struct DUONGTHANG a[], int &n);
bool kiemTraQuaP(struct DUONGTHANG a[], struct DIEM dcm, int n);
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
	DIEM dcm1;
	int mSize;
	nhap(dcm,mSize);
	xuat(dcm,mSize);
	cout<<"Nhap hoanh do P ";
	cin>>dcm1.x;
	cout<<"Nhap tung do P: ";
	cin>>dcm1.y;
	cout<<"Kiem tra qua P: "<<kiemTraQuaP(dcm,dcm1,mSize)<<endl;
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
bool kiemTraQuaP(struct DUONGTHANG a[], struct DIEM dcm, int n)
{
	bool kiemTra = false;
	for(int i = 0; i < n; i++)
	{
		if(a[i].a * dcm.x + a[i].b == dcm.y)
		{
			kiemTra = true;
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