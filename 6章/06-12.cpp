/*
■演習6-12
b以上a以下の全整数の和を求める関数sumを作成せよ。なお、bに対する実引数が省略されて呼び出された場合は、bを1とみなして合計を求めること。
int sum(int a, int b);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
第二引数b以上、第一引数a以下の全整数の和を求める関数
@param argumentTo 第一引数a
@param argumentFrom 第二引数b
@return returnSummary 求めた和
@author Kenta Yamamoto
@since 2018-10-02
*/
// 第二引数に対し、デフォルト実引数1を与えておく
int numberToNumberSummary(int argumentTo, int argumentFrom = 1) {

	// 返却値を0で初期化
	int returnSummary = 0;

	// argumentFrom から argumentTo までループ
	for (; argumentFrom <= argumentTo; argumentFrom++) {

		// argumentFromの値を今までの合計値に足していく
		returnSummary += argumentFrom;
	}

	// 求めた和を返却
	return returnSummary;
}

// main関数の定義
int main() {

	const int TEST_TO = 10;  // テスト用の定数を定義
	const int TEST_FROM = 5; // テスト用の定数を定義

	int inputTo = TEST_TO;     // 関数に渡す変数をテスト用定数で初期化
	int inputFrom = TEST_FROM; // 関数に渡す変数をテスト用定数で初期化

	// 説明メッセージを出力
	cout << "b以上a以下の全整数の和を求めます。\n";

	// 説明メッセージを出力
	cout << "bは" << TEST_FROM << ", aは" << TEST_TO << "とします。\n";

	// 引数を省略せず、aもbも渡した場合の結果の出力
	cout << "引数を省略しなかった場合：" << numberToNumberSummary(inputTo, inputFrom) << '\n';

	// 引数を省略して、aだけを渡した場合の結果を出力
	cout << "引数を省略した場合      ：" << numberToNumberSummary(inputTo) << '\n';
}