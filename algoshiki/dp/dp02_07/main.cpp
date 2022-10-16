#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> a(N, vector<int>(N, 0));
    a[0][0] = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i - 1 >= 0) a[i][j] += a[i-1][j];
            if (j - 1 >= 0) a[i][j] += a[i][j-1];
        }
    }
    cout << a[N-1][N-1] << endl;
    return 0;
}