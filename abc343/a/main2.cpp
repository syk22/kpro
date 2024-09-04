#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)
int A, B;

int main() {
  cin >> A >> B;


  vector<int> vi(10);
  iota(vi.begin(), vi.end(), 0);
  
  REP (i, 0, 10) {
    if (vi[i] != A + B) {
      cout << vi[i] << endl;
      break;
    }
  }
 
  return 0;
}

// 2024/9/4
// 3:01