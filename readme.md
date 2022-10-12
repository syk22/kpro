# Kpro

AtCoder・アルゴ式練習リポジトリ

AtCoder([AtCoder Problems](https://kenkoooo.com/atcoder/#/table/syk2020))  

[アルゴ式](https://algo-method.com/tasks)


## test / atcoder cli

実行は上部の▷マークから `Run Code`

`a.out` がコンパイルしたファイル  
実行時は `./a.out`

`acc new abc216` これで新しいファイルを作っていける  
詳しくは[チュートリアルサイト](http://tatamo.81.la/blog/2018/12/07/atcoder-cli-tutorial/)で

カレントディレクトリを移動して `acc add` これで違うレベルの問題を追加できる  

`acc add --template cpp` と引数をつけることでテンプレートが実行できるように修正済み

`oj t` 該当フォルダにて実行すると、テストケースを走らせることが可能
→自前のテストケースも簡単に作れる

cd `acc config-dir`  
で、テンプレートファイル置き場へ  
`~/Library/Preferences/atcoder-cli-nodejs`

`acc config` で色々変更済み

```
oj-path: /usr/local/var/pyenv/shims/oj
default-contest-dirname-format: {ContestID}
default-task-dirname-format: {tasklabel}
default-test-dirname-format: test
default-task-choice: all
default-template: 
```

atcoder-cliについて詳細は下記参照  
https://github.com/Tatamo/atcoder-cli#provisioning-template

## 各readme
[readme_func](readme_func.md)  
忘れがちな関数まとめ

[readme_a](readme_a.md)  
[readme_b](readme_b.md)  
A問題B問題振り返り

最近はアルゴ式でDPとグラフ実装中
