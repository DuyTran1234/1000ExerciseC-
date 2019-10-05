#include <iostream>
using namespace std;
void xuat(struct MATHANG a);
void nhap(struct MATHANG &a);
struct MATHANG
{
	char tenMatHang[20];
	int giaThanh;
	int soLuongTon;
};
int main()
{
	MATHANG dcm;	
	nhap(dcm);
	xuat(dcm);
}
void nhap(struct MATHANG &a)
{
	cout<<"Nhap ten mat hang: ";
	cin>>a.tenMatHang;
	cout<<"Nhap gia tien: ";
	cin>>a.giaThanh;
	cout<<"Nhap so luong ton kho: ";
	cin>>a.soLuongTon;
}
void xuat(struct MATHANG a)
{
	cout<<"Ten mat hang: "<<a.tenMatHang<<endl;
	cout<<"Gia tien: "<<a.giaThanh<<endl;
	cout<<"So luong ton kho: "<<a.soLuongTon<<endl;
}