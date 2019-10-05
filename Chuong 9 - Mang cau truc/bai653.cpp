#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct DUONGTRON a[], int n);
void nhap(struct DUONGTRON a[], int &n);
int duongTronGanOx(struct DUONGTRON a[], int n);
struct DUONGTRON
{
	int x;
	int y;
	int R;	
};
int main()
{	
	struct DUONGTRON dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	cout<<"Duong tron gan Ox nhat: "<<duongTronGanOx(dcm,mSize)<<endl;
}
void nhap(struct DUONGTRON a[], int &n)
{
	cout<<"Nhap so luong duong tron can tinh: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap duong tron "<<i<<": "<<endl;
		cout<<"Hoanh do tam I: ";
		cin>>a[i].x;
		cout<<"Tung do tam I: ";
		cin>>a[i].y;
		cout<<"R = ";
		cin>>a[i].R;
	}
}
void xuat(struct DUONGTRON a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"Duong tron "<<i<<" tam I("<<a[i].x<<","<<a[i].y<<") ban kinh R = "<<a[i].R<<endl;
	}
}
int duongTronGanOx(struct DUONGTRON a[], int n)
{
	int min = fabs(a[0].y) - a[0].R;
	int index;
	for(int i = 0; i < n; i++)
	{
		if(fabs(a[i].y) - a[i].R <= min)
		{
			min = fabs(a[i].y) - a[i].R;
			index = i;
		}
	}
	return index;
}