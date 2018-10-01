/*
■演習6-3
三つのint型引数a, b, cの中央値を求める関数medを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
三つのint型引数a, b, cの中央値を求めて返す関数
@param argument1st 引数a
@param argument2nd 引数b
@param argument3rd 引数c
@return 三つの引数の中央値と等しいint型の値
@author Kenta Yamamoto
@since 2018-10-01
*/

int getMedian(int argument1st, int argument2nd, int argument3rd) {

	// 変数の入れ替えに使う一時受け皿用の変数を定義
	int temporaryInt = 0;

	// 戻り値(中央値)とする変数を定義
	int medianInt = 0;

	// 必ず引数a <= 引数bとなるようにする
	if (argument1st > argument2nd) {

		// 入れ替える必要がある場合、入れ替えの一連作業を行う
		// 引数aを退避
		temporaryInt = argument1st;

		// 引数aに引数bを代入
		argument1st = argument2nd;

		// 引数bに、退避しておいた引数aを代入
		argument2nd = temporaryInt;
	}

	// 大小に並べたとき引数cがどの位置に挟まるかを判定する
	// 引数cが最も小さい場合
	if (argument3rd < argument1st) {

		// 中央値は引数a
		medianInt = argument1st;
	}

	// 引数cが最も大きい場合
	else if (argument3rd > argument2nd) {

		// 中央値は引数b
		medianInt = argument2nd;
	}

	// それ以外の場合
	else {

		// 中央値は引数c
		medianInt = argument3rd;
	}

	// 中央値を返却
	return medianInt;
}

// main関数の定義
int main() {

	// 入力値を格納する変数を定義
	int inputInt1st = 0; // 一つ目
	int inputInt2nd = 0; // 二つ目
	int inputInt3rd = 0; // 三つ目

	// 説明メッセージを出力
	cout << "三つのint型引数a, b, cの中央値を求めて返します。\n";

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
	cout << getMedian(inputInt1st, inputInt2nd, inputInt3rd);
}