/*
■演習6-2
三つのint型引数a, b, cの最小値を求める関数minを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
三つのint型引数a, b, cの最小値を求めて返す関数
@param argument1st 引数a
@param argument2nd 引数b
@param argument3rd 引数c
@return 三つの引数のうち最も小さい値と等しいint型の値
@author Kenta Yamamoto
@since 2018-10-01
*/

int getMinimum(int argument1st, int argument2nd, int argument3rd) {

	// 最小値を格納する変数を定義
	int minimumInt = 0;

	// 引数aと引数bのうち小さいほうを代入
	minimumInt = (argument1st < argument2nd ? argument1st : argument2nd);

	// aとbの小さいほうと、引数cのうち小さいほうを代入
	minimumInt = (minimumInt < argument3rd ? minimumInt : argument3rd);

	// 最小値を返却
	return minimumInt;
}

// main関数の定義
int main() {

	// 入力値を格納する変数を定義
	int inputInt1st = 0; // 一つ目
	int inputInt2nd = 0; // 二つ目
	int inputInt3rd = 0; // 三つ目

	// 説明メッセージを出力
	cout << "三つのint型引数a, b, cの最小値を求めて返します。\n";

	// 入力を促す
	cout << "整数a：";

	// 入力値を変数に格納
	cin >> inputInt1st;

	// 入力を促す
	cout << "整数b：";

	// 入力値を変数に格納
	cin >> inputInt2nd;

	// 入力を促す
	cout << "整数c：";

	// 入力値を変数に格納
	cin >> inputInt3rd;

	// 入力値を関数に渡し、返却値を出力
	cout << getMinimum(inputInt1st, inputInt2nd, inputInt3rd);
}