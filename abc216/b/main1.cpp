#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

int main() {
  cin >> N;
  vector<pair<string, string>> vpss;
  REP (i, 0, N) {
    string sei, mei;
    cin >> sei >> mei;
    vpss.push_back(make_pair(sei, mei));
  }
  bool ans = 0;
  for (int i = 0; i < N; i++) {
    string sei, mei;
    tie(sei, mei) = vpss[i];
    for (int j = i + 1; j < N; j++) {
      if (sei == vpss[j].first && mei == vpss[j].second) ans = 1;
    }
  }
  cout << (ans ? "Yes" : "No") << endl;
}

// 9/25 8:27
// コンテストでも解いていた そのときは18分越え
// 大幅にレベルアップしてると思いたい！