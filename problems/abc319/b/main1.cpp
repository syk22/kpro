#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int ans = 0;

int main() {
  cin >> N;

  vector<int> A = {};
  REP (i, 1, N + 1) {
    if (N % i == 0) A.push_back(i);
  }

  REP (i, 0, N + 1) {
    int flag = 1;
    REP (j, 0, A.size()) {
      if (N % A[j] == 0 && N / A[j] <= i) {
        cout << A[j];
        flag = 0;
        break;
      }
    }
    if (flag) cout << '-';
  }

  cout << endl;

  return 0;
}

// 2024/9/28
// ちょっと問題の意味がよくわからないので解説確認