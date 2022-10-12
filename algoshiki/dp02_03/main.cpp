#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> a(N, vector<int>(3, 0));
    vector<vector<int>> m(N, vector<int>(3, 0));
    for (int i = 0; i < N; ++i) cin >> a[i][0] >> a[i][1] >> a[i][2];
    
    m[0][0] = a[0][0];
    m[0][1] = a[0][1];
    m[0][2] = a[0][2];
    for (int i = 1; i < N; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (j == 0) m[i][j] = max(m[i-1][1], m[i-1][2]) + a[i][j];
            if (j == 1) m[i][j] = max(m[i-1][0], m[i-1][2]) + a[i][j];
            if (j == 2) m[i][j] = max(m[i-1][0], m[i-1][1]) + a[i][j];
        }
        // cout << m[i][0] << " " << m[i][1] << " " << m[i][2] << endl;

    }
    int ans = max(m[N-1][0], max(m[N-1][1], m[N-1][2]));
    cout << ans << endl;
    return 0;
}