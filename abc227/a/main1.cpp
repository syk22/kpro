#include <bits/stdc++.h>
using namespace std;

int N, K, A;

int main() {
  cin >> N >> K >> A;
  
  cout << ((K + A - 1) % N ? (K + A - 1) % N : N) << endl;
}

// 9/8 17:48ぐらい
// 覚えよう