//<---> Everything will be something that you've seen before, Don't panic. <--->
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const ll N = 1000000003;

void thirtysix(){
  ll x;
  cin >> x;

  for (ll y = 1; y < x; y++) {
    ll emnei = y ^ x;
      if(((emnei + y) > x) and ((emnei + x) > y) and ((emnei + y) > x)){
        cout << y << nl;
        return;
      }
        //cout << emnei << nl;
  }

  cout << -1 << nl;
}

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    thirtysix();
  }
}
