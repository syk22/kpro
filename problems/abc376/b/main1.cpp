#include <bits/stdc++.h>
using namespace std;

#define REP(i, n) for (int i = 0; i < (n); ++i)

int N, Q, T, l = 1, r = 2;
char H;
int ans = 0;

int main() {
  cin >> N >> Q;

  REP (_, Q) {
    cin >> H >> T;
    int move = H == 'L' ? l : r, stop = H == 'L' ? r : l;
    int cnt = 0;
    if (move < T && stop < move) cnt = T - move;
    else if (move < T && move < stop && T < stop) cnt = T - move;
    else if (move < T && move < stop && stop < T) cnt = (N - T) + move;
    else if (T < move && move < stop) cnt = move - T;
    else if (T < move && stop < move && stop < T) cnt = move - T;
    else if (T < move && stop < move && T < stop) cnt = (N - move) + T;
    if (H == 'L') l = T; else r = T;
    ans += cnt;
  }

  cout << ans << endl;

  return 0;
}
