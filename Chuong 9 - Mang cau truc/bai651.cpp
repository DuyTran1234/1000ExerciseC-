#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct DUONGTRON a[], int n);
void nhap(struct DUONGTRON a[], int &n);
int ganToaDoNhat(struct DUONGTRON a[], int n);
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
	cout<<"Duong tron gan goc toa do nhat: "<<ganToaDoNhat(dcm,mSize)<<endl;
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
int ganToaDoNhat(struct DUONGTRON a[], int n)
{
	int min = fabs(pow(a[0].x,2) + pow(a[0].y,2));
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(fabs(pow(a[i].x,2) + pow(a[i].y,2) - a[i].R) < min)
		{
			min = fabs(pow(a[i].x,2) + pow(a[i].y,2));
			index = i;
		}
	}
	return index;
}