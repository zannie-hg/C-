#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int A[50];
  int count=0;
  for (int i = 0; i < n; i++)
  {
    cin>>A[i];
  
  }int max=A[0];
  for (int i = 0; i < n; i++)
  {
    cout<<A[i]<<" ";
    if(max<A[i]){
      max=A[i];
    }
  }
  cout<<endl;
  cout<<max<<endl;
  for (int i = 0; i < n; i++)
  {
    if(max==A[i]){
      count++;
    }
  }
  cout<<count;
  
  return 0;
  
}