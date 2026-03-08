#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

bool solve(int a[], int i, int n){
	if(i > n) return true;
	if(a[i] != a[n - 1]) return false;
	else return solve(a, i + 1, n - 1);
}

int32_t main(){
  fast();
  int n; cin >> n;
  int a[n]; for(int i = 0; i < n; i++) cin >> a[i];

  bool yes = solve(a, 0, n);
  if(yes) cout << "YES" <<'\n';
  else cout << "NO" <<'\n';
}
