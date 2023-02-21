#include <bits/stdc++.h>

using namespace std;
bool ktsnt(int n)
{
    
    if (n < 2)
        return 0;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
int main()
{
    int digit;
    int n;
    cin>>n;
    if(ktsnt(n)==true){
        digit=n%10;
        // cout<<digit;
        if(ktsnt(digit)==true){
            cout<<"YES";
        } else{
            cout<<"NO";
        }
        
    } else  if(ktsnt(n)==false){

        cout<<"NO";
    }


}