/*
■演習8-7
文字列sに含まれる数字文字'0', '1', ... '9' の個数をカウントして、
各数字文字の個数をc[0], c[1], ... c[9] に格納する関数 count_digits を作成せよ。

void count_digits(const char* s, int c[]);

たとえば、文字列sが"W140S500L88"であれば、
c[0]に3を、c[1], c[4], c[5]に1を、c[8]に2を格納し、それ以外の要素には0を格納する。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列sに含まれる数字文字'0', '1', ... '9' の個数をカウントして、
*各数字文字の個数をc[0], c[1], ... c[9] に格納する関数
*@param s カウントの対象となる文字列
*@param c カウント結果を格納する配列
*@author Kenta Yamamoto
*@since 2018-10-11
*/
void count_digits(const char* s, int c[]) {

	// char型の'0'にあたる定数を定義
	const char ZERO_CHAR = '0';

	// 文字列の先頭から、ナル文字にあたるまで走査
	for (int stringPosition = 0; s[stringPosition]; stringPosition++) {

		// 注目している文字を表すchar型の整数と、'0'を表すchar型の整数との差を求め、int型変数を定義
		int digitInt = static_cast<int>(s[stringPosition] - ZERO_CHAR);

		// この差が0～9の場合は、注目している文字は、差の数字そのままの数字文字である
		if (digitInt >= 0 && digitInt <= 9) {

			// 結果格納用配列の当該位置の要素に1カウントする
			c[digitInt]++;
		}
	}
}

// main関数を定義
int main() {

	// カウントする数字文字の個数(種類数)を定義
	const int DIGIT_NUMBER = 10;

	// カウントの対象となる文字列を定義
	const char* charArray = "W140S500L88";

	// カウント結果を格納する配列を定義
	int c[DIGIT_NUMBER] = { 0 };

	// 文字列の先頭のポインタと結果格納用の配列の先頭ポインタを関数に渡す
	count_digits(charArray, c);

	// 結果格納用配列cを走査
	for (int countInt = 0; countInt < DIGIT_NUMBER; countInt++) {

		// 結果の出力
		cout << "c[" << countInt << "] = " << c[countInt] << '\n';
	}
}