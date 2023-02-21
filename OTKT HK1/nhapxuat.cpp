#include <bits/stdc++.h>

using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if((0<a && a<=1000000) && (0<b && b<=1000000)){
        cout<<a+b;
    } else 
    {
        cout<<"N";
    }
    return 0;

}