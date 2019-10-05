#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
bool kiemTraChinhPhuong(int x);
void lietKeCotChinhPhuong(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArrays[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	lietKeCotChinhPhuong(nArray,mSize,nSize);
}
void nhapMang(int a[][100], int &m, int &n)
{
	cout<<"Nhap so hang: ";
	cin>>m;
	cout<<"Nhap so cot: ";
	cin>>n;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
void xuatMang(int a[][100], int m, int n) {
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cout<<a[i][j]<<"	";
		}
		cout<<endl;
	}
}
bool kiemTraChinhPhuong(int x)
{
	int kiemTra = 0;
	for(int i = 0; i <= x; i++)
	{
		if(i * i == x)
		{
			kiemTra = 1;
			break;
		}
	}
	if(kiemTra == 1)
	{
		return true;
	}
	else{
		return false;
	}
}
void lietKeCotChinhPhuong(int a[][100], int m, int n)
{
	cout<<"Cac cot co chua so chinh phuong: "<<endl;
	for(int j = 0; j < n; j++)
	{
		int kiemTra = 0;
		for(int i = 0; i < m; i++)
		{
			if(kiemTraChinhPhuong(a[i][j]) == true)
			{
				kiemTra = 1;
			}
		}
		if(kiemTra == 1)
		{
			cout<<j<<endl;
		}
	}
}