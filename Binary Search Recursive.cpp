#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

int Bin_Search(int a[], int low, int high, int x){
	if(high >= low){
		int mid = floor((low + high) / 2);
		if(x == a[mid]) return mid;
		if(x < a[mid]) return Bin_Search(a, low, mid - 1, x);
		else return Bin_Search(a, mid + 1, high, x);
	}

	return -1;
}

int32_t main(){
  	fast();
  	int n, x; cin >> n;
  	int a[n + 1];
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	
  	cin >> x;

  	int result = Bin_Search(a, 1, n, x);
  	if(result == -1) cout << "x not found" <<'\n';
  	else cout << "x found at position "<< result <<'\n';

	
}
