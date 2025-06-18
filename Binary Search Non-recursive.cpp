#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int Bin_Search(int a[], int low, int high, int x){
	while(high >= low){
		int mid = floor((low + high) / 2);
		if(x == a[mid]) return mid;
		else if(x < a[mid]) high = mid - 1;
		else low = mid + 1;
	}
	return -1;
}

int32_t main(){
  	fast();
  	int n, x; cin >> n >> x;
  	int a[n + 1];
  	for(int i = 1; i <= n; i++) cin >> a[i];
  
  	int result = Bin_Search(a, 1, n, x);
	if(result == -1) cout << "X not Found" <<'\n';
	else cout << "X found at position " << result <<'\n';
}
