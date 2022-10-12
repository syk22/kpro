#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
using si = set<int>;

int N;
map<int, si> mpisi;

int main2() {
  cin >> N;
  REP (i, 0, N - 1) {
    int a, b;
    cin >> a >> b, --a, --b;
    mpisi[a].insert(b);
    mpisi[b].insert(a);
  }
  int max_tree_num = 0;
  REP (i, 1, N + 1) {
    int k = mpisi[i].size();
    max_tree_num = max(max_tree_num, k);
  }
  cout << (max_tree_num == N - 1 ? "Yes" : "No") << endl;
}
// 9/26 25:36
// ゆっくりしすぎた
// aとb から出ている辺の次数を数えればいいのか、なるほど
