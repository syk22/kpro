#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (b); --i)
using ll = long long;
using vi = vector<int>;
using vs = vector<string>;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

// int N;

int main() {
  // cin >> N;
  // int a = N / 100, b = (N - a * 100) / 10, c = (N - a * 100 - b * 10);
  // cout << (a+b+c) * 100 + (a+b+c) * 10 + (a+b+c) << endl;
  string N;
  cin >> N;
  int total = 0;
  total += N[0] - '0';
  total += N[1] - '0';
  total += N[2] - '0';
  cout << total * 111 << endl;
}

// 9/6 3:43
// c = N % 10; で良かった。
// もっというと 111 * (a+b+c)で良かった。。。