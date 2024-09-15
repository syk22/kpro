#include <bits/stdc++.h>
using namespace std;

int A, B;
string result = "Yes";

int main() {
  cin >> A >> B;
  if (B - A != 1) result = "No";
  if (B % 3 == 1) result = "No";
  cout << result << endl;
}

// 2024/08/15
// 3:55