#include <iostream>
using namespace std;
void nhap(struct VE a[], int &n);
void xuat(struct VE a[], int n);
int tongGiaTien(struct VE a[], int n);
void sapXepTangDan(struct VE a[], int n);
int ngayTrongThang(int thang, int nam);
bool kiemTraNamNhuan(int nam);
int tongSoNgay(struct VE a);
void hoanVi(struct VE &a, struct VE &b);
int tongSoGiay(struct VE a);
struct VE
{
	char tenPhim[20];
	int giaTien;
	struct THOIGIAN
	{
		int gio;
		int phut;
	};
	THOIGIAN thoiGian;
	struct NGAY
	{
		int ngay;
		int thang;
		int nam;
	};
	NGAY ngayChieu;
};
int main()
{
	VE dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	xuat(dcm,mSize);
	cout<<"Tong tat ca gia ve: "<<tongGiaTien(dcm,mSize)<<endl;
	cout<<"Sap xep cac phan tu tang dan theo ngay xem va xuat chieu: "<<endl;
	sapXepTangDan(dcm,mSize);
	xuat(dcm,mSize);
}
void nhap(struct VE a[], int &n)
{
	cout<<"Nhap so luong ve: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"PHIM "<<i<<": "<<endl;
		cout<<"Nhap ten phim: ";
		cin.getline(a[i].tenPhim,20);
		cout<<"Nhap gia tien: ";
		cin>>a[i].giaTien;
		cout<<"Xuat chieu: "<<endl;
		cout<<"Nhap gio: ";
		cin>>a[i].thoiGian.gio;
		cout<<"Nhap phut: ";
		cin>>a[i].thoiGian.phut;
		cout<<"Ngay chieu: "<<endl;
		cout<<"Nhap ngay: ";
		cin>>a[i].ngayChieu.ngay;
		cout<<"Nhap thang: ";
		cin>>a[i].ngayChieu.thang;
		cout<<"Nhap nam: ";
		cin>>a[i].ngayChieu.nam;
		cin.ignore(32767,'\n');
	}
}
void xuat(struct VE a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"PHIM "<<i<<": ";
		cout<<"Ten phim: "<<a[i].tenPhim<<endl;
		cout<<"Gia tien: "<<a[i].giaTien<<endl;
		cout<<"Xuat chieu: "<<a[i].thoiGian.gio<<":"<<a[i].thoiGian.phut<<endl;
		cout<<"Ngay xem: "<<a[i].ngayChieu.ngay<<"/"<<a[i].ngayChieu.thang<<"/"<<a[i].ngayChieu.nam<<endl;
	}
}
int tongGiaTien(struct VE a[], int n)
{
	int S = 0;
	for(int i = 0; i < n; i++)
	{
		S = S + a[i].giaTien;
	}
	return S;
}
void sapXepTangDan(struct VE a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(tongSoNgay(a[i]) > tongSoNgay(a[j]))
			{
				hoanVi(a[i],a[j]);	
			}
			else if(tongSoNgay(a[i]) == tongSoNgay(a[j]))
			{
				if(tongSoGiay(a[i]) > tongSoGiay(a[j]))
				{
					hoanVi(a[i],a[j]);
				}
			}
		}
	}
}
int ngayTrongThang(int thang, int nam)
{
	int mem = 0;
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			mem = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			mem = 30;
			break;
		case 2:
			if(kiemTraNamNhuan(nam) == true)
			{
				mem = 29;
			}
			else
			{
				mem = 28;
			}
			break;
	}
	return mem;
}
bool kiemTraNamNhuan(int nam)
{
	if((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int tongSoNgay(struct VE a)
{
	int S = 0;
	for(int i = 1; i < a.ngayChieu.nam; i++)
	{
		if(kiemTraNamNhuan(i) == true)
		{
			S = S + 366;
		}
		else
		{
			S = S + 365;
		}
	}
	for(int i = 1; i < a.ngayChieu.thang; i++)
	{
		S = S + ngayTrongThang(i,a.ngayChieu.nam);
	}
	S = S + a.ngayChieu.ngay;
	return S;
}
void hoanVi(struct VE &a, struct VE &b)
{
	VE temp = a;
	a = b;
	b = temp;
}
int tongSoGiay(struct VE a)
{
	return (a.thoiGian.gio*60 + a.thoiGian.phut)*60;
}