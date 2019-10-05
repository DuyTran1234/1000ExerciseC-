#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int demHoangHau(int a[][100], int m, int n);
bool kiemTraHoangHau(int a[][100], int m, int n, int x, int row, int col);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"So luong hoang hau: "<<demHoangHau(nArray,mSize,nSize)<<endl;
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
bool kiemTraHoangHau(int a[][100], int m, int n, int x, int row, int col)
{
	int kiemTra = 1;
	for(int i = 0; i < n; i++ )
	{
		if(x < a[row][i])
		{
			kiemTra = 0;
		}
	}
	for(int i = 0; i < m; i++)
	{
		if(x < a[i][col])
		{
			kiemTra = 0;
		}
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i - j == row - col)
			{
				if(x < a[i][j])
				{
					kiemTra = 0;
				}
			}
			if(i + j == row + col)
			{
				if(x < a[i][j])
				{
					kiemTra = 0;
				}
			}
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
int demHoangHau(int a[][100], int m, int n)
{
	int dem = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(kiemTraHoangHau(a,m,n,a[i][j],i,j) == true)
			{
				dem++;
			}
		}
	}
	return dem;
}