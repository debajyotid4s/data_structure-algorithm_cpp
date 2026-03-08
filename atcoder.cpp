//<---> Everything will be something that you've seen before, Don't panic. <--->
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;
const int N = 1e9;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    string s;
    cin >> s;
    int x = s.size();
    bool ok = false;
    for(int i = 0; i < s.size() - 1; i++){
      if(s[i] == s[i + 1]){
        ok = true;
        break;
       }
    }
    if(ok) cout << 1 <<'\n';
    else cout << x <<'\n';
  }
}
