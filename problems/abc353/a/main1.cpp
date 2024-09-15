#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int N, H, high = 0;
int ans = -1;

vector<int> vi = {};

int main() {
  cin >> N;
  REP(i, 0, N) {
    cin >> H;
    vi.push_back(H);
  }

  high = vi.at(0);

  REP(i, 0, N) {
    if (vi.at(i) > high) {
      high = vi.at(i);
      ans = i + 1;
      break;
    }
  }

  cout << ans << endl;
  
  return 0;
}