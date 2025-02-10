#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define INF INT_MAX

int main() {
    fast
    int n, m; cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(n + 1, INF));

    for (int i = 1; i <= m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        a[u][v] = w;
        a[v][u] = w;
    }

    vector<int> distance(n + 1, INF);
    vector<bool> inMST(n + 1, false);
    distance[1] = 0;

    int totalCost = 0;
    int count = 0;

    while (count < n - 1) {
        int minDist = INF;
        int u = -1;

        for (int i = 1; i <= n; i++) {
            if (!inMST[i] && distance[i] < minDist) {
                minDist = distance[i];
                u = i;
            }
        }

        inMST[u] = true;
        totalCost += minDist;
        count++;
        for (int v = 1; v <= n; v++) {
            if (!inMST[v] && a[u][v] != INF && a[u][v] < distance[v]) {
                distance[v] = a[u][v];
            }
        }
    }

    cout << totalCost << '\n';
    return 0;
}
