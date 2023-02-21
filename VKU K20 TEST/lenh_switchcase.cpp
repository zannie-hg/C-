#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    // if(n<=10 && n>=1){
    //      if(n==9||n==10){
    //     cout<<"Xep loai A";
    // } else if (n==7||n==8)
    // {
    //     cout<<"Xep loai B";
    // } else if (n==5||n==6)
    // {
    //     cout<<"Xep loai C";
    // } else
    // {
    //     cout<<"Xep loai D";
    // }
    // } else {
    //     cout<<"N";
    // }
    if(n>=1 && n<=10){

    }
    switch (n )
    {
    case 9:
        cout << "Xep loai A";
        break;
    case 10:
        cout << "Xep loai A";
        break;
    case 7:
        cout << "Xep loai B";
        break;
    case 8:
        cout << "Xep loai B";
        break;
    case 5:
        cout << "Xep loai C";
        break;
    case 6:
        cout << "Xep loai C";
        break;
    case 1:
        cout << "Xep loai D";
        break;
    case 2:
        cout << "Xep loai D";
        break;
    case 3:
        cout << "Xep loai D";
        break;
    case 4:
        cout << "Xep loai D";
        break;

    default:
        cout << "N";
        break;
    }

    return 0;
}