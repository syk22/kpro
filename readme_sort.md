# 複雑なソート

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
auto cmp = [](Student x, Student y) => bool {
    return get<1>(x) > get<1>(y);
};

// 数学の点数が高い順にソート
sort(S.begin(), S.end(), cmp);
```
