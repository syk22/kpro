#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;

int main() {
  cin >> N;

  vector<int> A(N);
  FORE (x, A) cin >> x;

  vector<int> ans = {};

  REP(i, 0, N) {
    if (i != N - 1 && abs(A.at(i) - A.at(i + 1)) > 1) {
        int a = A.at(i), b = A.at(i + 1);
        if (a < b) {
          REP (k, 0, b - a) ans.push_back(a + k);
        } else if (a > b) {
          REP (k, 0, a - b) ans.push_back(a - k);
        }
    } else ans.push_back(A.at(i));
  }

  REP (i, 0, ans.size()) {
    cout << ans.at(i) << " ";
  }
  cout << endl;

  return 0;
}

// 2024/8/30
// 5分で中断
// 15分くらい
