#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
int soAmLonNhat(int a[][100], int m, int n);
int soAmDauTien(int a[][100], int m, int n);

int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<soAmLonNhat(nArray,mSize,nSize)<<endl;
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
int soAmDauTien(int a[][100], int m, int n)
{
	int nResult = a[0][0];
	int kiemTra = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] < 0)
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
int soAmLonNhat(int a[][100], int m, int n)
{
	int nResult = soAmDauTien(a,m,n);
	int kiemTra = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] < 0)
			{
				if(a[i][j] > nResult)
				{
					a[i][j] = nResult;
				}
			}
		}
	}
	return nResult;
}