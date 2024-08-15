#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, n) for (int i = (a); i < (n); ++i)
#define ALL(x) (x).begin(),(x).end()

vector<int> card;
int x;

int main() {
  REP (i, 0, 5) {
    cin >> x;
    card.push_back(x);
  }
  sort(ALL(card));
  bool ans = 0;
  if ((card[0] == card[2]) && (card[3] == card[4])) ans = 1;
  if ((card[2] == card[4]) && (card[0] == card[1])) ans = 1;
  cout << (ans ? "Yes" : "No") << endl;
}
// 9/24 4:40
// 