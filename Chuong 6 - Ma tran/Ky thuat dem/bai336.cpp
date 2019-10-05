#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int tanSuatX(int a[][100], int m, int n, int x);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	int x = 0;
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"Nhap x: ";
	cin>>x;
	cout<<"Tan suat xuat hien cua "<<x<<": "<<tanSuatX(nArray,mSize,nSize,x)<<endl;
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
int tanSuatX(int a[][100], int m, int n, int x) {
	int dem = 0;
	for(int i = 0; i < m; i++ ) {
		for(int j = 0; j < n; j++) {
			if(a[i][j] == x) {
				dem++;
			}
		}
	}
	return dem;
}