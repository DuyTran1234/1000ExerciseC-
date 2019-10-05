#include <iostream>
using namespace std;
void hoanVi(struct THISINH &a, struct THISINH &b);
void sapXepGiamDan(struct THISINH a[], int n);
void thiSinhDat(struct THISINH a[], int n);
void xuat(struct THISINH a[], int n);
void nhap(struct THISINH a[], int &n);
struct THISINH
{
	char maThiSinh[5];
	char hoTen[30];
	double diemToan;
	double diemLy;
	double diemHoa;
	double diemTong;	
};
int main()
{
	THISINH nArray[1000];
	int mSize;
	nhap(nArray,mSize);
	xuat(nArray,mSize);
	thiSinhDat(nArray,mSize);
	cout<<"Sap xep thu tu giam dan theo diem tong: "<<endl;
	sapXepGiamDan(nArray,mSize);
	xuat(nArray,mSize);
}
void nhap(struct THISINH a[], int &n)
{
	cout<<"Nhap so luong thi sinh: ";
	cin>>n;
	cin.ignore(32767,'\n');
	for(int i = 0; i < n; i++)
	{
		cout<<"THI SINH "<<i<<": "<<endl;
		cout<<"Nhap ma thi sinh: ";
		cin.getline(a[i].maThiSinh,5);
		cout<<"Nhap ten thi sinh: ";
		cin.getline(a[i].hoTen,30);
		cout<<"Nhap diem toan: ";
		cin>>a[i].diemToan;
		cout<<"Nhap diem ly: ";
		cin>>a[i].diemLy;
		cout<<"Nhap diem hoa: ";
		cin>>a[i].diemHoa;
		cin.ignore(32767,'\n');
		a[i].diemTong = a[i].diemHoa + a[i].diemLy + a[i].diemToan;
	}
}
void xuat(struct THISINH a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout<<"THI SINH "<<i<<": "<<endl;
		cout<<"Ma thi sinh: "<<a[i].maThiSinh<<endl;
		cout<<"Ten thi sinh: "<<a[i].hoTen<<endl;
		cout<<"Diem toan: "<<a[i].diemToan<<endl;
		cout<<"Diem ly: "<<a[i].diemLy<<endl;
		cout<<"Diem hoa: "<<a[i].diemHoa<<endl;
		cout<<"Tong diem: "<<a[i].diemTong<<endl;
	}
}
void thiSinhDat(struct THISINH a[], int n)
{
	cout<<"Cac thi sinh dat: "<<endl;
	for(int i = 0; i < n; i++)
	{
		if(a[i].diemTong > 15 && a[i].diemToan > 1 && a[i].diemHoa > 1 && a[i].diemLy > 1)
		{
			cout<<a[i].hoTen<<endl;
		}
	}
}
void sapXepGiamDan(struct THISINH a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i].diemTong < a[j].diemTong)
			{
				hoanVi(a[i],a[j]);
			}	
		}
	}
}
void hoanVi(struct THISINH &a, struct THISINH &b)
{
	THISINH temp = a;
	a = b;
	b = temp;
}