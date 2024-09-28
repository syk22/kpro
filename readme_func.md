# function
C++ 関数  
よくわかっていないものメモ

## 冪乗、平方根、立方根
```
// 冪乗
pow(a, b);
// 平方根
sqrt(a);
// 立法根
cbrt(a);
```

## 最大公約数・最小公倍数を求める
```
// 最大公約数 => Greatest Common Divisor
gcd(24, 60);
=> 12;

// 最小公倍数 => Least Common Multiple
lcm(21, 39);
=> 231;
```

## あまり
```
fmod(a, b);
=> a % b;
```

## 整数と小数に分離
```
double a, b;
modf(a, &b);
```

## 文字 'X' が N個の文字列を生成
```string S(N, 'X');```

## 指定された値から始まる整数列を生成
```
vector<int> v(5);
iota(v.begin(), v.end(), 0);
=> {0, 1, 2, 3, 4};
```

## 配列を指定された値で埋める
```
vector<int> v(5);
fill(v.begin(), v.end(), 0);
=> {0, 0, 0, 0, 0};
```

## aをbで割って小数点を切り上げたい, a / bの最大の整数を求めたい
`(a + b - 1) / b;`

## 配列の全体和を求める
```
vector<int> v(5);
iota(v.begin(), v.end(), 1); // {1, 2, 3, 4, 5}
reduce(v.begin(), v.end(), 0LL); // long long型
=> 15;

vector<int> v(5);
iota(v.begin(), v.end(), 1); // {1, 2, 3, 4, 5}
reduce(v.begin(), v.end(), 1, [](int acc, int i) { return acc * 1});
=> 120; // 1 * 1 * 2 * 3 * 4 * 5;

vector<string> s = {"a", "bb", "ccc"};
reduce(v.begin(), v.end(), "");
=> "abbccc";
```

`accumulate` より `reduce` を使っておくほうが良さそう
`inclusive_scan` や `exclusive_scan` などもあるが詳細はまた今度

## 繰り返し文字列のX番目を取得
```
string S = "0123456789";
int i = 175;
S[(i + S.size()) % S.size()];
```