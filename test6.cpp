#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main(){
  fast();
  int tc; cin >> tc;
  while(tc--){
  	int n; cin >> n;
  	int b[n];
  	vector<int>a;
  	for(int i = 0; i < n; i++) cin >> b[i];

  	a.push_back(b[0]);

  	for(int i = 1; i < n; i++){
  		if(b[i] >= b[i - 1]) {
  			a.push_back(b[i]);
  		}
  		else {
  			a.push_back(b[i]);
  			a.push_back(b[i]);
  		}

  	}

  	cout << a.size() <<'\n';
  	for(int i = 0; i < a.size(); i++){
  		cout << a[i] <<' ';
  	}
  	cout << '\n';
  }
  return 0;
}
