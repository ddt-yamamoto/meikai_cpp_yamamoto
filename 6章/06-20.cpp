/*
■演習6-20
二つのint型整数a, bの最小値、三つのint型整数a, b, cの最小値を求める、以下に示す多重定義された関数群を作成せよ。
int min(int a, int b);
int min(int a, int b, int c);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*二値の最小値を求めて返却する関数
*@param argumentInt1st 比較対象となる整数の一つ目
*@param argumentInt2nd 比較対象となる整数の二つ目
*@return returnMinimumInt 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
int getMinimum(int argumentInt1st, int argumentInt2nd) {

	// 第一引数と第二引数を条件演算子によって比較し、小さいほうの値で返却用変数を初期化
	int returnMinimum = (argumentInt1st < argumentInt2nd ? argumentInt1st : argumentInt2nd);

	// 最小値を返却
	return returnMinimum;
}

/**
*三値の最小値を求めて返却する関数
*@param argumentInt1st 比較対象となる整数の一つ目
*@param argumentInt2nd 比較対象となる整数の二つ目
*@param argumentInt3rd 比較対象となる整数の三つ目
*@return returnMinimumInt 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-03
*/
int getMinimum(int argumentInt1st, int argumentInt2nd, int argumentInt3rd) {

	// 最小値をいったん第一引数で初期化
	int returnMinimum = argumentInt1st;

	// ここまででの最小値と、第二引数を比較
	if (argumentInt2nd < returnMinimum) {

		// 小さいほうを新たな最小値にする
		returnMinimum = argumentInt2nd;
	}

	// ここまででの最小値と、第三引数を比較
	if (argumentInt3rd < returnMinimum) {

		// 小さいほうを新たな最小値にする
		returnMinimum = argumentInt3rd;
	}

	// 最終的に最小値とされた値を返却
	return returnMinimum;
}

// main関数を定義
int main() {

	// 入力値を格納するための変数を宣言
	int inputInt1st; // a
	int inputInt2nd; // b
	int inputInt3rd; // c

	// 入力を促す
	cout << "aの値：";

	// 入力値を変数に格納
	cin >> inputInt1st;

	// 入力を促す
	cout << "bの値：";

	// 入力値を変数に格納
	cin >> inputInt2nd;

	// 二値の最大値を求める。多重定義してある関数の一方が自動判別によって使用され、返却値を出力
	cout << "aとbの最小値は" << getMinimum(inputInt1st, inputInt2nd) << "です\n";

	// 入力を促す
	cout << "cの値：";

	// 入力値を変数に格納
	cin >> inputInt3rd;

	// 三値の最大値を求める。多重定義してある関数の一方が自動判別によって使用され、返却値を出力
	cout << "a, b, cの最小値は" << getMinimum(inputInt1st, inputInt2nd, inputInt3rd) << "です\n";
}