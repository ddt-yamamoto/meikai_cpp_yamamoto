/*
■演習1-1
ヘッダ<iostream>をインクルードする指令が欠如していると、どうなるであろうか。
プログラムをコンパイルして検証せよ。
*/

// iostreamの内容を取り込むが、演習課題としてはここをコメントアウト
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){

	// 標準出力ストリームに文字列を挿入
	cout << "初めてのC++プログラム。\n";

	// 続けて、標準出力ストリームに文字列を追加挿入
	cout << "画面に出力しています。\n";
}

/*
■注釈
include無しではコンパイルエラーが出ることを確認済み
*/