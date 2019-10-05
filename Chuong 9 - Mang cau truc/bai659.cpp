#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct DUONGTHANG a[], int n);
void nhap(struct DUONGTHANG a[], int &n);
bool kiemTraSongSong(struct DUONGTHANG a[], int n);
struct DUONGTHANG
{
	int a;
	int b;
};
int main()
{
	DUONGTHANG dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	xuat(dcm,mSize);
	cout<<kiemTraSongSong(dcm,mSize)<<endl;
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
bool kiemTraSongSong(struct DUONGTHANG a[], int n)
{
	bool kiemTra = true;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i].a != a[j].a || a[i].b == a[j].b)
			{
				kiemTra = false;
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