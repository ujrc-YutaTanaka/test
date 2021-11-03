# 初期設定

## 1. Gitのダウンロード
[こちら](https://git-scm.com/)よりインストーラをダウンロードし、インストールします。

## 2. インストールの確認
下記をコマンドプロンプトで実行し、インストールできていることを確認します。
正常にインストールできている場合、Gitのバージョン情報が表示されます。
```bash
git --version
```

## 3. Gitの設定
下記をコマンドプロンプトで実行します。
**{}内は環境に合わせて置き換えてください。**
```bash
git config --global user.name {ユーザ名}
git config --global user.email {メールアドレス}
git config --global http.proxy http://{インターネット利用時に入力するユーザ名}:{インターネット利用時に入力するパスワード}@{プロキシサーバURL}:{プロキシサーバポート番号}
git config --global https.proxy http://{インターネット利用時に入力するユーザ名}:{インターネット利用時に入力するパスワード}@{プロキシサーバURL}:{プロキシサーバポート番号}
```

## 4. 動作確認
下記をコマンドプロンプトで実行します。
```bash
cd C:\Users\{PCのユーザ名}\Desktop
git clone https://github.com/ujrc-YutaTanaka/test.git
```
デスクトップに"test"フォルダが作成され、中にコードが保存されているなら動作確認完了です。"test"フォルダは削除しても問題ありません。

## 5. 拡張
Visual Studio Codeを使用するとGitコマンドを使用することなく、GUIで操作可能になります。Gitを簡単に扱えるようになるため、おすすめです。

# 参考リンク
[Git初期設定](https://git-scm.com/book/ja/v2/Git-%E3%81%AE%E3%82%AB%E3%82%B9%E3%82%BF%E3%83%9E%E3%82%A4%E3%82%BA-Git-%E3%81%AE%E8%A8%AD%E5%AE%9A) <br>
[Git Proxy設定](https://stackoverflow.com/questions/18356502/github-failed-to-connect-to-github-443-windows-failed-to-connect-to-github) <br>
[Gitコマンドまとめ](https://qiita.com/kohga/items/dccf135b0af395f69144)
