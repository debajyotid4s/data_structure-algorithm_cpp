
#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

ll solve(ll n){
	if(n == 1) return 0;
	else{
		return 1 + solve(n / 2);
	}
}

int32_t main(){
  fast();
  ll n; cin >> n;
  ll log_value = solve(n);
  cout << log_value <<'\n';
  return 0;
}
