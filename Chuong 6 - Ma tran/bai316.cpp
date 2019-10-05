#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int nhoHon2004(int a[][100],int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<nhoHon2004(nArray,mSize,nSize)<<endl;
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
int nhoHon2004(int a[][100],int m, int n){
	int kiemTra = 0;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(a[i][j] < 2004 && a[i][j] % 2 == 0)
			{
				kiemTra = 1;
			}
		}
	}
	if(kiemTra == 1) {
		return 1;
	}
	else {
		return 0;
	}
}