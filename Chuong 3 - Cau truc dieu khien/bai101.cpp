#include <iostream>
using namespace std;
int KiemTraNamNhuan(int y);
int SoNgayTrongThang(int m,int y);
int main()
{
	int nMonth, nYear;
	cout<<"Nhap thang: ";
	cin>>nMonth;
	cout<<"Nhap nam: ";
	cin>>nYear;
	cout<<"So ngay: "<<SoNgayTrongThang(nMonth,nYear)<<endl;
}
int KiemTraNamNhuan(int y)
{
	if( (y % 4 == 0 && y % 100 !=0 ) || y % 400 ==0 )
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
int SoNgayTrongThang(int m,int y)
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
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
		{
			if(KiemTraNamNhuan(y) == 1)
			{
				return 29;
			}
			else
			{
				return 28;
			}
			break;
		}
	}
}