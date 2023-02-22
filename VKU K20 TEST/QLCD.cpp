#include <bits/stdc++.h>
using namespace std;
struct Citizin
{
    string name;
    string gender;
    int yearOfBirth;
    string hometown;
};
int currentYear = 2021;
int main()
{
    int n;
    cin >> n;
    Citizin citizin[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin >> ws, citizin[i].name);
        getline(cin >> ws, citizin[i].gender);
        cin >> citizin[i].yearOfBirth;

        getline(cin >> ws, citizin[i].hometown);
    }
    for (int i = 0; i < n; i++)
    {
        int age = currentYear - citizin[i].yearOfBirth;
        cout << citizin[i].name<<endl;
        cout << citizin[i].gender<<endl;
        cout << age<<endl;
        cout<<citizin[i].hometown<<endl;
    }
    return 0;
}