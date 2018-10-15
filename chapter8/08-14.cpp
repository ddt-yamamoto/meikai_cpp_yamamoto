/*
■演習8-14
文字列sの並びを反転する関数str_rvsを作成せよ。

	char* str_rvs(char* s);

たとえば、文字列sが"abc"であれば、その文字列を"cba"に更新する。
受け取ったsの値をそのまま返却すること。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列

using namespace std;

/**
*文字列sの並びを反転する関数
*@param s 反転する文字列のポインタ
*@return s 受け取ったポインタそのもの
*@author Kenta Yamamoto
*@since 2018-10-15
*/
char* str_rvs(char* s) {

	// 文字列sの長さを取得
	const int STRING_LENGTH = strlen(s);

	// 長さをもとに、文字列中の最後の文字の添字を定義
	const int LAST_INDEX = STRING_LENGTH - 1;

	// 前後入れ替えのため、文字列の長さの半分(奇数の場合切り捨てで問題なし)の回数ループする
	for (int countIndex = 0; countIndex < (STRING_LENGTH / 2); countIndex++) {

		// 前からcountIndex番目の文字Aと、後ろからcountIndex番目の文字Bの入れ替え処理
		// 仮の入れ物にAを退避
		char temporaryChar = s[countIndex];

		// BをAに代入
		s[countIndex] = s[LAST_INDEX - countIndex];

		// 仮の入れ物に退避しておいたAをBに代入
		s[LAST_INDEX - countIndex] = temporaryChar;
	}
	// 文字列の先頭のポインタを返す
	return s;
}

// main関数の定義
int main() {

	// テスト用文字列の定義
	char s[] = "abcdefg";

	// 関数に文字列のポインタを渡し、返却値を出力
	cout << str_rvs(s);
}