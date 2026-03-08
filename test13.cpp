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
  	if(a[0] == a[n - 1]){
  		cout << "NO" <<'\n';
  	}
  	else{
  		cout << "YES" <<'\n';
  		cout << a[n - 1] <<' ';
  		for(int i = 0; i < n - 1; i++){
  			cout << a[i] <<' ';
  		}
  		cout << '\n';
  	}

  }
  return 0;
}
