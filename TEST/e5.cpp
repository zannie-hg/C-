#include <bits/stdc++.h>

using namespace std;
int main()
{
    double cost = 88.67;
    double tax = cost*6.75/100;
    double tip = (cost+tax)*20.0/100;
    cout << "Tong chi phi: " << cost << endl;
    cout << "tong tien thue: " << tax << endl;
    cout << "tong tien boa: " << tip << endl;
    cout << "tong hoa don: " << cost + tax + tip ;
    return 0;
}