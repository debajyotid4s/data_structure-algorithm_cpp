#include <iostream>
#include <vector>
using namespace std;
 
int lcs(string &X, string &Y, int m, int n) {
    vector<vector<int>> C(m + 1, vector<int>(n + 1, 0));
 
    for (int i = 0; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                C[i][j] = 0;
            else if (X[i - 1] == Y[j - 1])
                C[i][j] = C[i - 1][j - 1] + 1;
            else
                C[i][j] = max(C[i - 1][j], C[i][j - 1]);
        }
    }
    for(int i = 0; i <= m; i++){
      for(int j = 0; j <= n; j++){
         cout << C[i][j] <<' ';
      }
      cout << '\n';
    }

    int index = C[m][n];
    string LCS(index, '\0');
    int p = m, q = n;
 
    while (p > 0 && q > 0) {
        if (X[p - 1] == Y[q - 1]) {
            LCS[--index] = X[p - 1];
            p--;
            q--;
        } else if (C[p - 1][q] > C[p][q - 1])
            p--;
        else
            q--;
    }
 
    cout << "LCS: " << LCS << endl;
    return C[m][n];
}
 
int main() {
    string X, Y;
    cin >> X >> Y;
    int m = X.size();
    int n = Y.size();
    lcs(X, Y, m, n);
    return 0;
}