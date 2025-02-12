#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  	fast();
  	int t; cin >> t;
  	while(t--) {
  		int n; cin >> n;
  		int a[n];

  		for(int i = 0; i < n; i++) {
  			cin >> a[i];
  		}

  		for(int mask = 0; mask < (1 << n); mask++) {
  			for(int j = 0; j < n; j++) {
  				if(mask & (1 << j)) {
  					cout << a[j] << ' ';
  				}
  			}
  			cout << '\n';
  		}
  	}
	return 0;
}