//<---> Everything will be something that you've seen before, Don't panic. <--->
//For my Mother and Departed Father

#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
#define nl '\n'
using namespace std;
const int N = 2e5 + 9;
int a[N];
int prefix_xor[N];

void thirtysix(){
	int n, q; cin >> n >> q;
	for(int i = 1; i <= n; i++)
		cin >> a[i];
	for(int i = 1; i <= n; i++){
		prefix_xor[i] = prefix_xor[i - 1] ^ a[i];
	}
	while(q--){
		int l, r; cin >> l >> r;
		cout << (prefix_xor[l - 1] ^ prefix_xor[r]) << nl;
	}
}

int32_t main(){
  fast();
  //int tc; cin >> tc;
  //while(tc--){
  	thirtysix();
  //}
}
