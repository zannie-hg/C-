#include <bits/stdc++.h>
using namespace std;

int main()
{
    char n[100];
    int i = 0;
    // int digit;
    cin >> n;
    // while (n > 0)
    // {
    //     digit = n % 10;
    //     n = n / 10;
    //     if (digit % 2 != 0)
    //     {
    //         cout << digit << " ";
    //     }
    // }
    //   for (int i = 0; i < strlen(n); i++)
    //   {
    //     if(n[i]%2!=0){
    //         cout<<n[i]<<" ";
    //     }
    //   }

    while (i < strlen(n))
    {
        // if (strlen(n) % 2 == 0)
        // {
        //     cout << "N";
        //     break;
        // }
            i++;
            if (n[i] % 2 != 0)
            {
                cout << n[i] << " ";
            }
        

       
    } 
    return 0;
}
