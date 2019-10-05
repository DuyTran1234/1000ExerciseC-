#include <iostream>
#include <cmath>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
double trungBinhNhan(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"S = "<<trungBinhNhan(nArray,mSize,nSize)<<endl;
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
double trungBinhNhan(int a[][100], int m, int n) {
	double S = 1;
	int dem = 0;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(a[i][j] > 0) {
				S = S * a[i][j];
				dem++;
			}
		}
	}
	double ketQua = pow(S, 1 / (static_cast<double>(dem)));
	return ketQua;
}