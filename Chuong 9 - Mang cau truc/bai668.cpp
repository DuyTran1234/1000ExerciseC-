#include <iostream>
using namespace std;
void nhap(struct HOPSUA a[], int &n);
void xuat(struct HOPSUA a[], int n);
int tongSoNgay(struct HOPSUA a);
bool kiemTraNamNhuan(int nam);
int ngayTrongThang(int thang, int nam);
int quaHanSuDung(struct HOPSUA a[], int n);
int trongLuongMax(struct HOPSUA a[], int n);
struct HOPSUA
{
	char nhanHieu[20];
	double trongLuong;
	struct NGAY
	{
		int ngay;
		int thang;
		int nam;
	};
	NGAY hsd;
};
int main()
{
	HOPSUA dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	xuat(dcm,mSize);
	cout<<"So luong hop sua qua han su dung: "<<quaHanSuDung(dcm,mSize)<<endl;
	cout<<"Hop sua co trong luong lon nhat: "<<trongLuongMax(dcm,mSize)<<endl;
}
void nhap(struct HOPSUA a[], int &n)
{
	cout<<"Nhap so luong cac hop sua: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhap hop sua "<<i<<": "<<endl;
		cout<<"Nhap nhan hieu: ";
		cin>>a[i].nhanHieu;
		cout<<"Nhap trong luong: ";
		cin>>a[i].trongLuong;
		cout<<"Nhap han su dung: "<<endl;
		cout<<"Ngay: ";
		cin>>a[i].hsd.ngay;
		cout<<"Thang: ";
		cin>>a[i].hsd.thang;
		cout<<"Nam: ";
		cin>>a[i].hsd.nam;
		cin.ignore(32767,'\n');
	}
}
void xuat(struct HOPSUA a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"Nhan hieu: "<<a[i].nhanHieu<<endl;
		cout<<"Trong luong: "<<a[i].trongLuong<<endl;
		cout<<"Han su dung: "<<a[i].hsd.ngay<<"/"<<a[i].hsd.thang<<"/"<<a[i].hsd.nam<<endl;
	}
}
int quaHanSuDung(struct HOPSUA a[], int n)
{
	int dem = 0;
	HOPSUA dcm;
	cout<<"Nhap ngay kiem tra: ";
	cin>>dcm.hsd.ngay;
	cout<<"Nhap thang kiem tra: ";
	cin>>dcm.hsd.thang;
	cout<<"Nhap nam kiem tra: ";
	cin>>dcm.hsd.nam;
	for(int i = 0; i < n; i++)
	{
		if(tongSoNgay(a[i]) < tongSoNgay(dcm))
		{
			dem++;
		}
	}
	return dem;
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
int tongSoNgay(struct HOPSUA a)
{
	int S = 0;
	for(int i = 1; i < a.hsd.nam; i++)
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
	for(int i = 1; i < a.hsd.thang; i++)
	{
		S = S + ngayTrongThang(i,a.hsd.nam);
	}
	S = S + a.hsd.ngay;
	return S;
}
int trongLuongMax(struct HOPSUA a[], int n)
{
	int max = a[0].trongLuong;
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].trongLuong >= max)
		{
			max = a[i].trongLuong;
			index = i;
		}
	}
	return index;
}