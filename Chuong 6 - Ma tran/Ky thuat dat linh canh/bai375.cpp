#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int soChanMax(int a[][100], int m, int n);
int soChanDauTien(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<soChanMax(nArray,mSize,nSize)<<endl;
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
int soChanDauTien(int a[][100], int m, int n)
{
	int nResult = 0;
	int kiemTra = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] % 2 == 0)
			{
				nResult = a[i][j];
				kiemTra = 1;
				break;
			}
		}
		if(kiemTra == 1)
		{
			break;
		}
	}
	return nResult;
}
int soChanMax(int a[][100], int m, int n)
{
	int max = soChanDauTien(a,m,n);
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] % 2 == 0)
			{
				if(a[i][j] > max)
				{
					max = a[i][j];
				}
			}
		}
	}
	return max;
}