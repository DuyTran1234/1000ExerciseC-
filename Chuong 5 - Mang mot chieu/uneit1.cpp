#include <iostream>
#include <string.h>
using namespace std;
void chuanHoa(char a[], int n);
int demSoTu(char a[],int n);
void tachHo(char a[],int n);
void tachTen(char a[],int n);
void tanSuat(char a[],int n);
int main()
{
    char str[100];
    int nSize;
    cout<<"Nhap xau ki tu: ";
    cin.getline(str,99);
    nSize = strlen(str);
    chuanHoa(str,nSize);
    tachHo(str,nSize);
    tachTen(str,nSize);
    tanSuat(str,nSize);
}
void chuanHoa(char a[], int n)
{
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        static_cast<int>(a[i]);
        if(i == 0 && a[i] == 32)
        {
            index = i;
            while(a[i] == 32 )
            {
                for(int j = index; j < n; j++)
                {
                      a[j] = a[j+1];
                }
            }
        }
        else if(i != 0 && a[i] == 32)
        {
            if(a[i+1] == 32 )
            {
                index = i + 1;
                while(a[i+1] == 32)
                {
                    for(int j = index; j < n;j++)
                    {
                        a[j] = a[j+1];
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        static_cast<char>(a[i]);
        cout<<a[i];
    }
    cout<<endl;
}
int demSoTu(char a[],int n)
{
    int dem = 0;
    for(int i = 0; i < n; i++)
    {
        static_cast<int>(a[i]);
        if(a[i] == 32)
        {
            dem++;

        }
    }
    return dem + 1;
}
void tachHo(char a[],int n)
{
    int index = 0;
    cout<<"Ho: ";
    for(int i = 0; i < n; i++)
    {
        cout<<a[i];
        if(static_cast<int>(a[i]) == 32)
        {
            break;
        }
    }
    cout<<endl;
}
void tachTen(char a[],int n)
{
    int dem = 0;
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        if(static_cast<int>(a[i]) == 32)
        {
            dem++;
            if(dem == demSoTu(a,n) - 1)
            {
                index = i + 1;
            }
        }
    }
    cout<<"Ten: ";
    for(int i = index; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
}
void tanSuat(char a[],int n)
{
    int b[100] = {0};
    int index = 0;
    for(int i = 0; i < n; i++)
    {
        index = static_cast<int>(a[i]);
        for(int j = 0; j < n; j++)
        {
            if(static_cast<int>(a[j]) == index)
            {
                b[i]++;
            }
        }
    }
    for(int i = 0; i < n ; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i] == a[j] && i == j)
            {
                cout<<a[i]<<" xuat hien: "<<b[i]<<" lan"<<endl;
            }
            else if(a[i] == a[j] && i != j)
            {
                break;
            }
        }
    }
}
