#include <iostream>
using namespace std;
void nhap(struct dateTime &a);
void xuat(struct dateTime a);
bool kiemTraNamNhuan(struct dateTime a);
int ngayTrongThang(struct dateTime a);
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
	cout<<"Nam nhuan? "<<kiemTraNamNhuan(dcm)<<endl;
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
		if(a.ngay <= ngayTrongThang(a) && a.ngay > 0 && a.thang > 0 && a.thang <= 12)
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
bool kiemTraNamNhuan(struct dateTime a)
{
	if((a.nam % 4 == 0 && a.nam % 100 != 0) || a.nam % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int ngayTrongThang(struct dateTime a)
{
	int b = 0;
	switch(a.thang)
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
			if(kiemTraNamNhuan(a) == true)
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