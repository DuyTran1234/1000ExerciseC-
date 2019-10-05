#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void xoaMotCot(int a[][100], int m, int &n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	xoaMotCot(nArray,mSize,nSize);
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
void xoaMotCot(int a[][100], int m, int &n)
{
	int index = 0;
	cout<<"Nhap cot can xoa: ";
	cin>>index;
	for(int j = index; j < n; j++)
	{
		for(int i = 0; i < m; i++)
		{
			a[i][j] = a[i][j+1];
		}
	}
	n--;
}