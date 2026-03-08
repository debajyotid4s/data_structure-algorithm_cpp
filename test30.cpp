#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
  	 ll x, y, n; cin >> x >> y >> n;

     ll rem = n % x;

     ll div = n / x;
     if(x * rem + y <= n) cout << (x * div) + y <<'\n';
     else cout << (x * (div - 1)) + y <<'\n';
  }
  return 0;
}
