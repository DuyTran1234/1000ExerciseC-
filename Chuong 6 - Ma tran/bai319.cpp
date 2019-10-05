#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void sapXep(int a[][100],int m,int n);
void hoanVi(int &x, int &y);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<endl;
	sapXep(nArray,mSize,nSize);
	xuatMang(nArray,mSize,nSize);
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
void sapXep(int a[][100],int m,int n) {
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m - 1; j++){
			for(int k = j + 1; k < m; k++){
				if(a[j][i] > a[k][i])
				{
					hoanVi(a[j][i], a[k][i]);
				}
			}
		}
	}
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n - 1; j++) {
			for(int k = j + 1; k < n; k++ ){
				if(a[i][j] > a[i][k]){
					hoanVi(a[i][j],a[i][k]);
				}
			}
		}	
	}
}
void hoanVi(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}