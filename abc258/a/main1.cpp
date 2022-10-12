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

int HH = 21, MM = 0, K;

int main() {
  cin >> K;
  MM = K;
  if (K >= 60) {
    HH++;
    MM -= 60;
  }
  cout << HH << ":";
  cout << setw(2) << setfill('0') << MM << endl;
}

// 8/27 12分くらい
