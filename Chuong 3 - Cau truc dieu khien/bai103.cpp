#include <iostream>
using namespace std;
int KiemTraNamNhuan(int y);
int KiemTraSoNgayTrongThang(int m, int y);
void NgayTruocDo(int d, int m, int y);
int main()
{
	int nDay, nMonth, nYear;
	cout<<"Nhap ngay: ";
	cin>>nDay;
	cout<<"Nhap thang: ";
	cin>>nMonth;
	cout<<"Nhap nam: ";
	cin>>nYear;
	NgayTruocDo(nDay,nMonth,nYear);
	
}
int KiemTraNamNhuan(int y)
{
	if( ( y % 4 == 0 && y %100 !=0) || y%400 ==0 )
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
void NgayTruocDo(int d, int m, int y)
{
	if(d >= 1)
	{
		if(d > 1 && d <= KiemTraSoNgayTrongThang(m,y))
		{
			d--;
		}
		else if(d == 1 && m != 1)
		{
			d = KiemTraSoNgayTrongThang(m-1,y);
			m--;
		}
		else if(d==1 && m == 1)
		{
			d = KiemTraSoNgayTrongThang(12,y);
			m = 12;
			y--;
		}
		cout<<d<<"/"<<m<<"/"<<y<<endl;
	}
}