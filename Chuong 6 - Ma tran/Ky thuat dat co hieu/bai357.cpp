#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void lietKeToanNT(int a[][100], int m, int n);
bool kiemTraNguyenTo(int x);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	lietKeToanNT(nArray,mSize,nSize);
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
bool kiemTraNguyenTo(int x)
{
	int dem = 0;
	for(int i = 1; i <= x; i++)
	{
		if(x%i == 0)
		{
			dem++;
		}
	}
	if(dem == 2)
	{
		return true;
	}
	else{
		return false;
	}
}
void lietKeToanNT(int a[][100], int m, int n)
{
	cout<<"Cac dong co so nguyen to: "<<endl;
	for(int i = 0; i < m; i++)
	{
		int kiemTra = 0;
		for(int j = 0; j < n; j++)
		{
			if(kiemTraNguyenTo(a[i][j]) == true)
			{
				kiemTra = 1;
			}
		}
		if(kiemTra == 1)
		{
			cout<<i<<endl;
		}
	}
}