#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int kiemTraNT(int x);
int soLuongSoNT(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<endl;
	cout<<soLuongSoNT(nArray,mSize,nSize)<<endl;
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
int soLuongSoNT(int a[][100], int m, int n) {
	int count = 0;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(kiemTraNT(a[i][j]) == 1) {
				count++;
			}
		}
	}
	return count;
}
int kiemTraNT(int x) {
	int count = 0;
	for(int i = 1; i <= x; i++) {
		if(x%i == 0) {
			count++;
		}
	}
	if(count == 2) {
		return 1;
	}
	else{
		return 0;
	}
}