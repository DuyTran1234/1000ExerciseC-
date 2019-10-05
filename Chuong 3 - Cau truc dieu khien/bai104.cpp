#include <iostream>
using namespace std;
int TinhSoNgay(int d,int m, int y);
int KiemTraNamNhuan(int y);
int KiemTraSoNgayTrongThang(int m, int y);

int main()
{
	int nDay, nMonth, nYear;
	cout<<"Nhap ngay: ";
	cin>>nDay;
	cout<<"Nhap thang: ";
	cin>>nMonth;
	cout<<"Nhap nam: ";
	cin>>nYear;
	cout<<"Tong so ngay: "<<TinhSoNgay(nDay,nMonth,nYear)<<endl;
}
int KiemTraNamNhuan(int y)
{
	if( (y%4==0 && y%100!=0) || y % 400 == 0)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int KiemTraSoNgayTrongThang(int m, int y)
{
	switch(m)
	{
		case 1: 
		case 3: 
		case 5:
		case 7: 
		case 8: 
		case 10:
		case 12:
			return 31;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		case 2:
		{
			if(KiemTraNamNhuan(y)==1)
			{
				return 29;
			}
			else
			{
				return 28;
			}
		}
	}
}
int TinhSoNgay(int d,int m, int y)
{
	int S = 0;
	int TongSoNgay = 0;
	for(int i = 1; i < m; i++)
	{
		S = S + KiemTraSoNgayTrongThang(i,y);
	}
	TongSoNgay = S + d;
	return TongSoNgay;
}