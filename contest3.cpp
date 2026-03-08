#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
    int n; cin >> n;
    int m[n], s[n];
    int diff = 0;
    for(int i = 0; i < n; i++) cin >> m[i];
    for(int i = 0; i < n; i++) cin >> s[i];
    
    
    cout << abs(diff - s[n - 1]) <<'\n';
  }
  return 0;
}
