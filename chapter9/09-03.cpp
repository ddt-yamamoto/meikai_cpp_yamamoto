/*
■演習9-3
xの2乗を求める関数テンプレートsquareを作成せよ。

	template <class Type> Type square(Type x);
*/

#include <iostream> // 入出力

// 名前空間の利用宣言
using namespace std;

/**
*xの2乗を求める関数テンプレート
*@param x 2乗する値
*@return x 2乗した結果の値
*@author Kenta Yamamoto
*@since 2018-10-16
*/
template <class Type> Type square(Type x) {

	// xを2乗する
	x *= x;

	// xの値を返す
	return x;
}

// main関数を定義
int main() {

	// テスト用のint型変数xを定義
	int x = 6;

	// テンプレート関数に対してint型の引数を渡し、結果を出力
	cout << square(x);
}