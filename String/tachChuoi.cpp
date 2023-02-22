#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    
    for (int i = 0; i < str.length(); i++)
    {
        if(isalpha(str[i])){
            cout<<str[i];
        }
    }
    cout<<endl;
    for (int i = 0; i < str.length(); i++)
    {
        if(isdigit(str[i])){
            cout<<str[i];
        }
    }
    cout<<endl;
    
    
}