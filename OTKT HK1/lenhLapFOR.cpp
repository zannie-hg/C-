#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = 0;
    if (n > 0)
    {
      for (int i = 1; i <= n; i++)
      {
        if(n%i==0 && i%2!=0){
            if(max<i){
                max=i;
            }
        }
      }
      cout<<max;
      
    }
    else
    {
        cout << "N";
    }
}
// #include <bits/stdc++.h>

// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int max = 0;
//     if (n > 0)
//     {
//         for (int i = 1; i <= n; i++)
//         {
//             if (n % i == 0 && i % 2 != 0)
//             {
//                 // cout<<i<<" ";
//                 if (i > max)
//                 {
//                     max = i;
//                 }
//             }
//         }
//         cout << max;
//     }
//     else
//     {
//         cout << "N";
//     }
// }