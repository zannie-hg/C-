#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int a[100][100];
    int sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            //   cout.width(5);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j){
                if(a[i][j]%5==0&& a[i][j]%2==0){
                    sum+=a[i][j];
                }
            }
        }
        
    }
    cout<<sum;
    return 0;
}
