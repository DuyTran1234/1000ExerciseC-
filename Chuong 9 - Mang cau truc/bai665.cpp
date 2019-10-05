#include <iostream>
#include <math.h>
using namespace std;
void nhap(struct DATE a[], int &n);
void xuat(struct DATE a[], int n);
int ngayTrongThang(int thang, int nam);
bool kiemTraNamNhuan(int nam);
int tongSoNgay(struct DATE a);
void timNgay(struct DATE a[], int n);
struct DATE
{
	int ngay;
	int thang;
	int nam;
};
int main()
{
	DATE dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	timNgay(dcm,mSize);
}
void nhap(struct DATE a[], int &n)
{
	cout<<"Nhap so luong cac ngay: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		while(true)
		{
			cout<<"Nhap ngay "<<i<<": "<<endl;
			cout<<"Ngay: ";
			cin>>a[i].ngay;
			cout<<"Thang: ";
			cin>>a[i].thang;
			cout<<"Nam: ";
			cin>>a[i].nam;
			if(a[i].ngay > 0 && a[i].ngay <= ngayTrongThang(a[i].thang,a[i].nam))
			{
				if(a[i].thang >= 1 && a[i].thang <= 12)
				{
					break;
				}
			}
			else
			{
				cout<<"Dit me may nhap lai?"<<endl;
			}
		}
	}
}
void xuat(struct DATE a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<a[i].ngay<<"/"<<a[i].thang<<"/"<<a[i].nam<<endl;
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
int tongSoNgay(struct DATE a)
{
	int S = 0;
	for(int i = 1; i < a.nam; i++)
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
	for(int i = 1; i < a.thang; i++)
	{
		S = S + ngayTrongThang(i,a.nam);
	}
	S = S + a.ngay;
	return S;
}
void timNgay(struct DATE a[], int n)
{
	int max = fabs(tongSoNgay(a[0]) - tongSoNgay(a[1]));
	int min = fabs(tongSoNgay(a[0]) - tongSoNgay(a[1]));
	int index1 = 0;
	int index2 = 0;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(fabs(tongSoNgay(a[i]) - tongSoNgay(a[j])) <= min )
			{
				min = fabs(tongSoNgay(a[i]) - tongSoNgay(a[j]));
				index1 = i;
				index2 = j;
			}
		}
	}
	cout<<"2 ngay gan nhau nhat: "<<index1<<" va "<<index2<<endl;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(fabs(tongSoNgay(a[i]) - tongSoNgay(a[j])) >= max )
			{
				max = fabs(tongSoNgay(a[i]) - tongSoNgay(a[j]));
				index1 = i;
				index2 = j;
			}
		}
	}
	cout<<"2 ngay xa nhau nhat: "<<index1<<" va "<<index2<<endl;
}