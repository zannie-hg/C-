#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    int a[50][50];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++){
        cout << a[0][i] << " ";
    }
    for (int i = 1; i < m; i++){
        cout << a[i][n-1] << " ";
    }
    for (int i = n-2; i >= 0; i--){
        cout << a[m-1][i] << " ";
    }
    for (int i = m-2; i > 0; i--){
        cout << a[i][0] << " ";
    }
}