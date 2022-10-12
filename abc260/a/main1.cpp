#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (b); --i)
using ll = long long;
const int inf = INT_MAX / 2; const ll infl = 1LL << 60;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a = b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a = b; return 1; } return 0; }

int N;
string S;
vector<char> s(3);

int main() {
  cin >> S;
  REP(i, 0 , 3) {
    s[i] = S[i];
  }
  sort(ALL(s));

  if (s[0] == s[2]) cout << -1 << endl;
  else if (s[0] == s[1]) cout << s[2] << endl;
  else if (s[1] == s[2]) cout << s[0] << endl;
  else cout << s[1] << endl;
  return 0;
}