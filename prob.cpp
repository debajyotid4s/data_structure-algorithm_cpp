#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define test() int t; cin >> t; while(t--)
#define ll long long

using namespace std;

int32_t main(){

   fast();
   int tc; cin >> tc;
   while(tc--){
    string s; cin >> s;
    string t = s;
    bool k = false;
    for(int i = 0; i < s.size() - 1; i++){
      if(s[i] != s[i+1]){
         swap(s[i], s[i+1]);
      }
    }
    if(s == t) {
      cout << "NO" <<'\n';
    }
    else {
      cout << "YES" <<'\n';
      cout << s <<'\n';
    }
  }
  
  return 0;
}
