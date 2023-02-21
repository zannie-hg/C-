#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int a[100];
    int max = a[0];
    cin >> n;
    int m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
       
    }
    cin>>m;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>m){
        cout<<a[i]<<endl;

        }
    }
    
    
   
}
