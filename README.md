# 概要

## まずは

- とりあえず、以下で動くようになる
  - wsl と vscode と g++を入れる
  - sshkey, git, github 接続
  - g++ hoge.cpp
  - ./a.out

## 今後

- コンパイルオプション
- スニペット
- ライブラリ

## 参考

- evima さんの動画に沿って環境構築
- 細かいところは以下に合わせて修正
  - <https://iconcreator.hatenablog.com/entry/2021/09/19/200000>
- 主な作業
  - vscode wsl
  - wsl2 ubuntu
  - .bashrc

## vscode + mingw の方法

- 参考
  - <https://code.visualstudio.com/docs/cpp/config-mingw>
- 手順
  - msys2 をインストール
  - path を通す（システム環境変数）
  - git bash を開きなおし、g++ --version で確認
  - 実行は g++ hello.cpp のように実施する
  - ×：#include <bits/stdc++.h>でエラー

## scoop,wslの共存

- ctrl + p ⇒ > c/c++: config~とかで設定を開く
- linux, win両方のconfigを作っておく
- 環境に応じて、> c/c++: select config~で選択を変える
