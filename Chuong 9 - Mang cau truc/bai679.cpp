#include <iostream>
#include <string.h>
using namespace std;
void nhap(struct DAILY a[], int &n);
void xuat(struct DAILY a[], int n);
void timDaiLyTheoMa(struct DAILY a[], int n);
struct DAILY
{
	char maDaiLy[5];
	char tenDaiLy[30];
	int SDT;
	struct NGAY{
		int ngay;
		int thang;
		int nam;
	};
	NGAY ngayTiepCan;
	char diaChi[50];
	char Email[50];
};
int main()
{
	DAILY nArray[1000];
	int mSize;
	nhap(nArray,mSize);
	xuat(nArray,mSize);
	timDaiLyTheoMa(nArray,mSize);
}
void nhap(struct DAILY a[], int &n)
{
	cout<<"Nhap so luong dai ly: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"DAI LY "<<i<<": "<<endl;
		cout<<"Nhap ma dai ly: ";
		cin.getline(a[i].maDaiLy,5);
		cout<<"Nhap ten dai ly: ";
		cin.getline(a[i].tenDaiLy,30);
		cout<<"Nhap so dien thoai: ";
		cin>>a[i].SDT;
		cout<<"Nhap ngay tiep can: "<<endl;
		cout<<"Ngay: ";
		cin>>a[i].ngayTiepCan.ngay;
		cout<<"Thang: ";
		cin>>a[i].ngayTiepCan.thang;
		cout<<"Nam: ";
		cin>>a[i].ngayTiepCan.nam;
		cin.ignore(32767,'\n');
		cout<<"Nhap dia chi: ";
		cin.getline(a[i].diaChi,50);
		cout<<"Nhap E-mail: ";
		cin.getline(a[i].Email,50);
	}
}
void xuat(struct DAILY a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"DAI LY "<<i<<": "<<endl;
		cout<<"Ma dai ly: "<<a[i].maDaiLy<<endl;
		cout<<"Ten dai ly: "<<a[i].tenDaiLy<<endl;
		cout<<"Dien thoai: "<<a[i].SDT<<endl;
		cout<<"Ngay tiep can: "<<a[i].ngayTiepCan.ngay<<"/"<<a[i].ngayTiepCan.thang<<"/"<<a[i].ngayTiepCan.nam<<endl;
		cout<<"Dia chi: "<<a[i].diaChi<<endl;
		cout<<"E-Mail: "<<a[i].Email<<endl;
	}
}
void timDaiLyTheoMa(struct DAILY a[], int n)
{
	cout<<"Nhap ma dai ly can tim: ";
	char dcm[5];
	for(int i = 0; i < n; i++)
	{
		if(strcmp(a[i].maDaiLy,dcm) == 0)
		{
			cout<<"DAI LY "<<i<<": "<<endl;
			cout<<"Ma dai ly: "<<a[i].maDaiLy<<endl;
			cout<<"Ten dai ly: "<<a[i].tenDaiLy<<endl;
			cout<<"Dien thoai: "<<a[i].SDT<<endl;
			cout<<"Ngay tiep can: "<<a[i].ngayTiepCan.ngay<<"/"<<a[i].ngayTiepCan.thang<<"/"<<a[i].ngayTiepCan.nam<<endl;
			cout<<"Dia chi: "<<a[i].diaChi<<endl;
			cout<<"E-Mail: "<<a[i].Email<<endl;
		}
	}
}