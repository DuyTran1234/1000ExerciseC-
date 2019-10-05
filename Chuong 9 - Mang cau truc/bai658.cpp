#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct DUONGTRON a[], int n);
void nhap(struct DUONGTRON a[], int &n);
double tiepXucNhau(struct DUONGTRON a[], int n);
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
	cout<<"Ton tai 1 diem thuoc tat ca duong tron?: "<<tiepXucNhau(dcm,mSize)<<endl;
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
double tiepXucNhau(struct DUONGTRON a[], int n)
{
	cout<<"Cac cap duong tron tiep xuc nhau: "<<endl;
	int index = 1;
	double S = 0;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			int kc = sqrt(pow(a[i].x-a[j].x,2)+(pow(a[i].y - a[j].y,2)));
			if(fabs(a[i].R - a[j].R) > kc && a[i].R + a[j].R < kc)
			{
				index = 0;
			}
		}
	}
	if(index == 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}