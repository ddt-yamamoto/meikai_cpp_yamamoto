/*
■演習9-5
配列の全要素の最小値を求める関数テンプレートを作成せよ。

	template <class Type> Type minof(const Type a[], int n);

なお、最も小さい文字列を求められるようにするために、
const char* 型に明示的に特殊化したものをあわせて作成すること。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列処理

// 名前空間の利用宣言
using namespace std;

/**
*配列の全要素の最小値を求める関数テンプレート
*@param a 配列
*@param n 配列の要素数
*@return returnMinimum 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-16
*/
template <class Type> Type minof(const Type a[], int n) {

	// 配列の先頭要素で返却値を初期化
	Type returnMinimum = a[0];

	// 配列の要素数だけループ
	for (int countIndex = 0; countIndex < n; countIndex++) {

		// 要素を次々に比較し、最小値を更新する
		returnMinimum = returnMinimum < a[countIndex] ? returnMinimum : a[countIndex];
	}
	// 求めた最小値を返却
	return returnMinimum;
}

/**
*配列の全要素の最小値を求める関数テンプレート(const char*用に特殊化)
*@param a 文字列
*@param n 文字列の長さ
*@return returnMinimum 求めた最小値
*@author Kenta Yamamoto
*@since 2018-10-16
*/
template <> const char* minof<const char*>(const char* const a[], int n) {

	// 配列の先頭要素で返却値を初期化
	const char* returnMinimum = a[0];

	// 配列の要素数だけループ
	for (int countIndex = 0; countIndex < n; countIndex++) {

		// 文字列の比較用関数を用い、要素を次々に比較し、最小値を更新する
		returnMinimum = strcmp(returnMinimum, a[countIndex]) < 0 ? returnMinimum : a[countIndex];
	}
	// 求めた最小値を返却
	return returnMinimum;
}

// main関数を定義
int main() {

	// テスト用の配列の要素数を定義
	const int ARRAY_LENGTH = 4;

	// テスト用のint型配列を定義
	int sampleArrayInt[ARRAY_LENGTH] = { 5, 4, 20, 8 };

	// テスト用のconst char*型配列を定義
	const char* sampleArrayCharPointer[ARRAY_LENGTH] = { "DEF", "VWXYZ", "ABC", "G20" };

	// テンプレート関数に対してint型配列の引数と要素数を渡し、結果を出力
	cout << minof(sampleArrayInt, ARRAY_LENGTH) << '\n';

	// テンプレート関数に対してconst char*型配列の引数と要素数を渡し、結果を出力
	cout << minof(sampleArrayCharPointer, ARRAY_LENGTH) << '\n';
}