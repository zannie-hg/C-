#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    char str[100];
    scanf("%c",&c);
    scanf("%s",str);
    int count=0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        if(str[i]==c){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}