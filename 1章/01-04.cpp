/*
■演習1-4
右に示すように、1行に1文字ずつ名前を表示するプログラムを作成せよ。
表示するのは、著者の名前ではなく、自分の名前とすること。
*/

// iostreamライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){

	// 縦に表示するため、1文字ごとに改行コードを挟んで、標準出力ストリームに文字列を挿入
	cout << "山\n本\n健\n太\n";
}
