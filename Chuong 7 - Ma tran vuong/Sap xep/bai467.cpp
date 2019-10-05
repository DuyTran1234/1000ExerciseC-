#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
void sapXepTamGiacDuoi(int a[][100], int m);
void hoanVi(int &x, int &y);

int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	sapXepTamGiacDuoi(nArray,mSize);
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
void sapXepTamGiacDuoi(int a[][100], int m)
{
	int u = 2;
	
	int y = 1;
	for(int j = 0; j < m; j++)
	{
		for(int i = y; i < m - 1; i++)
		{
			if(i != j)
			{
				for(int k = i + 1; k < m; k++)
				{
					if(k != j)
					{
						if(a[i][j] < a[k][j])
						{
							hoanVi(a[i][j], a[k][j]);
						}
					}
				}
			}
		}
		y++;
	}
	for(int i = 2; i < m; i++)
	{
		for(int j = 0; j < u - 1; j++)
		{
			if(i != j)
			{
				for(int k = j + 1; k < u; k++)
				{
					if(k != j)
					{
						if(a[i][j] < a[i][k])
						{
							hoanVi(a[i][j], a[i][k]);
						}
					}
				}
			}
		}
		u++;
	}
	
}
void hoanVi(int &x, int &y)
{
	int temp = x;
	x = y;
	y = temp;
}