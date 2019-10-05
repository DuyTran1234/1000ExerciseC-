#include <iostream>
using namespace std;
void xuat(struct TOADO a[], int n);
void nhap(struct TOADO a[], int &n);
int demKhongTrung(struct TOADO a[], int n);
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
	cout<<"So luong phan tu khong trung nhau: "<<demKhongTrung(dcm,nSize)<<endl;
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
int demKhongTrung(struct TOADO a[], int n)
{
	int kiemTra = 1;
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		kiemTra = 1;
		for(int j = 0; j < n; j++)
		{
			if(i != j && a[i].x == a[j].x && a[i].y == a[j].y)
			{
				kiemTra = 0;
			}
		}
		if(kiemTra == 1)
		{
			dem++;
		}
	}
	return dem;
}