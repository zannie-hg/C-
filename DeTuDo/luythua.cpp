#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x;
    long long n;
    long long resxn;
    double res;
    cin >> x >> n;
    resxn = pow(x, n);
    res=resxn%10000;
    cout<<res;
}