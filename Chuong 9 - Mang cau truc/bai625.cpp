#include <iostream>
using namespace std;
void xuat(struct TOADO a[], int n);
void nhap(struct TOADO a[], int &n);
int tungDiemMax(struct TOADO a[], int n);
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
	cout<<"Diem co tung do lon nhat: "<<tungDiemMax(dcm,nSize)<<endl;
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
int tungDiemMax(struct TOADO a[], int n)
{
	int max = a[0].y;
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].y > max)
		{
			max = a[i].y;
			index = i;
		}
	}
	return index;
}