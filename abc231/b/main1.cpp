#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)

int N;
map<string, int> mpsi;

int main2() {
  cin >> N;
  REP (i, 0, N) {
    string S;
    cin >> S;
    mpsi[S]++;
  }
  int cnt = 0;
  string app = "";
  for (auto it = mpsi.begin(); it != mpsi.end(); ++it) {
    if (cnt < it->second) {
      app = it->first;
      cnt = it->second;
    }
  }
  cout << app << endl;
  return 0;
}
// 9/27 13:45
// mapのループの回し方がわかれば8分は切ってた

// 解説では普通に先頭から候補を見て、
// 候補者と投票数をメモしておいて、投票数が多い場合だけ更新していた
// map使わなくてもいけそう

int main() {
  cin >> N;
  string S[N];
  FORE (i, S) cin >> i;

  int max_cnt = 0;
  string max_cand = "";

  REP (i, 0, N) {
    string cand = S[i];
    int votes = 0;
    REP (j, 0, N) if (S[j] == cand) votes++;
    if (votes > max_cnt) {
      max_cand = cand;
      max_cnt = votes;
    }
  }
  cout << max_cand << endl;
}