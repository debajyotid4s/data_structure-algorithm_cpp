#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int n; cin >> n;
  int p; cin >> p;
  int a[p]; for(int i = 0; i < p; i++) cin >> a[i];
  int q; cin >> q;
  int b[q]; for(int i = 0; i < q; i++) cin >> b[q];

  bool ok = false;
  int x = max(p, q);
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < x; j++){
      if(i == a[j] or i == b[j]){
        ok = true;
        break;
      }
      else ok = false;
    }
  }

  if(ok) cout << "I become the guy." <<'\n';
  else cout << "Oh, my keyboard!" <<'\n';
  cerr << "Execution time: " << 1000.f * clock() / CLOCKS_PER_SEC << " ms." << endl;
}
