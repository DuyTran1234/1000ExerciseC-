#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void lietKeToanChan(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	lietKeToanChan(nArray,mSize,nSize);
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
void lietKeToanChan(int a[][100], int m, int n)
{
	cout<<"Cac dong chua toan so chan: "<<endl;
	for(int i = 0; i < m; i++)
	{
		int kiemTra = 1;
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] % 2 != 0)
			{
				kiemTra = 0;
			}
		}
		if(kiemTra == 1)
		{
			cout<<i<<endl;
		}
	}
}