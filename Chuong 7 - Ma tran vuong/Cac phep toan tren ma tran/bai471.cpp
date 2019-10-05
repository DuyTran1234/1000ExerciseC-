#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int m);
void xuatMaTran(int a[][100], int m);
void tong2MaTran(int a[][100], int b[][100], int m);
int main()
{
	int nArray[100][100];
	int mArray[100][100];
	int mSize = 0;
	cout<<"Nhap kich thuoc 2 ma tran vuong: ";
	cin>>mSize;
	cout<<"Nhap ma tran A: "<<endl;
	nhapMaTranVuong(nArray, mSize);
	cout<<"Nhap ma tran B: "<<endl;
	nhapMaTranVuong(mArray, mSize);
	cout<<"Ma tran A: "<<endl;
	xuatMaTran(nArray, mSize);
	cout<<"Ma tran B: "<<endl;
	xuatMaTran(mArray, mSize);
	tong2MaTran(nArray,mArray,mSize);
}
void nhapMaTranVuong(int a[][100], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
void xuatMaTran(int a[][100], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<a[i][j]<<"	";
		}
		cout<<endl<<endl;
	}
}
void tong2MaTran(int a[][100], int b[][100], int m)
{
	int c[100][100];
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
		}
	}
	cout<<"Tich 2 ma tran: "<<endl;
	xuatMaTran(c,m);
}