#include <bits/stdc++.h>

using namespace std;
int main()
{
    char s[255];
    int count=0;
    int i,j,m;
    scanf("%s",s);
    for (int i = 0; i < strlen(s); i++)
    {
       for (int j = 0; j < i; j++)
       {
         if(s[i]==s[j]){
            count++;
            // break;
            if(count%2==0){
            m=count;
        }
        }
        // hong bic lam
       }
    //    if(i==j){
    //     s[count++] = s[i];

    //    }
    }cout<<count<<" ";
    
    
}