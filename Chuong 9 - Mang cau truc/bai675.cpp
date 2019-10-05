#include <iostream>
using namespace std;
int namLuanVanMax(struct LUANVAN a[], int n);
void xuat(struct LUANVAN a[], int n);
void nhap(struct LUANVAN a[], int &n);
struct LUANVAN
{
	char maLuanVan[10];
	char tenLuanVan[100];
	char tenSinhVien[30];
	char tenGiaoVien[30];
	int namThucHien;	
};
int main()
{
	LUANVAN nArray[10000];
	int mSize;
	nhap(nArray,mSize);
	xuat(nArray,mSize);
	cout<<"Nam nhieu luan van nhat: "<<nArray[namLuanVanMax(nArray,mSize)].namThucHien<<endl;
}
void nhap(struct LUANVAN a[], int &n)
{
	cout<<"Nhap so luong luan van: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"LUAN VAN "<<i<<": "<<endl;
		cout<<"Nhap ma luan van: ";
		cin.getline(a[i].maLuanVan,10);
		cout<<"Nhap ten luan van: ";
		cin.getline(a[i].tenLuanVan,100);
		cout<<"Nhap ho ten sinh vien thuc hien: ";
		cin.getline(a[i].tenSinhVien,30);
		cout<<"Nhap ten giao vien huong dan: ";
		cin.getline(a[i].tenGiaoVien,30);
		cout<<"Nhap nam thuc hien: ";
		cin>>a[i].namThucHien;
		cin.ignore(32767,'\n');
	}
}
void xuat(struct LUANVAN a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"LUAN VAN "<<i<<": "<<endl;
		cout<<"Ma luan van: "<<a[i].maLuanVan<<endl;
		cout<<"Ten luan van: "<<a[i].tenLuanVan<<endl;
		cout<<"Ho ten sinh vien thuc hien: "<<a[i].tenSinhVien<<endl;
		cout<<"Ho ten giao vien huong dan: "<<a[i].tenGiaoVien<<endl;
	}
}
int namLuanVanMax(struct LUANVAN a[], int n)
{
	int max = 0;
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		int dem = 0;
		for(int j = 0; j < n; j++)
		{
			if(i != j && a[i].namThucHien == a[j].namThucHien)
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