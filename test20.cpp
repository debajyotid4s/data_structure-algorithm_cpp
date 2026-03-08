#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
using namespace std;

int32_t main() {
    fast();
    int tc; cin >> tc;
    while (tc--) {
        int n, a, b, c; cin >> n >> a >> b >> c;

        int count = 0;

        while (n > 0) {
            if (n >= a && a >= b && a >= c) {
                n -= a;
            } 
            else if (n >= b && b >= c) {
                n -= b;
            } 
            else if (n >= c) {
                n -= c;
            } 
            else {
                break; // No valid value to subtract
            }
            count++;
        }

        cout << count << '\n';
    }
    return 0;
}
