#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false);cin.tie(nullptr);
#define ll long long
using namespace std;

void ToH(int n, int s, int m, int d){
	if(n == 1) {
		cout << "S to D " << s << ' ' << d << '\n';
		return;
	}
	ToH(n - 1, s, d, m);
	cout << "S to D " << s << ' ' << d << '\n';
	ToH(n - 1, m, s, d);

}

int32_t main(){
  fast();
  int n, s, m, d; cin >> n >> s >> m >> d;

  ToH(n, s, d, m);
  
}
