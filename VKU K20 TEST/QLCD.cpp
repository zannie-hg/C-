#include <bits/stdc++.h>
using namespace std;
struct Citizen
{
    string name;
    string gender;
    int yearOfBirth;
    string hometown;
};

int main()
{
    int n;
    cin >> n;
    Citizen citizens[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin >> ws, citizens[i].name);
        getline(cin >> ws, citizens[i].gender);
        cin >> citizens[i].yearOfBirth;
        getline(cin >> ws, citizens[i].hometown);
        
    }
    int currentYear = 2021;
    for (int i = 0; i < n; i++)
    {
        int age = currentYear - citizens[i].yearOfBirth;
        cout << citizens[i].name << endl;
        cout << citizens[i].gender << endl;
        cout << age << endl;
        cout << citizens[i].hometown << endl;
        
    }
    return 0;
}