#include <iostream>
using namespace std;
int soLuongTon1000(struct MATHANG a[], int n);
int giaTriTonMax(struct MATHANG a[], int n);
void xuat(struct MATHANG a[], int n);
void nhap(struct MATHANG a[], int &n);
struct MATHANG
{
	char tenMatHang[20];
	int donGia;
	int soLuongTon;
};
int main()
{
	MATHANG dcm[2000];
	int mSize;
	nhap(dcm,mSize);
	xuat(dcm,mSize);
	cout<<"Mat hanh co gia tri ton lon nhat: "<<dcm[giaTriTonMax(dcm,mSize)].tenMatHang<<endl;
	cout<<"So luong mat hang > 1000: "<<soLuongTon1000(dcm,mSize)<<endl;
}
void nhap(struct MATHANG a[], int &n)
{
	cout<<"Nhap so luong mat hang: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"MAT HANG "<<i<<": "<<endl;
		cout<<"Nhap ten mat hang: ";
		cin>>a[i].tenMatHang;
		cout<<"Nhap don gia: ";
		cin>>a[i].donGia;
		cout<<"Nhap so luong ton: ";
		cin>>a[i].soLuongTon;
	}
}
void xuat(struct MATHANG a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"MAT HANG "<<i<<": "<<endl;
		cout<<"Ten mat hang: "<<a[i].tenMatHang<<endl;
		cout<<"Don gia: "<<a[i].donGia<<endl;
		cout<<"So luong ton: "<<a[i].soLuongTon<<endl;
	}
}
int giaTriTonMax(struct MATHANG a[], int n)
{
	int max = a[0].soLuongTon * a[0].donGia;
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].soLuongTon * a[i].donGia >= max)
		{
			max = a[i].soLuongTon * a[i].donGia;
			index = i;
		}
	}
	return index;
}
int soLuongTon1000(struct MATHANG a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].soLuongTon > 1000)
		{
			dem++;
		}
	}
	return dem;
}