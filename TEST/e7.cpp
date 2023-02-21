#include <bits/stdc++.h>
using namespace std;
double getLength(){
    double length;
    cout<<"Length: ";
    cin>>length;
    return length;
}
double getWidth(){
    double width;
    cout<<"Width: ";
    cin>>width;
    return width;
}
double getArea(double& a, double& b){
    return a*b;
}
void display(double& a, double& b, double& c){
    cout<<"_________________________"<<endl;
    cout<<"Length: "<<a<<'\n'<<"Width: "<<b<<'\n'<<"Area: "<<c<<'\n';
}
int main()
{
    
   double length,width, area;
   length=getLength();
   width=getWidth();
   area=getArea(length,width);
   display(length,width,area);
    
    return 0;
}