#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void dichTraiBien(int a[][100], int m, int n);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	dichTraiBien(nArray,mSize,nSize);
	cout<<endl;
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
void dichTraiBien(int a[][100], int m, int n)
{
	for(int j = 0; j < n - 1; j++)
	{
		int temp = a[0][j];
		a[0][j] = a[0][j+1];
		a[0][j+1] = temp;
	}
	for(int i = 0; i < m - 1; i++)
	{
		int temp = a[i][n-1];
		a[i][n-1] = a[i+1][n-1];
		a[i+1][n-1] = temp;
	}
	for(int j = n - 1; j > 0; j--)
	{
		int temp = a[m-1][j];
		a[m-1][j] = a[m-1][j-1];
		a[m-1][j-1] = temp;
	}
	for(int i = m - 1; i > 1; i--)
	{
		int temp = a[i][0];
		a[i][0] = a[i-1][0];
		a[i-1][0] = temp;
	}
}