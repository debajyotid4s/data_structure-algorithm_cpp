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
  		for(int i = 1; i <= n; i++) cin >> a[i];
  		int two_count_from_left = 0;
  		int two_count_from_right = 0;
  		bool isFound = false;

  			for(int i = 1; i <= n; i++){
  				if(a[i] == 2){
  				two_count_from_right++;
  				}
  			}
  			if(two_count_from_right == 0) {
  				cout << 1 << '\n';
  				continue;
  			}
  			for(int i = 1; i < n; i++){
  				if(a[i] == 2){
  					two_count_from_left++;
  					two_count_from_right--;
  					if(two_count_from_right == two_count_from_left){
  						cout << i << '\n';
  						isFound = true;
  						break;
  					}
  				}
  			}
  		if(!isFound) cout << "-1" <<'\n';
  		
  }
}
