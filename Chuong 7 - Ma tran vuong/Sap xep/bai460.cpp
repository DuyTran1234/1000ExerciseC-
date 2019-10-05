#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
void sapXepCheoChinh(int a[][100], int m);
int main()
{
	int nArray[100][100];
	int mSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	sapXepCheoChinh(nArray,mSize);
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
void sapXepCheoChinh(int a[][100], int m)
{
	int b[1000];
	int dem = 0;
	int count = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(i == j)
			{
				b[dem] = a[i][j];
				dem++;
			}
		}
	}
	for(int i = 0; i < dem - 1; i++)
	{
		for(int j = i + 1; j < dem; j++)
		{
			if(b[i] > b[j])
			{
				int temp = b[i];
				b[i] = b[j];
				b[j]= temp;
			}
		}
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(i == j)
			{
				a[i][j] = b[count];
				count++;
			}
		}
	}
}