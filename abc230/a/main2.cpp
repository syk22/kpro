#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
  cin >> N;
  if (N >= 42) N++;
  cout << "AGC";
  cout << setw(3) << setfill('0') << N << endl;
}

// 9/24 2:09