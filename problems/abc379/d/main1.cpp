#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

using ll = long long;

int N, Q, ind1 = -1, ind2 = 0, judge = 0;
ll T, H;
vector<pair<int, ll>> pot;

int main() {
  cin >> N;

  queue<int> q;
  vector<ll> height(N + 1);

  REP (i, 1, N + 1) {
    cin >> Q;
    if (Q == 1) {
      height[i] = height[i - 1];
      q.push(i);
    } else if (Q == 2) {
      cin >> T;
      height[i] = height[i - 1] + T;
    } else if (Q == 3) {
      height[i] = height[i - 1];
      cin >> H;
      int ans = 0;
      while (!q.empty()) {
        if (height[i] - height[q.front()] >= H) {
          ++ans;
          q.pop();
        } else break;
      }
      cout << ans << endl;
    }
  }
}

// 2024/11/24
// 解説見て20分くらい
// 2024/11/22？
// 解説見ずに30分くらい、コンテスト後に追加されたテストケースがパスしない

// int main() {
//   cin >> N;

//   REP (_, 0, N) {
//     cin >> Q;
//     if (Q == 1) {
//       if (!judge) {
//         pot.push_back(make_pair(0, 0));
//         ++ind1;
//         judge = 1;
//       }
//       ++pot[ind1].first;
//     } else if (Q == 2) {
//       cin >> T;
//       REP (i, ind2, pot.size()) pot[i].second += T;
//       judge = 0;
//     } else if (Q == 3) {
//       cin >> H;
//       int ans = 0;
//       REP (i, ind2, pot.size()) {
//         if (pot[i].second >= H) {
//           ans += pot[i].first;
//         } else {
//           ind2 = i;
//           break;
//         }
//         ind2 = i + 1;
//       }
//       cout << ans << endl;
//       judge = 0;
//     }
//   }

//   return 0;
// }

