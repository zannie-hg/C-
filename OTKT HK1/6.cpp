#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[50];
    int count=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
        if(max<a[i]){
            max=a[i];
        }
        
    }
    cout<<endl;
    cout<<max<<endl;
     for (int i = 0; i < n; i++)
    {
       if(max==a[i]){
            count++;
        }
        
    }
    
    cout<<count;
    
    return 0;
}