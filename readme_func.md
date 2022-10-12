# function
C++ 関数  
よくわかっていないものメモ

## 冪乗
`pow(a, b);`

## 平方根
`sqrt(a);`

## 立方根
`cbrt(a);`

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

## ソート、大きい順
`sort(x.begin(), x.end(), greater<int>());`

## 逆順
`reverse(x.begin(), x.end());`

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
`(a+b-1) / b;`

## 該当の配列位置特定
```
auto it = find(ALL(week), S);
int i = distance(week.begin(), it);
```

## set
```
set<int> si;
si.insert(x);
```

## pair
構造化束縛を使うのは楽だけど、AtCoderはC++11なので使えない
```
pair<int, string> pair_return() {
    return {1, "aaa};
}
int main() {
    auto[a, b] = pair_return();
    // a, bにそれぞれ代入されている
}
```
よってこちらの昔ながらの使い方をする必要がある
```
pair<int, int> pii;
pii = (make_pair(1, 0));

pair<int, string> pis (0, "str");
// pis.second => "str"
// get<0>(pii) => 1

string S;
int N;
tie(N, S) = pis;
// N = 0
// S = "str"
```
