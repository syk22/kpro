#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

// #define FORE(i, a) for (auto &i : a)
// #define ALL(x) (x).begin(),(x).end()
// #define RREP(i, a, n) for (int i = (a); i >= (b); --i)

int N;
int A, B;
int X, Y;
int ans = 0;
string S;
string res = "Yes";

// int最大値は INT_MAX, int 最小値は INT_MIN
// // 10^10以上はllを使用
// using ll = long long;

int main() {
  cin >> N >> S;
  cin >> A >> B;
  cin >> X >> Y;

  vector<int> vi(N);
  REP (i, 0, N) cin >> vi[i];
  
  REP (i, 0, N) {

    // if (i < S.size() - 1) cout  << " ";
  }

  // 文字列から数値型へ変換
  // ans = atoi(S.substr(3, 3).c_str());

  // Map型を出力
  // cout << msi["ABC"] << endl;

  // ソート
  // sort(ALL(V));

  // 検索
  // auto it = find(ALL(VS), S);
  // int i = distance(VS.begin(), it);

  // 小数点以下10桁を表示
  // cout << fixed << setprecision(10) << N << endl;

  // 先頭まで4文字表示。4文字以下の場合は先頭を'0'で埋める
  // cout << setw(4) << setfill('0') << N << endl;

  // 文字列の左からL文字以降の文字全て
  // cout << S.substr(L-1, R-L+1) << endl;

  cout << ans << endl;
  cout << res << endl;
  
  return 0;
}