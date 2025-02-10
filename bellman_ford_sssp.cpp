//<---> Everything will be something that you've seen before, Don't panic. <--->
//For my Mother and Departed Father

#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long
#define INF 1e9
using namespace std;

struct Edge {
    int u, v, weight;
};

int main() {
    fast();
    
    int vertices, edges;
    cin >> vertices >> edges;
    
    vector<Edge> graph(edges);
    
    for (int i = 0; i < edges; i++) {
        cin >> graph[i].u >> graph[i].v >> graph[i].weight;
    }
    
    int source;
    cin >> source;
    
    vector<int> distance(vertices, INF);
    vector<int> previous(vertices, -1);
    
    distance[source] = 0;
    
    for (int i = 0; i < vertices - 1; i++) {
        for (int j = 0; j < edges; j++) {
            int u = graph[j].u;
            int v = graph[j].v;
            int w = graph[j].weight;

            int temp_dist = distance[u] + w;

            if (distance[u] != INF && temp_dist < distance[v]) {
                distance[v] = temp_dist;
                previous[v] = u;
            }
        }
    }
    
    for (int i = 0; i < edges; i++) {
        int u = graph[i].u;
        int v = graph[i].v;
        int w = graph[i].weight;

        if (distance[u] != INF && distance[u] + w < distance[v]) {
            cout << "Graph contains a negative weight cycle!" <<'\n';
            return 0;
        }
    }

    for (int i = 0; i < vertices; i++) {
        cout << i << "    ";
        if(distance[i] == INF) cout << "Infinity" <<'\n';
        else cout << distance[i] <<'\n';
    }
    
    return 0;
}