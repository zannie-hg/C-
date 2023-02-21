#include <bits/stdc++.h>

using namespace std;
int main()
{
    int soLuongMatHang;
    int tongChiPhi;
    cin>>soLuongMatHang;
   
    tongChiPhi=soLuongMatHang*100;
   
    if(soLuongMatHang>0 && soLuongMatHang
    <10000){
        if(tongChiPhi>1000&&tongChiPhi<=2000){
        cout<<tongChiPhi-tongChiPhi*10/100;
            
        }
        if( tongChiPhi>2000){
        cout<<tongChiPhi-tongChiPhi*15/100;    
            
        }
    } else{
        cout<<"N";
    }
}