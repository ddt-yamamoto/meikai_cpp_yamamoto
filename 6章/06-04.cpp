/*
■演習6-4
半径rの円の面積を求めて返却する関数circ_areaを作成せよ。円周率は3.14とする。
double circ_area(double r);
※これ以降の問題文では、作成する関数の関数宣言を示します。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// 関数宣言を行う
double getCircleArea(double);

// main関数の定義
int main() {

	// 入力値を格納する変数を定義
	double inputRadius = 0;

	// 説明メッセージを出力
	cout << "半径を入力すると、円の面積を求めて返します。\n";

	// 入力を促す
	cout << "半径：";

	// 入力値を変数に格納
	cin >> inputRadius;

	// 入力値を関数に渡し、返却値を出力
	cout << getCircleArea(inputRadius);
}

/**
半径rの円の面積を求めて返却する関数
@param argumentRadius 引数 半径を指す
@return 円の面積を表すint型の値
@author Kenta Yamamoto
@since 2018-10-01
*/

double getCircleArea(double argumentRadius) {

	// 円周率の定義
	const double PI_DOUBLE = 3.14;

	// 返却用変数の定義
	double returnArea = 0;

	// 円の面積の計算
	returnArea = argumentRadius * argumentRadius * PI_DOUBLE;

	// 円の面積を返却
	return returnArea;
}