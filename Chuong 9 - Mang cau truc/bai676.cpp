#include <iostream>
using namespace std;
int soLuongHSG(struct HOCSINH a[], int n);
void nhap(struct HOCSINH a[], int &n);
void xuat(struct HOCSINH a[], int n);
struct HOCSINH
{
	char tenHocSinh[30];
	int diemToan;
	int diemVan;
	double diemTB;
};
int main()
{
	HOCSINH nArray[1000];
	int mSize;
	nhap(nArray,mSize);
	xuat(nArray,mSize);
	cout<<"So luong HSG: "<<soLuongHSG(nArray,mSize)<<endl;
}
void nhap(struct HOCSINH a[], int &n)
{
	cout<<"Nhap so hoc sinh: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap ten hoc sinh: ";
		cin.getline(a[i].tenHocSinh,30);
		cout<<"Nhap diem toan: ";
		cin>>a[i].diemToan;
		cout<<"Nhap diem van: ";
		cin>>a[i].diemVan;
		cin.ignore(32767,'\n');
		a[i].diemTB = (a[i].diemToan + a[i].diemVan)/2 * 1.0;
	}
}
void xuat(struct HOCSINH a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"Ten hoc sinh"<<a[i].tenHocSinh<<endl;
		cout<<"Diem toan: "<<a[i].diemToan<<endl;
		cout<<"Diem van: "<<a[i].diemVan<<endl;
		cout<<"Diem trung binh: "<<a[i].diemTB<<endl;
	}
}
int soLuongHSG(struct HOCSINH a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].diemToan >= 8 && a[i].diemVan >= 8)
		{
			dem++;
		}
	}
	return dem;
}