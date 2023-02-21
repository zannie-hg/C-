#include <bits/stdc++.h>

using namespace std;
int main()
{
    char s[100]="ho chi minh";
    char m;
    scanf("%c",&m);
    int count=0;
    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i]==m)
        {
            count++;
        }
    }
    cout<<count;
    
}