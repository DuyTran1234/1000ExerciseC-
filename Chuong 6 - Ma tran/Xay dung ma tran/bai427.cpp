#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void xayDungMaTran(int a[][100], int b[][100], int m, int n);
int timMaxDongCot(int a[][100], int dong, int cot, int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	int bArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	xayDungMaTran(nArray, bArray, mSize, nSize);
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
			b[i][j] = timMaxDongCot(a,i,j,m,n);
		}
	}
}
int timMaxDongCot(int a[][100], int dong, int cot, int m, int n)
{
	int max1 = 0;
	int max2 = 0;
	for(int j = 0; j < n; j++)
	{
		if(a[dong][j] > max1)
		{
			max1 = a[dong][j];
		}
	}
	for(int i = 0; i < m; i++)
	{
		if(a[i][cot] > max2)
		{
			max2 = a[i][cot];
		}
	}
	return max1 + max2;
}