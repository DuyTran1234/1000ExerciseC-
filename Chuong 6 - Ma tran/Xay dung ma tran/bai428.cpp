#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int demPhanTuXungQuanh(int a[][100], int i, int j,int m, int n);
void xayDungMaTran(int a[][100], int b[][100], int m, int n);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	int bArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	xayDungMaTran(nArray,bArray,mSize,nSize);
	cout<<"Mang B: "<<endl;
	xuatMang(bArray,mSize,nSize);
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
void xayDungMaTran(int a[][100], int b[][100], int m, int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			b[i][j] = demPhanTuXungQuanh(a,i,j,m,n);
		}
	}
}
int demPhanTuXungQuanh(int a[][100], int i, int j,int m, int n)
{
	if(i == 0 || i == m - 1)
	{
		if(j == 0 || j == n - 1)
		{
			return 3;
		}
		else{
			return 5;
		}
	}
	else if(j == 0 || j == n - 1)
	{
		if(i > 0 || i < m - 1)
		{
			return 5;
		}
	}
	else
	{
		return 8;
	}
}