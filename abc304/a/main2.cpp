#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;
int minAge = INT_MAX, cnt = -1;

int main() {
  cin >> N;

  vector<int> vi(N);
  vector<string> vs(N);

  REP (i, 0, N) cin >> vs[i] >> vi[i];

  REP (i, 0, N) if (vi.at(i) < minAge) minAge = vi.at(i), cnt = i;

  // REP (i, cnt, N) cout << vs.at(i) << endl;
  // REP (i, 0, cnt) cout << vs.at(i) << endl;
  REP (i, 0, N) cout << vs.at((cnt + i) % N) << endl;
 
  return 0;
}

// 2024/8/27
// 27:43 w

// pairを使う
// int mainPair () {
//   cin >> N;
//   vector<pair<string, int>> p(N);

//   REP (i, 0, N) cin >> p.at(i).first >> p.at(i).second;
//   REP (i, 0, N) if (p.at(i).second < minAge) minAge = p.at(i).second, cnt = i;

//   REP (i, cnt, N) cout << p.at(i).first << endl;
//   REP (i, 0, cnt) cout << p.at(i).first << endl;

//   return 0;
// }