#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
int tongCot(int a[][100], int j, int m);
int tongDong(int a[][100], int i, int m);
bool kiemTraMaPhuong(int a[][100], int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	cout<<kiemTraMaPhuong(nArray,mSize)<<endl;
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
bool kiemTraMaPhuong(int a[][100], int m)
{
	int kiemTra = 1;
	int CheoChinh = 0;
	int CheoPhu = 0;
	int Cot = 0;
	int Dong = 0;
	for(int i = 0; i < m - 1; i++)
	{
		if(tongDong(a,i,m) != tongDong(a,i+1,m))
		{
			kiemTra = 0;			
		}
		Dong = tongDong(a,i,m);
	}
	for(int j = 0; j < m - 1; j++)
	{
		if(tongCot(a,j,m) != tongCot(a,j+1,m))
		{
			kiemTra = 0;
		}
		Cot = tongCot(a,j,m);
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(i == j)
			{
				CheoChinh = CheoChinh + a[i][j];
			}
			
		}
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(i + j == m - 1)
			{
				CheoPhu = CheoPhu + a[i][j];
			}
			
		}
	}
	if(CheoChinh != CheoPhu || Dong != Cot)
	{
		kiemTra = 0;
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
int tongDong(int a[][100], int i, int m)
{
	int S = 0;
	for(int j = 0; j < m; j++)
	{
		S = S + a[i][j];
	}
	return S;
}
int tongCot(int a[][100], int j, int m)
{
	int S = 0;
	for(int i = 0; i < m; i++)
	{
		S = S + a[i][j];
	}
	return S;
}
