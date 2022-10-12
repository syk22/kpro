#include <bits/stdc++.h>
using namespace std;
string S, T;

int main() {
  cin >> S >> T;
  bool failure_flag = 0;
  if (S.size() != T.size()) failure_flag = 1;
  for (int i = 0; i < S.size(); i++) {
    if (S[i] != T[i]) {
      if (i == S.size() - 1) {
        failure_flag = 1;
        break;
      } else {
        string check = S;
        swap(check[i], check[i+1]);
        if (check != T) failure_flag = 1;
        break;
      }
    }
  }
  cout << (failure_flag ? "No" : "Yes") << endl;
}
// 9/26 10:18