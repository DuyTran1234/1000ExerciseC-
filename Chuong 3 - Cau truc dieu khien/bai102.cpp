#include <iostream>
using namespace std;
int KiemTraNamNhuan(int y);
int KiemTraSoNgayTrongThang(int m, int y);
void NgayKeTiep(int d, int m, int y);
int main()
{
	int nDay, nMonth, nYear;
	cout<<"Nhap ngay: ";
	cin>>nDay;
	cout<<"Nhap thang: ";
	cin>>nMonth;
	cout<<"Nhap nam: ";
	cin>>nYear;
	NgayKeTiep(nDay,nMonth,nYear);
	
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
void NgayKeTiep(int d, int m, int y)
{
	if( d >= 1 )
	{
		if( d < KiemTraSoNgayTrongThang(m,y))
		{
			d++;
		}
		else if(d == KiemTraSoNgayTrongThang(m,y))
		{
			if(m == 12)
			{
				d = 1;
				m = 1;
				y++;
			}
			else if(d != 12)
			{
				d = 1;
				m++;
			}
		}
		cout<<d<<"/"<<m<<"/"<<y<<endl;	
	}
	else 
	{
		cout<<"Ngay khong hop le"<<endl;
	}	
}