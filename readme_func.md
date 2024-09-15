# function
C++ 関数  
よくわかっていないものメモ

## 冪乗、平方根、立方根
```
pow(a, b);
sqrt(a);
cbrt(a);
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

## ソート、大きい順(降順)
```
sort(x.begin(), x.end(), greater<int>());
=> sort(x.rbegin(), x.rend())
```

## 逆順
```
reverse(x.begin(), x.end());
```

## ソート、特殊例
```
// 生徒のデータ (名前, 数学, 英語)
using Student = tuple<string, int, int>;
vector<Student> S = {{"Aoki", 13, 25},
                     {"Kobayashi", 64, 73},
                     {"Sato", 64, 62},
                     {"Suzuki", 87, 21},
                     {"Takahashi", 79, 60}};

// 数学の点数が高い順を表す関数 (get<1>() で数学の得点)
auto cmp = [](Student x, Student y) -> bool {
    return get<1>(x) > get<1>(y);
};

// 数学の点数が高い順にソート
sort(S.begin(), S.end(), cmp);
```

## aをbで割って小数点を切り上げたい
`(a + b - 1) / b;`

## set
```
set<int> si;
si.insert(x);
```

## pair
```
pair<int, string> pair_return() {
    return {1, "aaa"};
}
int main() {
    auto[a, b] = pair_return();
    // a, bにそれぞれ代入されている
}
```
```
pair<int, int> pii;
pii = (make_pair(1, 0));
pii.first; // -> 1
pii.second; // -> 0
get<0>(pii); // -> 1

// こんな書き出し方もある
string S;
int N;
tie(N, S) = pis;　// N = 0, S = "str"
```

## 文字 'X' が N個の文字列を生成
`string S(N, 'X');`

