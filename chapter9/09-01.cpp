/*
■演習9-1
再帰呼び出しを用いずに、関数factorialを実現せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*nの階乗を求める関数
*@param n 階乗を求める正の整数
*@return returnFactorial 階乗した結果の整数
*@author Kenta Yamamoto
*@since 2018-10-16
*/
int factorial(int n) {

	// 0!の定義
	const int ZERO_FACTORIAL = 1;

	// 返却値の定義と、0!の値での初期化
	int returnFactorial = ZERO_FACTORIAL;

	// 引数nでカウンタ変数を初期化して、0になるまでデクリメントするループ
	for (int decrementalNumber = n; decrementalNumber > 0; decrementalNumber--) {
		
		// カウンタ変数を返却値に対して掛けていく
		returnFactorial *= decrementalNumber;
	}
	// 累乗の結果を返却
	return returnFactorial;
}

// main関数の定義
int main() {

	// テスト用の整数を定義
	int number = 5;

	// 関数に整数を渡し、結果を出力
	cout << factorial(number);
}