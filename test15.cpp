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

    int operation = 0;
    for(int i = 0; i < n - 1; i++){
      if((a[i] % 2 == 1 and a[i + 1] % 2 == 1) or (a[i] % 2 == 0 and a[i + 1] % 2 == 0)){
        operation++;
      }
    }
    cout << operation <<'\n';
  }
  return 0;
}
