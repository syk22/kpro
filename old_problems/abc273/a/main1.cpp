#include <bits/stdc++.h>
using namespace std;
int N;

int rec(int num) {
  if (num == 0) return 1;
  return rec(num - 1) * num;
}

int main() {
  cin >> N;
  cout << rec(N) << endl;
  return 0;
}