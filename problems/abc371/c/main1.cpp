#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

int N, Mg, Mh;
int ans = INT_MAX;
string S;
string res = "Yes";

// // 10^10以上はllを使用
// using ll = long long;

int main() {
  cin >> N;

  set<pair<int, int>> edgG, edgH;
  
  cin >> Mg;

  REP (i, 0, Mg) {
    int u, v;
    cin >> u >> v, --u, --v;
    edgG.emplace(u, v), edgG.emplace(v, u);
  }

  cin >> Mh;

  REP (i, 0, Mh) {
    int a, b;
    cin >> a >> b, --a, --b;
    edgH.emplace(a, b), edgH.emplace(b, a);
  }

  vector A(N, vector<int>(N));
  REP (i, 0, N) {
    REP (j, i + 1, N) {
      cin >> A[i][j], A[j][i] = A[i][j];
    }
  }

  vector<int> P(N);
  iota(ALL(P), 0);
  // do-whileのnext_permutation
      // すべての並べ替えを探索
    do {
        int sum = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < i; ++j) {
                // H に (i, j) が含まれて G に (P[i], P[j]) が含まれない か、
                // H に (i, j) が含まれずに G に (P[i], P[j]) が含まれる 場合 A[i][j] を足す
                sum += A[i][j] * (edgH.contains({i, j}) != edgG.contains({P[i], P[j]}));
            }
        }
        // 最小値を更新
        ans = min(ans, sum);
    } while(ranges::next_permutation(P).found);


  cout << ans << endl;
  
  return 0;
}
