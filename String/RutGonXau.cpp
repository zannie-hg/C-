#include <bits/stdc++.h>
using namespace std;
void solve() {
  string s;
  cin >> s;
  int len = s.size();
  string ans =s.substr(0,1);
//   cout<<ans;
  for (int i = 1; i <= len; i++) {
    if (len % i == 0){
      // string c = ans; 
      // int d = 1;
      // while (c.size() < len && d*ans.size() < len) {
      //   c += ans;
      //   d++;
      // }
      // if (c == s) {
      //   cout << d << ans << endl;
      //   return;
      // }



      
    } 
    ans += s.substr(i,1);
  }
  
}
 
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  solve();
  return 0;
}