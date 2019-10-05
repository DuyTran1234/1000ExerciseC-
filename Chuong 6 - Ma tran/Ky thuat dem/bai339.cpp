#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int demHoanThien(int a[][100], int m, int n);
bool kiemTraHoanThien(int x);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"So luong so hoan thien tren dong: "<<demHoanThien(nArray,mSize,nSize)<<endl;
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
bool kiemTraHoanThien(int x) {
	int S = 0;
	for(int i = 1; i < x; i++) {
		if(x % i == 0) {
			S = S + i;
		}
	}
	if(S == x) {
		return true;
	}
	else {
		return false;
	}
}
int demHoanThien(int a[][100], int m, int n) {
	int dem = 0;
	int row = 0;
	cout<<"Nhap hang: ";
	cin>>row;
	for(int i = 0; i < n; i++) {
		if(kiemTraHoanThien(a[row-1][i]) == true) {
			dem++;
		}
	}
	return dem;
}