#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)
#define REPS(i, a, n, b) for (int i = (a); i < (n); i += (b))

// 10^10以上はllを使用
using ll = long long;
// long long は　63^2 - 1が最高なので、それ以上の時はunsignedをつける必要がある
using ull = unsigned long long;

int N, X, smax = INT_MIN, smin = INT_MAX;
int ans = 0, cnt = 0;
string S;
string res = "Yes";

int main() {
  cin >> N >> X;

  vector<int> A(N - 1);
  REP (i, 0, N - 1) {
    cin >> A[i];
  }

  sort(ALL(A));
  smax = A[N - 2], smin = A[0];

  REP (i, 0, N - 1) {
    if (i != 0 && i != N - 2)cnt += A[i];
  }
  cout << "cnt: " << cnt << endl;

  if (X <= cnt) ans = 0;
  else if (X - cnt <= 100 && X - cnt <= smax) ans = X - cnt;

  cout << ans << endl;

  return 0;
}

// 2024/9/25
// 10分以上悩んだけどよくわからなくなったので解説参照