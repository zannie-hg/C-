#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        if(str[i]=='3'){
            str[i]='e';
        }
    }
    printf("%s",str);
    return 0;
}