#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int demSoDuongBien(int a[][100],int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"So luong so duong tren duong bien: "<<demSoDuongBien(nArray,mSize,nSize)<<endl;
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
int demSoDuongBien(int a[][100],int m, int n) {
	int dem = 0;
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(i == 0 || i == m - 1){
				if(a[i][j] > 0) {
					dem++;
				}
			}
			else if(j == 0 || j == n-1){
				if(i >= 1 && i <= m - 2) {
					if(a[i][j] > 0){
						dem++;
					}
				}
			}
		}
	}
	return dem;
}