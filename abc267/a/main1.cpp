#include <bits/stdc++.h>
using namespace std;

#define ALL(x) (x).begin(),(x).end()

string S;
vector<string> week = {"Friday", "Thursday", "Wednesday", "Tuesday", "Monday"};

int main() {
  cin >> S;
  auto it = find(ALL(week), S);
  int i = distance(week.begin(), it) + 1;
  cout << i << endl;
}

// 9/5 16:56
// String の処理の仕方、完全に忘れている
// イテレータを別に持っておく必要があるのはC++の面倒な所だよなあ