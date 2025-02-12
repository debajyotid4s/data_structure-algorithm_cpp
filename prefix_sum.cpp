//Hare Krishna <---> Everything will be something that you've seen before, Don't panic.
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int n, q; cin >> n;
  int a[n]; for(int i = 1; i <= n; i++) cin >> a[i];
  int prefix_sum[n];
  
  for(int i = 1; i <= n; i++){
  	prefix_sum[i] = prefix_sum[i - 1] + a[i];
  }
  cin >> q;
  while(q--){
  	int l, r;
  	cin >> l >> r;
  	l++, r++;
  	ll sum = prefix_sum[r] - prefix_sum[l - 1];
  	cout << sum <<'\n';
  }
}
