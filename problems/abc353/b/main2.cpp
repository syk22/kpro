#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N, K;
int ans = 0, cnt = 0, ind = 0;

int main() {
  cin >> N >> K;

  vector<int> A(N);
  FORE (x, A) cin >> x;
  
  while (ind < N) {
    ans++;
    cnt = 0;
    REP (i, ind, N) {
      if (K >= cnt + A[ind]){
        cnt += A[ind];
        ind++;
      } else break;
    }
  }

  cout << ans << endl;
  
  return 0;
}

// 2024/9/20
// 13:10