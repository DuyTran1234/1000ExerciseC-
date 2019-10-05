#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
void hoanVi(int &x, int &y);
void sapXepMaTran(int a[][100], int m);

int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	sapXepMaTran(nArray,mSize);
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
void sapXepMaTran(int a[][100], int m)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m - 1; j++)
		{
			for(int k = j + 1; k < m; k++)
			{
				if(a[i][j] > a[i][k])
				{
					hoanVi(a[i][j], a[i][k]);
				}
			}
		}
	}
	for(int j = 0; j < m; j++)
	{
		for(int i = 0; i < m - 1; i++)
		{
			for(int k = i + 1; k < m; k++)
			{
				if(a[i][j] > a[k][j])
				{
					hoanVi(a[i][j], a[k][j]);
				}
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