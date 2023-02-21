#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    int digit;
    int count=1;
    int max=0;
    cin>>n;
    if(n<1000 && n>0){
        while (n!=0)
        {
            digit=n%10;
            // res+=digit;
            n=n/10;
        //    cout<<digit++<<" ";
       if(digit == max)
      count++;
        if(digit>max){
            max=digit;
        }
        }
        cout<<max<<" "<<count;
       
        

    } else if(n==0 || n>=1000)
    {
        cout<<"N";
    }
    return 0;
}