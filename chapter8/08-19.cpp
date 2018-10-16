/*
■演習8-19
文字列として表された実数値を、double型の実数に変換した値を返す関数str2doubleを作成せよ。

	double str2double(const char* s);

たとえば、文字列sが"13.5"であれば、返却するのは実数値13.5である。
sが実数として解釈できないような文字列である場合には、0.0を返すこと。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列
#include <cctype> // 文字種テスト関数

// 名前空間stdの利用宣言
using namespace std;

// 文字数字の'0'にあたるchar型の値を定数で定義
const char ZERO_CHAR = '0';

// 文字の'.'にあたるchar型の値を定数で定義
const char PERIOD_CHAR = '.';

/**
*文字列が実数として読めるかのチェック関数
*@param s 文字列
*@return returnBool TRUE/FALSE
*@author Kenta Yamamoto
*@since 2018-10-16
*/
bool checkRealNumber(const char* s) {

	// 返却値を定義
	bool returnBool = true;

	// 小数点の数を数える変数を定義
	int periodCount = 0;

	// 文字列を走査
	for (int countIndex = 0; s[countIndex]; countIndex++) {

		// 着目中の文字が、char型の数字文字でない場合
		if (!isdigit(s[countIndex])) {

			// 小数点でもない場合、または2個目の小数点(12.4.5など)であった場合
			if (s[countIndex] != PERIOD_CHAR || ++periodCount > 1) {

				// 実数としては読めなくなるので、返却値にfalseを代入
				returnBool = false;
			}
		}
	}
	// チェック結果を返却
	return returnBool;
}

/**
*一桁の正の整数を、指定の桁数になるまで10倍していく関数
*@param partialInt 一桁の正の整数
*@param digitNumber 桁数
*@author Kenta Yamamoto
*@since 2018-10-16
*/
int scaleUpInteger(int partialInt, int digitNumber) {

	// 桁数より1少ない回数回数ループ(例:4桁=1000の位ならば10を3回を掛ける)
	for (int countInt = 1; countInt < digitNumber; countInt++) {

		// 0～9の数字を格納した変数を10倍する
		partialInt *= 10;
	}
	// 桁上げした結果の整数を返却
	return partialInt;
}

/**
*文字列として表された実数値を、double型の実数に変換した値を返す関数
*@param s 文字列
*@return returnDouble 変換した実数値
*@author Kenta Yamamoto
*@since 2018-10-16
*/
double str2double(const char* s) {

	// 返却用変数の定義
	double returnDouble = 0.0;

	// 引数の文字列が実数として読めるかのチェックを先に行う
	if (!checkRealNumber(s)) {

		// チェックに通らなかった場合、0.0を返却して終了
		return returnDouble;
	}
	// 受け取った文字列の長さを定数で定義
	const int STRING_SIZE = static_cast<int>(strlen(s));

	// 文字列に'.'が含まれる場合の位置を格納する変数を定義
	int periodPoint = 0;

	// 整数部を格納する変数を定義
	int intPart = 0;

	// 小数部を格納する変数を定義
	double decimalPart = 0;

	// 文字列の最後もしくは'.'に当たるまで走査
	for (int countIndex = 0; countIndex < STRING_SIZE && s[countIndex] != PERIOD_CHAR; countIndex++) {

		// 文字列中の1文字をint型に変換
		int partialInt = static_cast<int>(s[countIndex] - ZERO_CHAR);

		// 1桁の数字を桁に応じた数にするための関数を呼び出し、結果を整数部に足す
		intPart += scaleUpInteger(partialInt, (STRING_SIZE - countIndex));

		// 暫定的な小数点の位置を、次の文字の位置にしておく
		periodPoint = countIndex + 1;
	}
	// 整数部を小数点の位置に応じて実際の値に戻す
	// 文字列全体の長さと、小数点の位置に応じた回数だけ桁下げを実行
	for (int countInt = 0; countInt < STRING_SIZE - periodPoint; countInt++) {

		// 10で割って桁を下げる
		intPart /= 10;
	}
	// 小数部の処理
	// 小数点の次の要素から開始し、文字列末尾までのループ
	for (int countIndex = periodPoint + 1; countIndex < STRING_SIZE; countIndex++) {

		// 文字列中の1文字をint型に変換
		int partialInt = static_cast<int>(s[countIndex] - ZERO_CHAR);

		// 1桁の数字を桁に応じた数にするための関数を呼び出し、結果をdouble型に変換して小数部に足す
		decimalPart += static_cast<double>(scaleUpInteger(partialInt, (STRING_SIZE - countIndex)));
	}
	// 小数部を小数点の位置に応じて実際の値に戻す
	// 文字列全体の長さと、小数点の位置に応じた回数だけ桁下げを実行
	for (int countInt = 1; countInt < STRING_SIZE - periodPoint; countInt++) {

		// 10で割って桁を下げる
		decimalPart /= 10;
	}
	// 桁を修正済みの整数部と小数部を加算
	returnDouble = intPart + decimalPart;

	// 結果を返却
	return returnDouble;
}

// main関数を定義
int main() {

	// テスト用の文字列を定義
	char s1[] = "123"; // s1 想定する実数
	char s2[] = ".789"; // s2 想定する実数
	char s3[] = "40.96"; // s3 想定する実数
	char s4[] = "3A2.B"; // s4 数字と解釈不能なもの
	char s5[] = "102.4.5"; // s4 数字と解釈不能なもの

	// 文字列を関数に渡し、結果を出力
	cout << str2double(s1) << '\n'; // s1
	cout << str2double(s2) << '\n'; // s2
	cout << str2double(s3) << '\n'; // s3
	cout << str2double(s4) << '\n'; // s4
	cout << str2double(s5) << '\n'; // s5
}