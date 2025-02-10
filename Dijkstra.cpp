#include<bits/stdc++.h>
#define N 1000
using namespace std;

void SSSP(int m, int path_matrix[1000][1000]){
    int temp[N];
    int length[N];

    for(int i = 0; i < m; i++){
        if(path_matrix[0][i] != 100) {
            length[i] = path_matrix[0][i];
        }
        else length[i] = INT_MAX;
        temp[i] = 0;
    }

    length[0] = 0;

    int count = 0;

    while(count != m - 1) {
        int min = INT_MAX;
        int vn = -1;

        for(int i = 0; i < m; i++){
            if((0 <= length[i]) && length[i] < min){
                min = length[i];
                vn = i;
            }
        }

        if(vn == -1) break;


        for(int i = 0; i < m; i++){
            if((length[vn] + path_matrix[vn][i]) < length[i]){
                int Length = length[vn] + path_matrix[vn][i];
                if(Length < length[i]){
                    length[i] = Length;
                    temp[i] = vn;
                }
            }
        }
        count++;
    }

    for(int i = 1; i < m; i++){
        if(length[i] == INT_MAX){
            cout << i << " no way\n";
        }
        else {
            cout << i << ' ' << length[i] << '\n';
        }
    }
}

int main(){
    int m;
    cin >> m;
    int path_matrix[1000][1000];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin >> path_matrix[i][j];
        }
    }

    SSSP(m, path_matrix);
    return 0;
}
