#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
bool kiemTraTangDan(int a[][100], int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	cout<<kiemTraTangDan(nArray,mSize)<<endl;
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
bool kiemTraTangDan(int a[][100], int m)
{
	int kiemTra = 1;
	for(int i = 0; i < m - 1; i++)
	{
		for(int j = 0; j < m - 1; j++)
		{
			if(i == j)
			{
				if(a[i][j] > a[i+1][j+1])
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
	else{
		return false;
	}
}