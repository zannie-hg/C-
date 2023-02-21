#include <bits/stdc++.h>


using namespace std;

int main(){
    // char chr[5] = {'\n', '2', 1, ' ', ','};
    // for(int i = 0; i < 5; i++){
    //     if(isspace(chr[i])) {
    //             cout <<"Vi tri "<< i <<" la khoang trang" << endl;
    //     }
    // }
    char str[100]="ha giang de thuong dep gai";
    int count=0;
    // scanf("%s",str);
    for (int i = 0; i < strlen(str); i++)
    {
        if(isspace(str[i])){
            count++;
            
        }
    }cout<<count;
    
    
    
}