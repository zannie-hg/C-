#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, digit;
    int max=0;
    int count=1;
    cin>>n;
    if(n<1000 && n>0){
        while (n!=0)
        {
            digit=n%10;
            n=n/10;
           
            if(digit==max)
            {
                count++;
            } if(digit>max)
            {
                max=digit;
            }
        }
        cout<<max<<" "<<count;
        
    } else {
        cout<<"N";
    }
    return 0;
}