/*
■演習8-18
文字列として表された整数値を、int型の整数値に変換した値を返す関数str2intを作成せよ。

	int str2int(const char* s);

たとえば、文字列sが"138"であれば、返却するのは整数値138である。
sが整数として解釈できないような文字列である場合には、0を返すこと。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列として表された整数値を、int型の整数値に変換した値を返す関数
*@param s 文字列
*@return returnInt 変換した整数値
*@author Kenta Yamamoto
*@since 2018-10-15
*/
int str2int(const char* s) {

	// 受け取った文字列の長さを定数で定義
	const int STRING_SIZE = static_cast<int>(strlen(s));

	// 文字数字の'0'にあたるchar型の値を定数で定義
	const char ZERO_CHAR = '0';

	// 返却用変数の定義
	int returnInt = 0;

	// 文字列の最後まで走査
	for (int countIndex = 0; s[countIndex]; countIndex++) {

		// 文字列の長さ(桁数)と現在の着目位置から、
		// 現在の桁数(例:8文字の数字文字の3文字目ならば、8桁の数字と見たとき6桁目となる)を定義
		int digitNumber = STRING_SIZE - countIndex;

		// 文字列中の1文字を数字文字と仮定して、int型変数に代入
		int partialInt = static_cast<int>(s[countIndex] - ZERO_CHAR);

		// 変数の値が0から9だったとき
		if (partialInt >= 0 && partialInt <= 9) {

			// 桁数より1少ない回数回数ループ(例:4桁=1000の位ならば10を3回を掛ける)
			for (int countInt = 1; countInt < digitNumber; countInt++) {
				
				// 0～9の数字を格納した変数を10倍する
				partialInt *= 10;
			}
			// 桁に応じて計算した値を、返却値に加算する
			returnInt += partialInt;
		}
		// それ以外のとき(文字列中の文字が数字文字ではなかったとき)
		else {
			// 返却値を0で上書き
			returnInt = 0;

			// ループを抜ける
			break;
		}
	}
	// 結果を返却
	return returnInt;
}

// main関数を定義
int main() {

	// テスト用の文字列を定義
	char s1[] = "123"; // s1 想定する数字文字
	char s2[] = "4096"; // s2 0が含まれるもの(問題なし)
	char s3[] = "3A2B"; // s3 数字と解釈不能なもの

	// 文字列を関数に渡し、結果を出力
	cout << str2int(s1) << '\n'; // s1
	cout << str2int(s2) << '\n'; // s2
	cout << str2int(s3) << '\n'; // s3
}