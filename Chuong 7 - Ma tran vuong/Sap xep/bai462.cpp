#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
void hoanVi2Dong(int a[][100], int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	hoanVi2Dong(nArray,mSize);
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
void hoanVi2Dong(int a[][100], int m)
{
	cout<<"Nhap 2 dong x va y can hoan vi: "<<endl;
	int x,y;
	cout<<"x: ";
	cin>>x;
	cout<<"y: ";
	cin>>y;
	for(int j = 0; j < m; j++)
	{
		int temp = a[x][j];
		a[x][j] = a[y][j];
		a[y][j] = temp;
	}
}