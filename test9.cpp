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

  	vector<int>b, c;
  	bool k = true;
  	for(int i = 0; i < n; i++){
  		if(a[i] != a[0]) {
  			k = false;
  			break;
  		}
  	}

  	sort(a, a + n);
    int max = a[n - 1];

    for(int i = 0; i < n; i++){
      if(max == a[i]){
        c.push_back(a[i]);
      }
      else b.push_back(a[i]);
    }

  	if(k) cout << -1 <<'\n';
  	else {
      
  		cout << b.size() << ' ' << c.size() <<'\n';

  		for(int i = 0;  i < b.size(); i++) {
  			cout << b[i] <<' ';
	  		}
	  		cout << '\n';

  		for(int j = 0; j < c.size(); j++) {
  			cout << c[j] <<' ';
  		}
  		cout << '\n';
  	}
  }

  return 0;
}
