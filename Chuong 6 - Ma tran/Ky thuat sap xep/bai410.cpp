#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void hoanVi(int &x, int &y);
void giamDanTrenXuong(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	giamDanTrenXuong(nArray,mSize,nSize);
	cout<<"Ma tran sau khi sap xep: "<<endl;
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
void giamDanTrenXuong(int a[][100], int m, int n)
{
	int index = 0;
	cout<<"Nhap cot can sap xep giam dan tu tren xuong: ";
	cin>>index;
	for(int i = 0; i < m - 1; i++)
	{
		for(int k = i + 1; k < m; k++)
		{
			if(a[i][index] < a[k][index])
			{
				hoanVi(a[i][index], a[k][index]);
			}
		}
	}
}
void hoanVi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}