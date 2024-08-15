#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()
using vs = vector<string>;

vs week = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
string S;

int main() {
  cin >> S;
  // reverse(ALL(week));
  // auto it = find(ALL(week), S);
  // int i = distance(week.begin(), it);
  // cout << i+1 << endl;
  int day = 5;
  REP (i, 0, 5) {
    if (week[i] == S) {
      cout << day - i << endl;
    }
  }
}
// 9/9 6:15
// ifで書くよりforで書きたい