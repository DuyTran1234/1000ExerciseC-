#include <iostream>
using namespace std;
void nhapMang(int a[][100], int &m, int &n);
void xuatMang(int a[][100], int m, int n);
void hoanVi(int &x, int &y);
bool kiemTraBien(int i, int j, int m, int n);
void sapXepBien(int a[][100], int b[1000], int m, int n);
void ganBienVaoMang(int a[][100], int b[1000], int m, int n, int &dem);
void sapXepMangPhu(int b[1000], int dem);
int main() {
	int mSize;
	int nSize;
	int nArray[100][100];
	int bArray[1000];
	int bSize = 0;
	nhapMang(nArray,mSize,nSize);
	cout<<endl;
	xuatMang(nArray,mSize,nSize);
	ganBienVaoMang(nArray,bArray,mSize,nSize,bSize);
	sapXepMangPhu(bArray,bSize);
	sapXepBien(nArray,bArray,mSize,nSize);
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
void ganBienVaoMang(int a[][100], int b[1000], int m, int n, int &dem)
{
	for(int j = 0; j < n; j++)
	{
		b[dem] = a[0][j];
		dem++;
	}
	for(int i = 1; i < m; i++)
	{
		b[dem] = a[i][n-1];
		dem++;
	}
	for(int j = n - 2; j >= 0; j--)
	{
		b[dem] = a[m-1][j];
		dem++;
	}
	for(int i = m - 2; i >= 1; i--)
	{
		b[dem] = a[i][0];
		dem++;
	}
}
void sapXepBien(int a[][100], int b[1000], int m, int n)
{
	int dem = 0;
	for(int j = 0; j < n; j++)
	{
		a[0][j] = b[dem];
		dem++;	
	}
	for(int i = 1; i < m; i++)
	{
		a[i][n-1] = b[dem];
		dem++;
		
	}
	for(int j = n - 2; j >= 0; j--)
	{
		a[m-1][j] = b[dem];
		dem++;
	}
	for(int i = m - 2; i >= 1; i--)
	{
		a[i][0] = b[dem];
		dem++;
	}
}
void sapXepMangPhu(int b[1000], int dem)
{
	for(int i = 0; i < dem - 1; i++)
	{
		for(int j = i + 1; j < dem; j++)
		{
			if(b[i] > b[j])
			{
				hoanVi(b[i], b[j]);
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