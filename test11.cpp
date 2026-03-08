#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    bool available = false;
    for(int i = 0; i < n; i++){
      for(int j = 1; j < n; j++){
        if(std::gcd(a[i], a[j]) <= 2) available = true;
      }
    }

    if(available) cout << "Yes" <<'\n';
    else cout << "No" <<'\n';

  }
  return 0;
}
