#include <iostream>
using namespace std;
void xuat(struct VE a);
void nhap(struct VE &a);
struct VE
{
	char tenPhim[20];
	int giaTien;
	struct THOIGIAN
	{
		int gio;
		int phut;
	};
	THOIGIAN xuatChieu;
	struct NGAY
	{
		int ngay;
		int thang;
		int nam;
	};
	NGAY ngayXem;
};

int main()
{
	VE phim1;
	nhap(phim1);
	xuat(phim1);
}
void nhap(struct VE &a)
{
	int hour,minute;
	int day,month,year;
	cout<<"Nhap ten phim: ";
	cin.getline(a.tenPhim,20);
	cout<<"Nhap gia tien: ";
	cin>>a.giaTien;
	cout<<"Xuat chieu: "<<endl;
	cout<<"Gio: ";
	cin>>hour;
	a.xuatChieu.gio = hour;
	cout<<"Phut: ";
	cin>>minute;
	a.xuatChieu.phut = minute;
	cout<<"Nhap ngay xem: "<<endl;
	cout<<"Ngay: ";
	cin>>day;
	a.ngayXem.ngay = day;
	cout<<"Thang: ";
	cin>>month;
	a.ngayXem.thang = month;
	cout<<"Nam: ";
	cin>>year;
	a.ngayXem.nam = year;
}
void xuat(struct VE a)
{
	cout<<"Ten phim: "<<a.tenPhim<<endl;
	cout<<"Gia: "<<a.giaTien<<endl;
	cout<<"Xuat chieu: "<<a.xuatChieu.gio<<":"<<a.xuatChieu.phut<<endl;
	cout<<"Ngay xem: "<<a.ngayXem.ngay<<"/"<<a.ngayXem.thang<<"/"<<a.ngayXem.nam<<endl;
}