#include <bits/stdc++.h>
using namespace std;

int X, Y, N;

int main() {
  cin >> X >> Y >> N;
  int all_x = X * N;
  int y_and_x = (N / 3) * Y + (N % 3) * X;
  cout << min(all_x, y_and_x) << endl; 
}
// 9/24 2:53
