#include "bits/stdc++.h"
#define mt make_tuple
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    int n, x, diff, del; cin >> n >> x;
    int a[n + 1];
    a[0] = 0;
    for(int i = 1; i <= n; i++) cin >> a[i];
    int mv = INT_MIN;
    
    if(n == 1) mv = a[1];
    else
    {
        for(int i = 0; i <= n - 1; i++){
            diff = (a[i + 1] - a[i]);
            mv = max(diff, mv);
            // cout<<"h="<<diff<<",";
        }
    }
    del = abs(a[n] - x) * 2;
    if(del <= mv) cout << mv <<'\n';
    else cout << del <<'\n';
    
  }

  return 0;
}
