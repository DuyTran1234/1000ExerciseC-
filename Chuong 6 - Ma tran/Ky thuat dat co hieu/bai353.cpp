#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
bool kiemTraGiamDan(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"Giam dan? "<<kiemTraGiamDan(nArray,mSize,nSize)<<endl;
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
bool kiemTraGiamDan(int a[][100], int m, int n)
{
	int kiemTra = 1;
	int col = 0;
	cout<<"Nhap cot can kiem tra: ";
	cin>>col;
	for(int i = 0; i < m - 1; i++)
	{
		if(a[i][col-1] < a[i+1][col-1])
		{
			kiemTra = 0;
		}
	}
	if(kiemTra == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}