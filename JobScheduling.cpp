#include<bits/stdc++.h>
#define N 1000
using namespace std;



int main() {
    int x; cin >> x;
    vector<pair<char, int>> deadLine;
    vector<int>profits(x);

    for(int i = 0; i < x; i++){
        int z; cin >> z;
        char c = 'A' + i;
        deadLine.push_back(make_pair(c,x));
    }

    for(int i = 0; i < x - 1; i++){
        cin >> profits[i];
    }
    for(int i = 0; i < x - 1; i++){
        for(int j = 1; j < x; j++){
            if(profits[j] > profits[i]){
                swap(profits[i], profits[j]);
                swap(deadLine[i], deadLine[j]);
            }
        }
    }

    int max; cin >> max;
    int count = 0;

    for(int i = 0; i < x; i++){
        if(deadLine[i].second <= max){
            count += profits[i];
            max -= deadLine[i].second;
            cout << deadLine[i].first<<' ';
        }
    }

    return 0;
}
