#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define nl '\n'
using namespace std;
const int N = 1e9;

void BFS(unordered_map<char, vector<char>> &G, char source) {
    unordered_map<char, string> color;
    unordered_map<char, int> d;
    unordered_map<char, char> pie;
    queue<char> Q;

    for (auto &[node, _] : G) {
        if (node != source) {
            color[node] = "white";
            d[node] = N;
            pie[node] = -1;
        }
    }

    color[source] = "gray";
    d[source] = 0;
    pie[source] = -1;
    Q.push(source);

    while (!Q.empty()) {
        char u = Q.front();
        Q.pop();

        for (char v : G[u]) {
            if (color[v] == "white") {
                color[v] = "gray";
                pie[v] = u;
                d[v] = d[u] + 1;
                Q.push(v);
            }
        }
        color[u] = "black";
    }

    cout << "Node : Distance : Predecessor" << nl;
    for (auto &[node, dist] : d) {
        cout << node << " : " << dist << " : " << pie[node] << nl;
    }
}

int32_t main() {
    fast();
    int edges;
    cin >> edges;

    unordered_map<char, vector<char>> G;
    for (int i = 0; i < edges; i++) {
        char a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    char source;
    cin >> source;
    BFS(G, source);
}
