#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
using vi = vector<int>;

int N;

int main() {
  cin >> N;
  vi a(N), b(N);
  REP (i, 1, N) cin >> a[i] >> b[i];
  vi tree(N+1);
  REP (i, 1, N) {
    tree[a[i]]++;
    tree[b[i]]++;
  }
  bool ans = 0;
  REP (i, 1, N+1) if (tree[i] == N - 1) ans = 1;
  
  cout <<(ans ? "Yes" : "No") << endl;
}
// 9/28 13:41
// 桁の管理をしっかりしないままやったのでこんな時間に