#include <iostream>
#include <math.h>
using namespace std;
void xuat(struct TOADO a[], int n);
void nhap(struct TOADO a[], int &n);
void haiDiemGanNhau(struct TOADO a[], int n);
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
	haiDiemGanNhau(dcm,nSize);
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
void haiDiemGanNhau(struct TOADO a[], int n)
{
	int index1 = 0;
	int index2 = 0;
	int min = fabs(pow(a[0].x,2) + pow(a[0].y,2) - pow(a[1].x,2) - pow(a[1].y,2));
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i != j && fabs(pow(a[i].x,2) + pow(a[i].y,2) - pow(a[j].x,2) - pow(a[j].y,2)) <= min)
			{
				min = fabs(pow(a[i].x,2) + pow(a[i].y,2) - pow(a[j].x,2) - pow(a[j].y,2));
				index1 = i;
				index2 = j;
			}
		}
	}
	cout<<"2 diem gan nhau nhat: "<<index1<<" va "<<index2<<endl;
	cout<<min<<endl;
}