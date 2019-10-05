#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
int soLuongNguyenTo(int a[][100], int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	cout<<soLuongNguyenTo(nArray,mSize)<<endl;
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
int soLuongNguyenTo(int a[][100], int m)
{
	int count = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			int dem = 0;
			for(int x = 1; x <= a[i][j]; x++)
			{
				if(a[i][j] % x == 0)
				{
					dem++;
				}
			}
			if(dem == 2)
			{
				count++;
			}
		}
	}
	return count;
}