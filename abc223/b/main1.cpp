#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()
using vs = vector<string>;

string S;
vs VS = {""};

int main() {
  cin >> S;
  int S_size= S.size();
  S += S;
  REP (i, 0, S_size) {
    VS.push_back(S.substr(i, S_size));
  }
  sort(ALL(VS));
  cout << VS[1] << endl;
  cout << VS[S_size] << endl;
}
// 9/26 9:13
// VS[0]->substrで読み取れなかったものが入ってくる。空。