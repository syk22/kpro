#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RALL(x) (x).rbegin(),(x).rend()
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)
#define REPS(i, a, n, b) for (int i = (a); i < (n); i += (b))

// 10^9以上10^18以下はllを使用
using ll = long long;
// long long は (2^63 - 1) が最高なので、それ以上の時はunsignedをつける必要がある　10^19まで
using ull = unsigned long long;

int N;
int ans = 0, flag = 0;
set<string> dict = {};
string S;
string res = "Yes";

int main() {
  cin >> S;

  int sz = S.size();
  REP (i, 0, sz) {
    REP (j, 1, sz + 1 - i) {
      dict.insert(S.substr(i, j));
    }
  }

  cout << dict.size() << endl;

  return 0;
}

// 2024/10/5
// 5:27