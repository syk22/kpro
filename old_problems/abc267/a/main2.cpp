#include <bits/stdc++.h>
using namespace std;
#define ALL(x) (x).begin(),(x).end()

vector<string> week = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
string S;

int main() {
  cin >> S;
  reverse(ALL(week));
  auto it = find(ALL(week), S);
  int i = distance(week.begin(), it);
  cout << i + 1 << endl;
}