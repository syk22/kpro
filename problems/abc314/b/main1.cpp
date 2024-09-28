#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)
#define REPS(i, a, n, b) for (int i = (a); i < (n); i += (b))

// 10^10以上10^18以下はllを使用
using ll = long long;
// long long は (2^63 - 1) が最高なので、それ以上の時はunsignedをつける必要がある　10^19まで
using ull = unsigned long long;

int N, X;
int ans = 0, flag = 0;
string S;
string res = "Yes";

int main() {
  cin >> N;

  vector<vector<int>> R(37, vector<int>());
  vector<int> C(N), member = {};

  REP (i, 0, N) {
    cin >> C[i];
    REP (j, 0, C[i]) {
      int A;
      cin >> A;
      R[A - 1].push_back(i);
    }
  }

  cin >> X, --X;

  REP (i, 0, R[X].size()) {

  }

  cout << ans << endl;
  cout << res << endl;

  return 0;
}

// 2024/9/27
// 11:25考えたけどわからない。解説参照