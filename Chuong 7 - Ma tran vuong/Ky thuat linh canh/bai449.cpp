#include <iostream>
using namespace std;
void nhapMaTranVuong(int a[][100], int &m);
void xuatMaTran(int a[][100], int m);
void maTranVuong(int a[][100], int b[][100], int m, int &k);
int main()
{
	int nArray[100][100];
	int bArray[100][100];
	int mSize = 0;
	int bSize = 0;
	nhapMaTranVuong(nArray,mSize);
	xuatMaTran(nArray,mSize);
	maTranVuong(nArray, bArray, mSize, bSize);
	cout<<"Ma tran B: "<<endl;
	xuatMaTran(bArray,bSize);
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
void maTranVuong(int a[][100], int b[][100], int m, int &k)
{
	cout<<"Nhap kich thuoc k cua ma tran B: ";
	cin>>k;
	int c[1000];
	int dem = 0;
	int count = 0;
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m; j++)
		{
			c[dem] = a[i][j];
			dem++;
		}
	}
	for(int i = 0; i < dem - 1; i++)
	{
		for(int j = i + 1; j < dem; j++)
		{
			if(c[i] < c[j])
			{
				int temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
	for(int i = 0; i < k; i++)
	{
		for(int j = 0; j < k; j++)
		{
			b[i][j] = c[count];
			count++;
		}
	}
}