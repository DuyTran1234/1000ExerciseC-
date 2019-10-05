#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void sapXepMaTran(int a[][100], int m, int n);
void hoanVi(int &x, int &y);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	sapXepMaTran(nArray,mSize,nSize);
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
int tongMotDong(int a[][100], int m, int n, int index)
{
	int S = 0;
	for(int j = 0; j < n; j++)
	{
		S = S + a[index][j];	
	}	
	return S;
}
void sapXepMaTran(int a[][100], int m, int n)
{
	for(int i = 0; i < m - 1; i++)
	{
		if(tongMotDong(a,m,n,i) > tongMotDong(a,m,n,i+1))
		{
			for(int j = 0; j < n; j++)
			{
				hoanVi(a[i][j], a[i+1][j]);
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