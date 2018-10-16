/*
■演習8-16
文字列s内の数字文字を削除する関数strrmv_digitsを作成せよ。

	char* strrmv_digits(char* s);

たとえば、文字列sが"a1bc39d"であれば、その文字列を"abcd"に更新する。
受け取ったsの値をそのまま返却すること。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列s内の数字文字を削除する関数
*@param s 文字列s
*@return s 引数で受け取った文字列sの先頭ポインタそのまま
*@author Kenta Yamamoto
*@since 2018-10-15
*/
char* strrmv_digits(char* s) {

	// 文字列sの長さを定数で定義
	const int STRING_SIZE = strlen(s);

	// unsigned char型の'0'の値を定数として定義しておく
	const unsigned char ZERO_CHAR = '0';

	// 数字文字を削除した数(その分要素をずらすべき数)を保持するための変数の定義
	int shiftCount = 0;

	// 文字列sの末尾まで走査
	for (int countIndex = 0; s[countIndex]; countIndex++) {

		// 文字列sの着目中の文字をunsigned char型とみて、'0'との比較を行い、それが数字文字であるかどうかを判別するための変数に代入
		int digitCheck = static_cast<int>(static_cast<unsigned char>(s[countIndex]) - ZERO_CHAR);

		// 着目中の文字が数字文字の0～9であった場合
		if (digitCheck >= 0 && digitCheck <= 9) {

			// 削除カウンタを一つ増加させる
			shiftCount++;
		}
		// 数字文字ではなかった場合
		else {
			// 現在の削除カウンタ(削除したぶん前に詰めるべき数)と同じだけ、着目中の文字を前の要素にずらす
			s[countIndex - shiftCount] = s[countIndex];
		}
	}
	// 削除した数に応じて、文字列の後ろから除外するために適当な位置にナル文字を代入する。
	s[STRING_SIZE - shiftCount] = '\0';

	// 文字列sのポインタをそのまま返却する
	return s;
}

// main関数の定義
int main() {

	// サンプル用の文字列を定義
	char s[] = "a1bc39d";

	// 関数に文字列を渡して結果を出力
	cout << strrmv_digits(s);
}