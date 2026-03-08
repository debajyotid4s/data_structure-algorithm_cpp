#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
      ll x, y, n; cin >> x >> y >>n;


      ll test = floor((n - y) / x);
      ll k = test * x + y;
      cout << k <<'\n';
  }
  return 0;
}
