#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N, M, A, B;
int ans = -1;

int main() {
  cin >> N >> M;

  vector<int> pro(N);
  fill(ALL(pro), 1);

  REP (i, 0, M) {
    cin >> A >> B, --A, --B;
    pro[B] = 0;
  }

  REP (i, 0, N) {
    if (pro[i]) {
      if (ans == -1) {
      ans = i + 1;
      } else {
        ans = -1;
        break;
      }
    }
  }

  cout << ans << endl;

  return 0;
}

// 2024/10/7
// 9:35