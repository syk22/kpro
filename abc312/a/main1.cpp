#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

string S;
string C[7] = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
string result = "No";

int main2() {
  cin >> S;
  REP (i, 0, 7) {
    if (S == C[i]) result = "Yes";
  }
  cout << result << endl;
  return 0;
}

// 2024/8/16
// 3:40

// algorithm使ったらもっと早くできそう

vector<string> vs = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
int main() {
  cin >> S;
  bool check = any_of(vs.begin(), vs.end(), [](string str) { return S == str; });
  if (check) result = "Yes";
  cout << result << endl;
return 0;
}