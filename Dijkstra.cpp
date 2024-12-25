#include<bits/stdc++.h>
using namespace std;

void singleSourceShortestPath(int m, int w[100][100]) {
    int touch[100];       
    int length[100];      
    bool visited[100];    

    for (int i = 1; i <= m; i++) {
        if (w[1][i] != 100) {
            length[i] = w[1][i];  
        } else {
            length[i] = INT_MAX; 
        }
        touch[i] = 1;           
        visited[i] = false;     
    }

    length[1] = 0;  
    visited[1] = true; 

    int count = 0;

    while (count < m - 1) {
        int min = INT_MAX;
        int vnear = -1;

        for (int i = 1; i <= m; i++) {
            if (!visited[i] && length[i] < min) {
                min = length[i];
                vnear = i;
            }
        }

        if (vnear == -1) break;

        visited[vnear] = true; 

        for (int i = 1; i <= m; i++) {
            if (!visited[i] && w[vnear][i] != 100 && length[vnear] != INT_MAX) {
                int newLength = length[vnear] + w[vnear][i];
                if (newLength < length[i]) {
                    length[i] = newLength;
                    touch[i] = vnear;
                }
            }
        }

        count++;
    }

    for (int i = 2; i <= m; i++) {
        if (length[i] == INT_MAX) {
            cout << i << "\tINF\n";
        } else {
            cout << i << "\t" << length[i] << "\n";
        }
    }
}

int main() {
    int m;
    int w[100][100];

    cin >> m;

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> w[i][j];
        }
    }

    singleSourceShortestPath(m, w);

    return 0;
}