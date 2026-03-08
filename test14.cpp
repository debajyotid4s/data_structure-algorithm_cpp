#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  string s; cin >> s;

  ll lucky_counter = 0;
  
  for(ll i = 0; i < s.size(); i++){
    if(s[i] == '4' or s[i] == '7') lucky_counter++; 
  }
  if(lucky_counter == 7 or lucky_counter == 4) cout << "YES" <<'\n';
  else cout << "NO" <<'\n';
}
