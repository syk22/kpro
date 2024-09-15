#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, n) for (int i = (a); i < (n); ++i)

int inputOld = -1, inputNow;
string result = "Yes";

int main() {
  REP (i, 0, 8) {
    cin >> inputNow;
    if (inputNow < inputOld) result = "No";
    if (inputNow < 100 || inputNow > 675) result = "No";
    if (inputNow % 25 != 0)  result = "No";
    
    inputOld = inputNow;
  }
  cout << result << endl;
}

// 2024/08/24
// 8:00