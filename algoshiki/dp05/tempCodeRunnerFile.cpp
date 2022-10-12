#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), s(N, 0);
    for (auto &i : A) cin >> i;

    for (int i = 1; i <= N; ++i) {
        int min_step = 1 << 30;
        for (int j = 1; j <= M; ++j) {
            min_step = min(min_step, j * A[i] + s[i-j]);
        }
        s[i] = min_step;
    }
    cout << s[N-1] << endl;
}