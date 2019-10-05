#include <iostream>
using namespace std;
void nhap(struct NHANVIEN a[], int &n);
void xuat(struct NHANVIEN a[], int n);
void hoanVi(struct NHANVIEN &a, struct NHANVIEN &b);
int luongMax(struct NHANVIEN a[], int n);
double tongLuong(struct NHANVIEN a[], int n);
void sapXepTangDan(struct NHANVIEN a[], int n);
struct NHANVIEN
{
	char maNhanVien[5];
	char tenNhanVien[30];
	double luongNhanVien;
};
int main()
{
	NHANVIEN nArray[1000];
	int mSize;
	nhap(nArray,mSize);
	xuat(nArray,mSize);
	cout<<"Nhan vien luong cao nhat: "<<nArray[luongMax(nArray,mSize)].tenNhanVien<<endl;
	cout<<"Tong luong nhan vien: "<<tongLuong(nArray,mSize)<<endl;
	cout<<"Sap xep tang dan theo luong nhan vien: "<<endl;
	sapXepTangDan(nArray,mSize);
	xuat(nArray,mSize);
}
void nhap(struct NHANVIEN a[], int &n)
{
	cout<<"Nhap so luong nhan vien: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"NHAN VIEN "<<i<<": "<<endl;
		cout<<"Nhap ma nhan vien: ";
		cin.getline(a[i].maNhanVien,5);
		cout<<"Nhap ten nhan vien: ";
		cin.getline(a[i].tenNhanVien,30);
		cout<<"Nhap luong nhan vien: ";
		cin>>a[i].luongNhanVien;
		cin.ignore(32767,'\n');
	}
}
void xuat(struct NHANVIEN a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"NHAN VIEN "<<i<<": "<<endl;
		cout<<"Ma nhan vien: "<<a[i].maNhanVien<<endl;
		cout<<"Ten nhan vien: "<<a[i].tenNhanVien<<endl;
		cout<<"Luong nhan vien: "<<a[i].luongNhanVien<<endl;
	}
}
int luongMax(struct NHANVIEN a[], int n)
{
	int index = 0;
	double max = a[0].luongNhanVien;
	for(int i = 0; i < n; i++)
	{
		if(a[i].luongNhanVien >= max)
		{
			max = a[i].luongNhanVien;
			index = i;
		}	
	}
	return index;
}
double tongLuong(struct NHANVIEN a[], int n)
{
	double S = 0;
	for(int i = 0; i < n; i++)
	{
		S = S + a[i].luongNhanVien;
	}
	return S;
}
void sapXepTangDan(struct NHANVIEN a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i].luongNhanVien > a[j].luongNhanVien)
			{
				hoanVi(a[i],a[j]);
			}
		}
	}
}
void hoanVi(struct NHANVIEN &a, struct NHANVIEN &b)
{
	NHANVIEN temp = a;
	a = b; 
 	b = temp;
}