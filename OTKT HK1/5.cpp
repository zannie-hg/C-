#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,k;
    int max=0;
    cin>>n;
    int S=0;
    if(n>0){
        for (int i = 0; i <= n; i++)
        {
            S+=i;
            if(S<=n){
                // cout<<i<<" ";
                if(max<i){
                    max=i;
                }
            }
        }cout<<max;
        
        
    } else {
        cout<<"N";
    }
}