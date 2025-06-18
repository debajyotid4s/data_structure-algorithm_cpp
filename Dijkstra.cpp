#include<bits/stdc++.h>
using namespace std;

#define N 1000
#define INF 1000000

void Dijkstra(int m, int w[N][N]) {
    int touch[N];
    int length[N];
    bool visited[N] = {false};
    for (int i = 2; i <= m; i++) {
        touch[i] = 1;
        length[i] = w[1][i];
    }

    length[1] = 0;
    int count = 0;

    while (count != m - 1) {
        int min = INF;
        int vnear = -1;
        for (int i = 2; i <= m; i++) {
            if (!visited[i] && length[i] < min) {
                min = length[i];
                vnear = i;
            }
        }

        if (vnear == -1) break;
        for (int i = 2; i <= m; i++) {
            if (length[vnear] + w[vnear][i] < length[i] && !visited[i]) {
                length[i] = length[vnear] + w[vnear][i];
                touch[i] = vnear;
            }
        }

        visited[vnear] = true;
        count++;
    }

    for (int i = 2; i <= m; i++) {
        if (length[i] == INF || length[i] < 0)
            cout << i << " no way\n";
        else
            cout << i << ' ' << length[i] << '\n';
    }
}

int main() {
    int m;
    cin >> m;

    int w[N][N];

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> w[i][j];
            if (w[i][j] == 100) w[i][j] = INF;
        }
    }

    Dijkstra(m, w);
    return 0;
}

// input:
// 5
// 0 7 4 6 1
// 100 0 100 100 100
// 100 2 0 5 100
// 100 3 100 0 100
// 100 100 100 1 0
