#include <iostream>
#include <string.h>
using namespace std;
void timChuyenBay(struct CHUYENBAY a[], int n);
void nhap(struct CHUYENBAY a[], int &n);
void xuat(struct CHUYENBAY a[], int n);
int ngayCoNhieuChuyenBayNhat(struct CHUYENBAY a[], int n);
struct CHUYENBAY
{
	char maChuyenBay[5];
	struct NGAY
	{
		int ngay;
		int thang;
		int nam;
	};
	NGAY ngayBay;
	struct GIO
	{
		int gio;
		int phut;
	};
	GIO gioBay;
	char noiDi[20];
	char noiDen[20];
};
int main()
{
	CHUYENBAY dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	xuat(dcm,mSize);
	int i = ngayCoNhieuChuyenBayNhat(dcm,mSize);
	cout<<"Ngay co nhieu chuyen bay nhat: "<<dcm[i].ngayBay.ngay<<"/"<<dcm[i].ngayBay.thang<<"/"<<dcm[i].ngayBay.nam<<endl;
	cout<<"Tim chuyen bay: "<<endl;
	timChuyenBay(dcm,mSize);
}
void nhap(struct CHUYENBAY a[], int &n)
{
	cout<<"Nhap so luong chuyen bay: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"CHUYEN BAY "<<i<<": "<<endl;
		cout<<"Nhap ma chuyen bay: ";
		cin.getline(a[i].maChuyenBay,5);
		cout<<"Nhap ngay bay: "<<endl;
		cout<<"Ngay: ";
		cin>>a[i].ngayBay.ngay;
		cout<<"Thang: ";
		cin>>a[i].ngayBay.thang;
		cout<<"Nam: ";
		cin>>a[i].ngayBay.nam;
		cout<<"Gio bay: "<<endl;
		cout<<"Gio: ";
		cin>>a[i].gioBay.gio;
		cout<<"Phut: ";
		cin>>a[i].gioBay.phut;
		cin.ignore(32767,'\n');
		cout<<"Nhap noi di: ";
		cin.getline(a[i].noiDi,20);
		cout<<"Nhap noi den: ";
		cin.getline(a[i].noiDen,20);
	}
}
void xuat(struct CHUYENBAY a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"CHUYEN BAY "<<i<<": "<<endl;
		cout<<"Ma chuyen bay: "<<a[i].maChuyenBay<<endl;
		cout<<"Ngay bay: "<<a[i].ngayBay.ngay<<"/"<<a[i].ngayBay.thang<<"/"<<a[i].ngayBay.nam<<endl;
		cout<<"Gio bay: "<<a[i].gioBay.gio<<":"<<a[i].gioBay.phut<<endl;
		cout<<"Noi di: "<<a[i].noiDi<<endl;
		cout<<"Noi den: "<<a[i].noiDen<<endl;
	}
}
int ngayCoNhieuChuyenBayNhat(struct CHUYENBAY a[], int n)
{
	int max = 0;	
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		int dem = 0;
		for(int j = 0; j < n; j++)
		{
			if(i != j && a[i].ngayBay.ngay == a[j].ngayBay.ngay && a[i].ngayBay.thang == a[j].ngayBay.thang && a[i].ngayBay.nam == a[j].ngayBay.nam)
			{
				dem++;
			}
		}
		if(dem >= max)
		{
			max = dem;
			index = i;
		}
	}
	return index;
}
void timChuyenBay(struct CHUYENBAY a[], int n)
{
	cout<<"Nhap ma chuyen bay can tim: ";
	char check[5];
	cin.getline(check,5);
	for(int i = 0; i < n; i++)
	{
		if(strcmp(check,a[i].maChuyenBay) == 0)
		{
			cout<<"CHUYEN BAY "<<i<<": "<<endl;
			cout<<"Ma chuyen bay: "<<a[i].maChuyenBay<<endl;
			cout<<"Ngay bay: "<<a[i].ngayBay.ngay<<"/"<<a[i].ngayBay.thang<<"/"<<a[i].ngayBay.nam<<endl;
			cout<<"Gio bay: "<<a[i].gioBay.gio<<":"<<a[i].gioBay.phut<<endl;
			cout<<"Noi di: "<<a[i].noiDi<<endl;
			cout<<"Noi den: "<<a[i].noiDen<<endl;
		}
	}
}