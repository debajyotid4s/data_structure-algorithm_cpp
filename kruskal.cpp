#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

vector<int> parent;
int find(int i){
    while(parent[i]!=i){
        i=parent[i];
    }
    return i;
}
void _union(int a, int b){
    a=find(a);
    b=find(b);
    parent[a]=b;
}
void kruskal_MST(int v, vector<vector<int>> &cost){
    parent.resize(v);
    int mincost=0;
    for(int i=0; i<v; i++){
        parent[i]=i;
    }
    int count=0;
    while(count<v-1){
        int min=100, a=-1, b=-1;
        for(int i=0; i<v; i++){
            for(int j=0; j<v; j++){
                if(find(i)!=find(j) && cost[i][j]<min){
                    min=cost[i][j];
                    a=i;
                    b=j;
                }
            }
        }
        _union(a,b);
        count++;
        mincost+=min;
    }
    cout << mincost;
}

int main()
{
    fast;
    int m, e;
    cin>>m>>e;
    vector<vector<int>> a(m);
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            a[i].push_back(0);
        }
    }
    for(int i=0; i<e; i++){
        int x,y,z;
        cin>>x>>y>>z;
        a[x][y]=z;
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<m; j++){
            if(i!=j && a[i][j]==0)
                a[i][j]=100;
        }
    }
    kruskal_MST(m,a);
    return 0;
}
/*
5 14
0 1 2
0 3 6
1 0 2
1 2 3
1 3 8
1 4 5
2 1 3
2 4 7
3 0 6
3 1 8
3 4 9
4 1 5
4 2 7
4 3 9
*/