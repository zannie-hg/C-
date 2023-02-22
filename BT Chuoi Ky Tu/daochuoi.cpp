#include <bits/stdc++.h>

using namespace std;
string DaoNguoc(string s)
{
    int length = s.length();
    string temp;
    for (int i = length - 1; i >= 0; i--)
    {
        temp.push_back(s[i]);
    }
    return temp;
}
int main()
{
    //     char s[100]="nguyen thi ha giang";
    //     puts(strrev(s));
    string s;
    cin.clear();
    getline(cin, s);
    cout << "Chuoi sau khi dao nguoc la: ";
    cout << DaoNguoc(s);
    return 0;
}

