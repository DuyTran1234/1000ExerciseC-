#include <iostream>
using namespace std;
void nhap(struct HOPSUA &a);
void xuat(struct HOPSUA a);

struct HOPSUA
{
	char nhanHieu[20];
	double trongLuong;
	struct NGAY
	{
		int ngay;
		int thang;
		int nam;
	};
	NGAY HSD; 
};

int main()
{
	HOPSUA TrueMilk;
	nhap(TrueMilk);
	xuat(TrueMilk);
}
void nhap(struct HOPSUA &a)
{
	int x,y,z;
	cout<<"Nhap nhan hieu: ";
	cin.getline(a.nhanHieu,20);
	cout<<"Nhap trong luong: ";
	cin>>a.trongLuong;
	cout<<"Nhap han su dung: "<<endl;
	cout<<"Ngay: ";
	cin>>x;
	cout<<"Thang: ";
	cin>>y;
	cout<<"Nam: ";
	cin>>z;
	a.HSD.ngay = x;
	a.HSD.thang = y;
	a.HSD.nam = z;
}
void xuat(struct HOPSUA a)
{
	cout<<"Nhan hieu: "<<a.nhanHieu<<endl;
	cout<<"Trong luong: "<<a.trongLuong<<endl;
	cout<<"HSD: "<<a.HSD.ngay<<"/"<<a.HSD.thang<<"/"<<a.HSD.nam<<endl;
}