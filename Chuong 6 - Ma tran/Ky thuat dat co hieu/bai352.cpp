#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
bool kiemTraTangDan(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"Co tang dan? "<<kiemTraTangDan(nArray,mSize,nSize)<<endl;
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
bool kiemTraTangDan(int a[][100], int m, int n)
{
	int kiemTra = 1;
	int row = 0;
	cout<<"Nhap vao hang can kiem tra: ";
	cin>>row;
	for(int i = 0; i < n - 1; i++)
	{
		if(a[row-1][i] > a[row-1][i+1])
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