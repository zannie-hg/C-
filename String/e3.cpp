#include <bits/stdc++.h>

using namespace std;
int main()
{
   string a,b;
   int count = 0;
   getline(cin,a);
   getline(cin,b);
   int i,j;
   for (int i = 0; i < a.length(); i++)
   {
    for (int j = 0; j < b.length(); j++)
    {
        if((a[i]==b[j]))
        {
            count++;
            break;
        }
    }
    
   }
    cout<<count;
   
    
}