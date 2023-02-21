#include <bits/stdc++.h>

using namespace std;
int main()

{

    int n = 0;
    int max = 0;
    int i = 1;
    int S = 0;
    cin >> n;
    if (n > 0)
    {
        // vonglapFor
        // for (int i = 1; i <= n; i++)
        // {

        //     S += i;
        //     if (S <= n)
        //     {
        //         // cout<<i<<" ";
        //         if (max < i)
        //         {
        //             max = i;
        //         }
        //     }
        // }
        // vonglapWhile

        while (i <= n)
        {
            i++;
            S += i;
            if (S <= n)
            {
                // cout<<i<<" ";
                if (max < i)
                {
                    max = i;
                }
            }
        }

        cout << max << " ";
    }
    else
    {
        cout << "N";
    }
}