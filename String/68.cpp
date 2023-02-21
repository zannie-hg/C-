#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100];
    char c;
    int len = strlen(str);
    int index=-1;
    scanf("%c",&c);
    scanf("%s",str);
    for (int i = 0; i < len; i++)
    {
        if(c==str[i]){
            index=i;
        }
    }
    printf("%d",index);
    
    return 0;
}