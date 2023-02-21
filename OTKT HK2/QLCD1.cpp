#include <bits/stdc++.h>
struct CongDan{
    char name[50];
    char gender[50];
    char address[50];
    
    long birthday;
    // time_t t = time(0);
    // struct tm *Now = localtime(&t);
    // long namhientai = 2021;
    // int tuoi;
};
void Nhap(CongDan sv[], int n ){
    for(int i=1; i<=n; i++){
       
        fflush(stdin);
        gets(sv[i].name);
       
        fflush(stdin);//xoa bo dem
        gets(sv[i].gender);
        
        scanf("%ld", &sv[i].birthday); 
        // tuoi = namhientai - &sv[i].birthday;
        fflush(stdin);//xoa bo dem
        gets(sv[i].address);
        
        
    }
}
void Xuat(CongDan sv[], int n){
    
    for(int i=1; i<=n; i++){
        printf("%s\n%s\n%ld\n%s\n",sv[i].name,sv[i].gender,sv[i].birthday,sv[i].address);
    }
}
int main(){ 
    CongDan sv[100];// khai bao mang sv kieu SinhVien co toi da 100 phan tu
    int n; // khai bao so sinh vien
    scanf("%d",&n);
    Nhap(sv,n);
    Xuat(sv,n);
}