#include <bits/stdc++.h>
using namespace std;

int N;
string S = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";

int main() {
  cin >> N;

  cout << S.substr(0, 2 + N) << endl;
}

// 2024/9/14
// 2分ぐらい