#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void lietKe(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	lietKe(nArray,mSize,nSize);
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
void lietKe(int a[][100], int m, int n)
{
	cout<<"Cac dong thoa man diet kien: "<<endl;
	for(int i = 0; i < m; i++)
	{
		int kiemTra1 = 0;
		int kiemTra2 = 0;
		int kiemTra3 = 0;
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] < 0)
			{
				kiemTra1 = 1;
			}
			else if(a[i][j] > 0)
			{
				kiemTra2 = 1;
			}
			else if(a[i][j] == 0)
			{
				kiemTra3 = 1;
			}
		}
		if(kiemTra1 + kiemTra2 + kiemTra3 == 3)
		{
			cout<<i<<endl;
		}
	}
}