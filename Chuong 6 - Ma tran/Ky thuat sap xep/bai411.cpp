#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void hoanVi(int &x, int &y);
void chanGiamDan(int a[][100], int m, int n);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	cout<<"Cac gia tri chan giam dan: "<<endl;
	chanGiamDan(nArray,mSize,nSize);
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
void chanGiamDan(int a[][100], int m, int n)
{
	int b[100];
	int dem = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(a[i][j] % 2 == 0)
			{
				b[dem] = a[i][j];
				dem++;
			}
		}
	}
	for(int i = 0; i < dem - 1; i++)
	{
		for(int j = i + 1; j < dem; j++)
		{
			hoanVi(b[i], b[j]);
		}
	}
	for(int i = 0; i < dem; i++)
	{
		cout<<b[i]<<"	";
	}
}
void hoanVi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}