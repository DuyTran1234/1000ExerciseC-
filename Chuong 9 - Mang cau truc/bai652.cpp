#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct DUONGTRON a[], int n);
void nhap(struct DUONGTRON a[], int &n);
void duongTronQuaO(struct DUONGTRON a[], int n);
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
	duongTronQuaO(dcm,mSize);
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
void duongTronQuaO(struct DUONGTRON a[], int n)
{
	int kiemTra = 0;
	cout<<"Nhung duong tron qua goc toa do O: "<<endl;
	for(int i = 0; i < n; i++)
	{
		if(pow(a[i].x,2) + pow(a[i].y,2) == pow(a[i].R,2))
		{
			cout<<i<<endl;
			kiemTra = 1;
		}	
	}
	if(kiemTra == 0)
	{
		cout<<-1<<endl;
	}
}