#include<bits/stdc++.h>
#define ll long long
#define nl '\n'
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;


int32_t main(){
	fast();
	ll tc; cin >> tc;
	while(tc--){
		ll n; cin >> n;
		vector<ll> a(n);
		vector<ll> pre(n+1);
		vector<ll> mx(n+1);
		mx[0] = 0;
		pre[0] = 0;
		for(ll i = 0; i  < n; i++) {
			cin >> a[i];
			pre[i+1] = pre[i] + a[i];
			mx[i+1] = max(mx[i],a[i]);
		}

		ll x = 0;

		for(ll i = 1; i  <= n; i++){
			if(pre[i]-mx[i]==mx[i]) 
				x++;
		}

		cout<<x<<nl;
	}
	return 0;
}
