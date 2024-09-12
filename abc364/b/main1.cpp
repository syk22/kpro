#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int H, W;
int Si, Sj;
string X;

map<char, pair<int, int>> cii = {
  {'U', make_pair(-1, 0)},
  {'R', make_pair(0, 1)},
  {'D', make_pair(1, 0)},
  {'L', make_pair(0, -1)}
};

int main() {
  cin >> H >> W;
  cin >> Si >> Sj, Si--, Sj--;

  vector<string> C(H);
  FORE (x, C) cin >> x;

  cin >> X;
  int N = X.size();

  REP(i, 0, N) {
    pair<int, int> dir = cii.at(X[i]);
    int di = Si + dir.first, dj = Sj + dir.second;

    if (di < 0 || H <= di || dj < 0 || W <= dj) continue;

    if (C[di][dj] != '#') Si = di, Sj = dj;
  }

  cout << Si + 1 << ' ' << Sj + 1 << endl;
  
  return 0;
}

// 2024/9/24
// 13:07