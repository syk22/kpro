#include <bits/stdc++.h>
using namespace std;

string S;
string result = "Yes";

int main() {
  cin >> S;

  for (int i = 1; i <= 15; i += 2) {
    if (S[i] != '0') result = "No";
  }

  cout << result << endl;
  
  return 0;
}

// 2024/8/20
// 10:09