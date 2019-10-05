#include <iostream>
using namespace std;
void nhap(struct dateTime &a);
void xuat(struct dateTime a);
bool kiemTraNamNhuan(int nam);
int ngayTrongThang(int thang, int nam);
void timNgay(int &ngay, int &thang, int &nam);
int soThuTuNgayTrongNam(int ngay, int thang, int nam);
void timNgayKeKNgay(int &ngay, int &thang, int &nam);
struct dateTime
{
	int ngay;
	int thang;
	int nam;
};
int main()
{
	dateTime dcm;
	nhap(dcm);
	timNgayKeKNgay(dcm.ngay,dcm.thang,dcm.nam);
	xuat(dcm);
}
void nhap(struct dateTime &a)
{
	while(true)
	{
		cout<<"Nhap ngay: ";
		cin>>a.ngay;
		cout<<"Nhap thang: ";
		cin>>a.thang;
		cout<<"Nhap nam: ";
		cin>>a.nam;
		if(a.ngay <= ngayTrongThang(a.thang,a.nam) && a.ngay > 0 && a.thang > 0 && a.thang <= 12)
		{
			break;
		}
		else
		{
			cout<<"Nhap sai dcm!"<<endl;
		}
	}
}
void xuat(struct dateTime a)
{
	cout<<a.ngay<<"/"<<a.thang<<"/"<<a.nam<<endl;
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
int ngayTrongThang(int thang, int nam)
{
	int b = 0;
	switch(thang)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			b = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			b = 30;
			break;
		case 2:
			if(kiemTraNamNhuan(nam) == true)
			{
				b = 29;
			}
			else
			{
				b = 28;
			}
			break;
	}
	return b;
}
void timNgay(int &ngay, int &thang, int &nam,int stt)
{
	int S = 0;
	int i = 1;
	while(true)
	{
		if(kiemTraNamNhuan(i) == true)
		{
			S = S + 366;
		}
		else if(kiemTraNamNhuan(i) == false)
		{
			S = S + 365;
		}
		i++;
		if(stt - S <= 0)
		{
			if(kiemTraNamNhuan(i-1) == true)
			{
				S = S - 366;
			}
			else if(kiemTraNamNhuan(i-1) == false)
			{
				S = S - 365;
			}
			break;
		}
	}
	nam = i - 1;
	int soNgay = stt - S;
	int P = 0;
	for(int i = 1; i <= (int)soNgay/31; i++)
	{
		P = P + ngayTrongThang(i,nam);
	}
	ngay = soNgay - P;
	thang = (int)soNgay/31 + 1;
}
void timNgayKeKNgay(int &ngay, int &thang, int &nam)
{
	int k;
	cout<<"Nhap k ngay: ";
	cin>>k;
	timNgay(ngay,thang,nam,soThuTuNgayTrongNam(ngay,thang,nam)+k);
}
int soThuTuNgayTrongNam(int ngay, int thang, int nam)
{
	int S = 0;
	int P = 0;
	for(int i = 1; i < nam; i++)
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
	for(int i = 1; i < thang; i++)
	{
		P = P + ngayTrongThang(i,nam);
	}
	P = P + ngay;
	return S + P;
}