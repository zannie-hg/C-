#include <bits/stdc++.h>

using namespace std;
int main()
{
    int trongLuong;
    int tongTien =0;
    cin>>trongLuong;
    if(trongLuong>0&&trongLuong<=50){
        cout<<trongLuong*750000/50;
    } else {
        cout<<"N";
    }
}