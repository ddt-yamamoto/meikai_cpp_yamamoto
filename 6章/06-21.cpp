/*
■演習6-21
short型整数xの絶対値、int型整数xの絶対値、…を求める、以下に示す多重定義された関数群を作成せよ。

short absolute(short x)
int absolute(int x)
long absolute(long x)
float absolute(float x)
double absolute(double x)
long double absolute(long double x)
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*引数の絶対値を求めて返却する関数
*@param argumentSigned 絶対値を求めたい数値
*@return returnMinimumInt 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
short getAbsolute(short argumentSigned) {

	// 返却用変数を引数で初期化
	short returnAbsolute = argumentSigned;

	// 返却値が負の場合
	if (returnAbsolute < 0) {

		// 符号を反転させる
		returnAbsolute = - returnAbsolute;
	}

	// 絶対値を返却
	return returnAbsolute;
}

/**
*引数の絶対値を求めて返却する関数
*@param argumentSigned 絶対値を求めたい数値
*@return returnMinimumInt 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
int getAbsolute(int argumentSigned) {

	// 返却用変数を引数で初期化
	int returnAbsolute = argumentSigned;

	// 返却値が負の場合
	if (returnAbsolute < 0) {

		// 符号を反転させる
		returnAbsolute = - returnAbsolute;
	}

	// 絶対値を返却
	return returnAbsolute;
}

/**
*引数の絶対値を求めて返却する関数
*@param argumentSigned 絶対値を求めたい数値
*@return returnMinimumInt 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
long getAbsolute(long argumentSigned) {

	// 返却用変数を引数で初期化
	long returnAbsolute = argumentSigned;

	// 返却値が負の場合
	if (returnAbsolute < 0) {

		// 符号を反転させる
		returnAbsolute = - returnAbsolute;
	}

	// 絶対値を返却
	return returnAbsolute;
}

/**
*引数の絶対値を求めて返却する関数
*@param argumentSigned 絶対値を求めたい数値
*@return returnMinimumInt 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
float getAbsolute(float argumentSigned) {

	// 返却用変数を引数で初期化
	float returnAbsolute = argumentSigned;

	// 返却値が負の場合
	if (returnAbsolute < 0) {

		// 符号を反転させる
		returnAbsolute = - returnAbsolute;
	}

	// 絶対値を返却
	return returnAbsolute;
}

/**
*引数の絶対値を求めて返却する関数
*@param argumentSigned 絶対値を求めたい数値
*@return returnMinimumInt 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
double getAbsolute(double argumentSigned) {

	// 返却用変数を引数で初期化
	double returnAbsolute = argumentSigned;

	// 返却値が負の場合
	if (returnAbsolute < 0) {

		// 符号を反転させる
		returnAbsolute = - returnAbsolute;
	}

	// 絶対値を返却
	return returnAbsolute;
}

/**
*引数の絶対値を求めて返却する関数
*@param argumentSigned 絶対値を求めたい数値
*@return returnMinimumInt 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
long double getAbsolute(long double argumentSigned) {

	// 返却用変数を引数で初期化
	long double returnAbsolute = argumentSigned;

	// 返却値が負の場合
	if (returnAbsolute < 0) {

		// 符号を反転させる
		returnAbsolute = - returnAbsolute;
	}

	// 絶対値を返却
	return returnAbsolute;
}

// main関数を定義
int main() {

	// 入力値を格納する変数を宣言
	int inputSignedInt;

	// 入力を促す
	cout << "絶対値を求めたい整数：";

	// 入力値を格納
	cin >> inputSignedInt;

	// 入力値をそれぞれの型にキャストして、その値で変数を初期化
	short signedShort = short(inputSignedInt); // short
	int signedInt = int(inputSignedInt); // int
	long signedLong = long(inputSignedInt); // long
	float signedFloat = float(inputSignedInt); // float
	double signedDouble = double(inputSignedInt); // double
	long double signedLongDouble = long double(inputSignedInt); // long double

	// 多重定義した関数にそれぞれの型の値を渡して、返却値を出力
	cout << "short型整数" << signedShort << "の絶対値は" << getAbsolute(signedShort) << "です\n"; // short
	cout << "int型整数" << signedInt << "の絶対値は" << getAbsolute(signedInt) << "です\n"; // int
	cout << "long型整数" << signedLong << "の絶対値は" << getAbsolute(signedLong) << "です\n"; // long
	cout << "float型整数" << signedFloat << "の絶対値は" << getAbsolute(signedFloat) << "です\n"; // float
	cout << "double型整数" << signedDouble << "の絶対値は" << getAbsolute(signedDouble) << "です\n"; // double
	cout << "long double型整数" << signedLongDouble << "の絶対値は" << getAbsolute(signedLongDouble) << "です\n"; // long double
}