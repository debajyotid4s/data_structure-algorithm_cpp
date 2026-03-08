#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  //int tc; cin >> tc;
  //while(tc--){
  	int n, k; cin >> n;
  	int a[n];
    bool foundNumb = false;
    for(int i = 0; i < n; i++) cin >> a[i];

  	if(n == 1){
      cout << abs(a[0]) <<'\n';
      return 0;
    }
    
    for(int i = 0; i < n; i++){
      if(a[i] == 0) {
        foundNumb = true;
        break;
      }
    }
    if(foundNumb) cout << 0 <<'\n';
    else {
        sort(a, a + n);
        for(int i = 0; i < n; i++){
          if(a[i] > 0) {
          k = a[i];
          break;
      }
    }
    cout << k <<'\n';
  }

  return 0;

  //}
}
