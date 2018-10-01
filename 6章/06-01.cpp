/*
■演習6-1
受け取ったint型引数の値nが負であれば-1を返却し、0であれば0を返却し、正であれば1を返却する関数sign_ofを作成せよ。
以下の\/**\/の部分を作成すること。
int sign_of(int n){\/*  …  *\/}
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
受け取ったint型引数の値nが負であれば-1を返却し、0であれば0を返却し、正であれば1を返却する関数
@param argumentInt 引数
@return 引数が負のとき-1, 0のとき0, 正のとき1
@author Kenta Yamamoto
@since 2018/10/01
*/

// 受け取ったint型引数の値nが負であれば-1を返却し、0であれば0を返却し、正であれば1を返却する関数sign_ofの定義
int sign_of(int argumentInt) {

	// 引数が負のとき
	if (argumentInt < 0) {

		// -1を返却
		return -1;
	}

	// 引数が0のとき
	else if (argumentInt == 0) {

		// 0を返却
		return 0;
	}

	// 引数が正のとき
	else {

		// 0を返却
		return 1;
	}
}

// main関数の定義
int main() {

	// 入力値を格納する変数を定義
	int inputInt = 0;

	// 説明メッセージを出力
	cout << "入力した整数が正、負、または0であるかを判定します。正なら1、負なら-1、0なら0を返します。\n";

	// 入力を促す
	cout << "整数：";

	// 入力値を変数に格納
	cin >> inputInt;

	// 入力値を関数に渡し、返却値を出力
	cout << sign_of(inputInt);
}