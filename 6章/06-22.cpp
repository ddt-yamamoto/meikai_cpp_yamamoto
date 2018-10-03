/*
■演習6-22
xの2乗を求めるインライン関数、3乗を求めるインライン関数を作成せよ。
inline double square(double x);
inline double cube(double x);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*引数の2乗を求めて返すインライン関数
*@param argumentSide 2乗する対象となる値
*@return returnSquare 2乗した結果の値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
inline double getSquare(double argumentSide) {

	// 返却値を宣言して、引数を2乗した値で初期化
	double returnSquare = argumentSide * argumentSide;

	// 値を返却
	return returnSquare;
}

/**
*引数の3乗を求めて返すインライン関数
*@param argumentSide 3乗する対象となる値
*@return returnCube 3乗した結果の値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
inline double getCube(double argumentSide) {

	// 返却値を宣言して、引数を3乗した値で初期化
	double returnCube = argumentSide * argumentSide * argumentSide;

	// 値を返却
	return returnCube;
}

// main関数を定義
int main() {

	// 入力値を格納する変数を宣言
	double inputDouble;

	// 入力を促す
	cout << "2乗および3乗する値：";

	// 入力値を変数に格納
	cin >> inputDouble;

	// インライン関数で2乗して返却値を出力
	cout << "2乗値：" << getSquare(inputDouble) << '\n';

	// インライン関数で3乗して返却値を出力
	cout << "3乗値：" << getCube(inputDouble) << '\n';
}