/*
■演習9-4
二値の最小値を求める関数テンプレートminofを作成せよ。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列処理

// 名前空間の利用宣言
using namespace std;

/**
*二値の最小値を求める関数テンプレート
*@param argumentX
*@param argumentY
*@return argumentX/argumentY
*@author Kenta Yamamoto
*@since 2018-10-16
*/
template <class Type> Type minof(Type argumentX, Type argumentY) {

	// xとyを比較して小さいほうを返す
	return argumentX < argumentY ? argumentX : argumentY;
}

/**
*二値の最小値を求める関数テンプレート(const char*用に特殊化)
*@param argumentX
*@param argumentY
*@return argumentX/argumentY
*@author Kenta Yamamoto
*@since 2018-10-16
*/
template <> const char* minof<const char*>(const char* argumentX, const char* argumentY) {

	// strcmp関数を使用し、xとyを比較して小さいほうを返す
	return strcmp(argumentX, argumentY) < 0 ? argumentX : argumentY;
}

// main関数を定義
int main() {

	// テスト用のint型変数を定義
	int sampleIntX = 20; // 引数x
	int sampleIntY = 10; // 引数y

	// テスト用のchar*型文字列を定義
	const char* charPointerX = "ABC"; // 引数x
	const char* charPointerY = "ZYX"; // 引数y

	// テンプレート関数に対してint型の引数を渡し、結果を出力
	cout << minof(sampleIntX, sampleIntY) << '\n';

	// テンプレート関数に対してchar*型の引数を渡し、結果を出力
	cout << minof(charPointerX, charPointerY) << '\n';
}