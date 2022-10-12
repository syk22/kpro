#include <bits/stdc++.h>
using namespace std;
const int INF = 100000000;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), s(N, INF);
    for (auto &i : A) cin >> i;

    s[0] = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            if(i-j >= 0) s[i] = min(s[i], s[i-j] + A[i] * j);
        }
    }
    cout << s[N-1] << endl;
}

// https://algo-method.com/tasks/306
// 何度やってもランタイムエラーになるのでまた今度
