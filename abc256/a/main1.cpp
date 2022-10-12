#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (b); --i)
using ll = long long;

ll x = 2;
int main () {
  int n;
  cin >> n;
  if (n == 0) {
    cout << 1 << endl;
  } else {
    REP (i, 1, n) {
        x *= 2;
    }
    cout << x << endl;
  }
}

// 8/24 4:19.45
// 条件を読むこと 特に最初と最後は必ず確認！
// 今回も0のケースを漏らして失敗

// 桁はOK 2^30 まではintでいける
// ここを気にできたのは成長と思おう