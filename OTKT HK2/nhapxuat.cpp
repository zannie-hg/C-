#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int digit;
    int S=0;
    cin>>n;
    if(n>0){
        while (n!=0)
        {
            digit=n%10;
            S+=digit;
            n=n/10;
        }
        cout<<S;
        
    } else {
        cout<<"N";
    }
    return 0;
}