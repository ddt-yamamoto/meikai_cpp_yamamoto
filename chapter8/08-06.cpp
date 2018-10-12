/*
■演習8-6
文字列sに含まれる文字cの個数を返す関数strch_cntを作成せよ。
int strch_cnt(const char* s, char c);
たとえば、文字列sが"abcabca"で文字cが'a'であれば、返却するのは3である。
文字cが含まれない場合は0を返すこと。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列sに含まれる文字cの個数を返す関数
*@param s カウントの対象となる文字列
*@param c カウントする文字
*@return returnCount カウントした結果の数
*@author Kenta Yamamoto
*@since 2018-10-11
*/
int strch_cnt(const char* s, char c) {

	// カウント用の変数を定義
	int returnCount = 0;

	// 文字列の先頭から、ナル文字にあたるまで走査
	for (int countInt = 0; s[countInt]; countInt++) {

		// 同じ文字が見つかった場合
		if (s[countInt] == c) {

			// カウントをインクリメント
			returnCount++;
		}
	}
	// カウント結果を返却
	return returnCount;
}

// main関数を定義
int main() {

	// カウントの対象となる文字列を定義
	const char* charArray = "abcabca";

	// カウントする文字を定義
	const char charSearch = 'a';

	// 文字列の先頭のポインタと文字を関数に渡す。返り値をそのまま出力する。
	cout << strch_cnt(charArray, charSearch);
}