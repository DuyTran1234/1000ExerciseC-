#include <iostream>
using namespace std;
void hoanVi(struct TINH &a, struct TINH &b);
void sapXepGiamDan(struct TINH a[], int n);
int dienTichMax(struct TINH a[], int n);
void tinhHon1trDan(struct TINH a[], int n);
void nhap(struct TINH a[], int &n);
struct TINH
{
	short maTinh;
	char tenTinh[30];
	int danSo;
	double dienTich;
};
int main()
{
	TINH dcm[1000];
	int mSize;
	nhap(dcm,mSize);
	cout<<"Cac tinh tren 1 trieu dan: "<<endl;
	tinhHon1trDan(dcm,mSize);
	cout<<"Tinh dien tich max: "<<dcm[dienTichMax(dcm,mSize)].tenTinh<<endl;
	cout<<"Sap xep cac tinh giam dan theo dien tich: "<<endl;
	sapXepGiamDan(dcm,mSize);
}
void nhap(struct TINH a[], int &n)
{
	cout<<"Nhap so tinh can lap danh sach: ";
	cin>>n;
	for(int i = 0; i < n; i++)
	{
		cout<<"Tinh "<<i<<": "<<endl;
		cout<<"Nhap ma tinh: ";
		cin>>a[i].maTinh;
		cin.ignore(32767,'\n');
		cout<<"Nhap ten tinh: ";
		cin.getline(a[i].tenTinh,30);
		cout<<"Nhap dan so: ";
		cin>>a[i].danSo;
		cout<<"Nhap dien tich: ";
		cin>>a[i].dienTich;
	}
}
void tinhHon1trDan(struct TINH a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		if(a[i].danSo > 1000000)
		{
			cout<<a[i].tenTinh<<endl;
		}
	}
}
int dienTichMax(struct TINH a[], int n)
{
	double max = a[0].dienTich;
	int index = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].dienTich >= max)
		{
			max = a[i].dienTich;
			index = i;
		}
	}
	return index;
}
void sapXepGiamDan(struct TINH a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i].dienTich < a[j].dienTich)
			{
				hoanVi(a[i],a[j]);
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout<<a[i].tenTinh<<endl;
	}
}
void hoanVi(struct TINH &a, struct TINH &b)
{
	TINH temp = a;
	a = b;
	b = temp;
}