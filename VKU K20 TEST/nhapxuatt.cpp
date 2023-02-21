#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, digit;
    int res = 0;
    cin >> n;
    // if (n < 0)
    // {
    //     cout << "N";
    // }
    // else
    // {
    //     while (n>0)
    //     {
    //         digit = n % 10;
    //        res=res*10+digit;
    //        n=n/10;
    //     }
    //     cout << res;
    // }
    if(n>=10 && n<=99){

        while (n!=0)
        {
            digit = n % 10;
           res=res*10+digit;
           n=n/10;
        }
        cout << res;
    } else {
        cout << "N";
    }
    return 0;
}