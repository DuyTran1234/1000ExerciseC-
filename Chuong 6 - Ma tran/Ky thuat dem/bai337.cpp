#include <iostream>
#include <cmath>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int demSoLuongChu(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"So chu so trong ma tran: "<<demSoLuongChu(nArray,mSize,nSize)<<endl;
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
int soChuSo(int x) {
	int dem = 0;
	x = abs(x);
	while(x != 0) {
		x = x/10;
		dem++;
	}
	return dem;
}
int demSoLuongChu(int a[][100], int m, int n) {
	int dem = 0;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			dem = dem + soChuSo(a[i][j]);
		}
	}
	return dem;
}