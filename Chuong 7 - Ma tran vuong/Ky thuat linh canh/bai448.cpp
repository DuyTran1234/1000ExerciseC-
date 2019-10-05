#include <iostream>
#include <cmath>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
void haiGiaTriGanNhau(int a[][100], int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	haiGiaTriGanNhau(nArray,mSize);
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
void haiGiaTriGanNhau(int a[][100], int m)
{
	int min = abs(a[0][0] - a[0][1]);\
	int index1 = 0;
	int index2 = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			for(int k = 0; k < m; k++)
			{
				if(abs(a[i][j] - a[i][k]) < min && abs(a[i][j] - a[i][k]) > 0)
				{
					min = abs(a[i][j] - a[i][k]);
					index1 = a[i][j];
					index2 = a[i][k];
				}
			}
		}
	}
	cout<<"2 gia tri gan nhau nhat: "<<index1<<" va "<<index2<<endl;
}