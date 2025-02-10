#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> cost(n, vector<int>(n));
    vector<vector<int>> a(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> cost[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = cost[i][j];
        }
    }

    
    for (int k = 0; k < n; k++) { 
        for (int i = 0; i < n; i++) { 
            for (int j = 0; j < n; j++) { 
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }

    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		cout << a[i][j] <<' ';
    	}
    	cout << '\n';
    }

    return 0;
}