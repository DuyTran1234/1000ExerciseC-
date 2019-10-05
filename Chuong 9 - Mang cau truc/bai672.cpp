#include <iostream>
using namespace std;
void hoanVi(struct CAUTHU &a, struct CAUTHU &b);
void xuat(struct CAUTHU a[], int n);
void lietKeNhoTuoi(struct CAUTHU a[], int n);
void nhap(struct CAUTHU a[], int &n);
void sapXepGiamDan(struct CAUTHU a[], int n);
int ngayTrongThang(int thang, int nam);
bool kiemTraNamNhuan(int nam);
int tongSoNgay(struct CAUTHU a);

struct CAUTHU
{
	char maCauThu[10];
	char tenCauThu[30];
	struct NGAY
	{
		int ngay;
		int thang;
		int nam;
	};
	NGAY ngaySinh;
};
int main()
{
	CAUTHU nArray[1000];
	int mSize;
	nhap(nArray,mSize);
	xuat(nArray,mSize);
	cout<<"Cac cau thu nho tuoi nhat: "<<endl;
	lietKeNhoTuoi(nArray,mSize);
	cout<<"Sap xep cau thu giam dan theo ngay sinh: "<<endl;
	sapXepGiamDan(nArray,mSize);
	xuat(nArray,mSize);
}
void nhap(struct CAUTHU a[], int &n)
{
	cout<<"Nhap so luong cau thu: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"CAU THU "<<i<<": "<<endl;
		cout<<"Nhap ma cau thu: ";
		cin.getline(a[i].maCauThu,10);
		cout<<"Nhap ten cau thu: ";
		cin.getline(a[i].tenCauThu,30);
		cout<<"Nhap ngay sinh: "<<endl;
		cout<<"Ngay: ";
		cin>>a[i].ngaySinh.ngay;
		cout<<"Thang: ";
		cin>>a[i].ngaySinh.thang;
		cout<<"Nam: ";
		cin>>a[i].ngaySinh.nam;
		cin.ignore(32767,'\n');
	}
}
void xuat(struct CAUTHU a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"Ma cau thu: "<<a[i].maCauThu<<endl;
		cout<<"Ten cau thu: "<<a[i].tenCauThu<<endl;
		cout<<"Ngay sinh: "<<a[i].ngaySinh.ngay<<"/"<<a[i].ngaySinh.thang<<"/"<<a[i].ngaySinh.nam<<endl;
	}
}
void lietKeNhoTuoi(struct CAUTHU a[], int n)
{
	int min = a[0].ngaySinh.nam;
	for(int i = 0; i < n; i++)
	{
		if(a[i].ngaySinh.nam >= min)
		{
			min = a[i].ngaySinh.nam;
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i].ngaySinh.nam == min)
		{
			cout<<"Ma cau thu: "<<a[i].maCauThu<<endl;
			cout<<"Ten cau thu: "<<a[i].tenCauThu<<endl;
			cout<<"Ngay sinh: "<<a[i].ngaySinh.ngay<<"/"<<a[i].ngaySinh.thang<<"/"<<a[i].ngaySinh.nam<<endl;
		}
	}
}
void sapXepGiamDan(struct CAUTHU a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(tongSoNgay(a[i]) > tongSoNgay(a[j]))
			{
				hoanVi(a[i],a[j]);
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
int tongSoNgay(struct CAUTHU a)
{
	int S = 0;
	for(int i = 1; i < a.ngaySinh.nam; i++)
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
	for(int i = 1; i < a.ngaySinh.thang; i++)
	{
		S = S + ngayTrongThang(i,a.ngaySinh.nam);
	}
	S = S + a.ngaySinh.ngay;
	return S;
}
void hoanVi(struct CAUTHU &a, struct CAUTHU &b)
{
	CAUTHU temp = a;
	a = b;
	b = temp;
}