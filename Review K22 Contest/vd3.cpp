#include <bits/stdc++.h>

using namespace std;
int main()
{
    int soNguyenDuong;
    int tong=0;
    cin>>soNguyenDuong;
   if(soNguyenDuong<0){
    cout<<"N";
   }
   if(soNguyenDuong>=0){
    for (int i = 0; i <= soNguyenDuong; i++)
    {
        if(i%4==0&&i%5!=0){
            tong+=i;
        }
    }
        cout<<tong;


   }
    
}