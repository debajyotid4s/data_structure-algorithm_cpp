//<---> Everything will be something that you've seen before, Don't panic. <--->
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;
const int N = 1e9;

ll find_xor(ll x){
  if(x < 0) return 0;
  if(x % 4 == 0) return x;
  if(x % 4 == 1) return 1;
  if(x % 4 == 2) return x + 1;
  return 0;
}

int32_t main(){
  fast();
  //int tc; cin >> tc;
  //while(tc--){
    ll l, r; cin >> l >> r;

    ll ans = find_xor(l - 1) ^ find_xor(r);
    cout << ans <<'\n';
  
  //}
}
