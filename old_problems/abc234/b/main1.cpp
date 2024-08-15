#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N;

int main() {
  cin >> N;
  vector<pair<int, int>> vpii;
  REP (i, 0, N) {
    int x, y;
    cin >> x >> y;
    vpii.push_back(make_pair(x, y));
  }
  vector<double> line;
  REP (i, 0, N) {
    REP (j, i+1, N) {
      int x_1, y_1, x_2, y_2;
      tie(x_1, y_1) = vpii[i];
      tie(x_2, y_2) = vpii[j];
      if (x_2 < x_1) swap(x_2, x_1);
      if (y_2 < y_1) swap(y_2, y_1);
      double l = sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
      line.push_back(l);
    }
  }
  double ans = 0;
  REP (i, 0, (int)line.size()) {
    ans = max(ans, line[i]);
  }
  cout << fixed << setprecision(10);
  cout << ans << endl;
}
// 9/28 12:11
// swap処理を先にしてたらもう3分は縮められた！

// vector<int> x(N), y(N);
// REP (i, 0, N) cin >> x[i] >> y[i];
// swapはしてもしなくてもよかった