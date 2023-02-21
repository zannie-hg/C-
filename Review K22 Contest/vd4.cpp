#include <bits/stdc++.h>
using namespace std;
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap A["<<i<<"]= ";
        cin >> a[i];
    }
}

bool ktsnt(int n)
{
    
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int tongsnt(int a[], int n)
{
    int tong = 0;
    cout<<"Tong cac so nguyen to = ";
    for (int i = 0; i < n; i++){
        if (ktsnt(a[i]) == true)
            tong += a[i];
            return tong;
    }   
    return -1;
}
int main()
{
    int n, a[100];
    cout << "Nhap so nguyen n = ";
    cin >> n;
    while (n < 0)
    {
        cout << "N"<<endl;
        cout<<"Nhap lai (n>0)"<<endl;
        cin >> n;
    }  
    nhapmang(a, n);
    cout << tongsnt(a, n);
    return 0;
}
