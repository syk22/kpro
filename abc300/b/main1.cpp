#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define FORE(i, a) for (auto &i : a)
#define ALL(x) (x).begin(),(x).end()
#define RREP(i, a, n) for (int i = (a); i >= (n); --i)

int H, W, r = 0, c = 0, currow, curcol;
string res = "No";

int main() {
  cin >> H >> W;

  vector<vector<char>> A(H), B(H), check(H);
  REP(i, 0, H) {
    vector<char> va(W);
    REP(j, 0, W) cin >> va.at(j);
    A.at(i) = va;
  }
  REP(i, 0, H) {
    vector<char> vb(W);
    REP(j, 0, W) cin >> vb.at(j);
    B.at(i) = vb;
  }

  // int cnt = 1;
  // cout << "A:" << endl;
  // FORE (x, A) {
  //   cout << cnt << endl; 
  //   FORE (y, x) {
  //     cout << y << " ";
  //   }
  //   cout << endl;
  //   cnt++;
  // }

  // 2つのvectorの比較は==で可能
  // if (A == B) cout << "ALL SAME" << endl;

  REP(i, 0, H) {

    REP (j, 0, H) {
      vector<char> shift(W);
      vector<char> cur = A.at((i + r) % H);
      REP (h, 0, W) shift.at(h) = cur.at((h + c) % W);
      
      check.at(j) = shift;
      c++;
    }

    // int cnt = 1;
    cout << "check:" << endl;
    FORE (x, check) {
      FORE (y, x) {
        cout << y;
      }
      cout << endl;
      // cnt++;
    }

    if (check == B) {
      cout << "ALL SAME!" << endl;
      res = "Yes";
    }    

    // これで一段ずつずらすことが可能となった！
    // REP (j, 0, H) check.at(j) = A.at((j + r) % H);
    // 列を動かす

  // int cnt = 1;
  // cout << "A:" << endl;
  // FORE (x, A) {
  //   cout << cnt << endl; 
  //   FORE (y, x) {
  //     cout << y << " ";
  //   }
  //   cout << endl;
  //   cnt++;
  // }

    r++;
  }

  // cout << msi["ABC"] << endl;
  // sort(ALL(V));
  // auto it = find(ALL(VS), S);
  // int i = distance(VS.begin(), it);
  // cout << fixed << setprecision(10) << N << endl;
  // cout << setw(4) << setfill('0') << N << endl;
  // cout << S.substr(L-1, R-L+1) << endl;

  cout << res << endl;
  // cout << ans << endl;
  
  return 0;
}

// 2024/8/29
// 10:00で中断
// 37：40で1段ずらせたので中断

// 