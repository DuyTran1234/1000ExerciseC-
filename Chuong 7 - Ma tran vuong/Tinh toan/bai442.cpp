#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
int tongChanBien(int a[][100], int m);
bool kiemTraBien(int a[][100], int i, int j, int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	cout<<tongChanBien(nArray,mSize)<<endl;
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
bool kiemTraBien(int a[][100], int i, int j, int m)
{
	if(i == 0 || i == m - 1)
	{
		return true;
	}
	else if(j == 0 || j == m - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int tongChanBien(int a[][100], int m)
{
	int S = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(kiemTraBien(a,i,j,m) == true)
			{
				if(a[i][j] % 2 == 0)
				{
					S = S + a[i][j];
				}
			}
		}
	}
	return S;
}