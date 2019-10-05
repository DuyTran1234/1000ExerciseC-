#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
void hoanVi(int &x, int &y);
int tongDong(int a[][100], int i, int m);
void hoanViDong(int a[][100], int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	hoanViDong(nArray,mSize);
	cout<<endl;
	xuatMaTran(nArray,mSize);
}
void nhapMaTranVuong(int a[][100], int &m)
{
	cout<<"Nhap kich thuoc ma tran vuong: ";
	cin>>m;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
		}
	}
}
void xuatMaTran(int a[][100], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout<<a[i][j]<<"	";
		}
		cout<<endl<<endl;
	}
}
void hoanViDong(int a[][100], int m)
{
	for(int i = 0; i < m - 1; i++)
	{
		for(int j = i + 1; j < m; j++)
		{
			if(tongDong(a,i,m) > tongDong(a,j,m))
			{
				for(int k = 0; k < m; k++)
				{
					hoanVi(a[i][k], a[j][k]);
				}
			}
		}
	}
}
int tongDong(int a[][100], int i, int m)
{
	int S = 0;
	for(int j = 0; j < m; j++)
	{
		S = S + a[i][j];
	}
	return S;
}
void hoanVi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}