/*
■演習8-5
文字列sの全文字を先頭から順に1行に1文字ずつ表示する関数putvを作成せよ。
void putv(const char* s);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列sの全文字を先頭から順に1行に1文字ずつ表示する関数
*@param s 文字列の先頭へのポインタ
*@author Kenta Yamamoto
*@since 2018-10-11
*/
void putv(const char* s) {

	// 文字列の先頭から、ナル文字にあたるまで走査
	for (int countInt = 0; s[countInt]; countInt++) {

		// 文字列sを構成する文字を、1行に1文字になるように出力
		cout << s[countInt] << '\n';
	}
}

// main関数を定義
int main() {

	// 文字列を定義
	const char* charArray = "ABC";

	// 文字列の先頭のポインタを関数に渡す
	putv(charArray);
}