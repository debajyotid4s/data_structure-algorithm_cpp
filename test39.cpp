//<---> Everything will be something that you've seen before, Don't panic. <--->
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const int N = 1e9;

void thirtysix(){
  int l, r, d, u; cin >> l >> r >> d >> u;

  int AB = sqrt(l * l + u * u);
  int BC = sqrt(r * r + u * u);
  int CD = sqrt(r * r + d * d);
  int DA = sqrt(l * l + d * d);
    
  int korno1 = l + r;
  int korno2 = d + u;
  if(AB == BC && BC == CD && CD == DA && korno1 == korno2) cout << "YES" << nl;
  else cout << "NO" << nl;
  //cout << AB << ' ' << BC << ' ' << CD << ' ' << DA << ' ' << nl;
}

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    thirtysix();
  }
}
