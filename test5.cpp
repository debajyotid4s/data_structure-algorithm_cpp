#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSorted(const vector<int>& a) {
    for (int i = 1; i < a.size(); i++) {
        if (a[i] < a[i - 1]) return false;
    }
    return true;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        
        if (isSorted(a)) {
            cout << "YES\n";
            continue;
        }
        
        if (k >= n) {
            cout << "YES\n";
            continue;
        }
        
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        
        bool canSort = false;
        
        // Check if we can sort the array by just focusing on the first k and last k elements
        for (int i = 0; i < k; i++) {
            if (a[i] != sorted_a[i] && a[n - k + i] != sorted_a[n - k + i]) {
                canSort = false;
                break;
            }
            canSort = true;
        }

        if (canSort) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
