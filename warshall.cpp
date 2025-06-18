#include <bits/stdc++.h>
using namespace std;

#define INF 1000000
#define N 100

void AllPairsShortestPath(int cost[N][N], int A[N][N], int n) {
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            A[i][j] = cost[i][j];
        }
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (A[i][k] < INF && A[k][j] < INF)
                    A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int cost[N][N], A[N][N];

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> cost[i][j];
            if (i == j)
                cost[i][j] = 0;
            else if (cost[i][j] == 100)
                cost[i][j] = INF;
        }
    }

    AllPairsShortestPath(cost, A, n);

    cout << "All-pairs shortest path matrix:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (A[i][j] == INF)
                cout << "INF ";
            else
                cout << A[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
