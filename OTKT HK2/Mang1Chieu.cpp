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
    int n;
    cin>>n;
    int count=0;
    int A[50];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" "<<endl;
        if(ktsnt(A[i])==true){
            count++;
        }
    }
    cout<<count;
   
    
    return 0;
}