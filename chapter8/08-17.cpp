/*
■演習8-17
二つの文字列s1とs2の内容をそっくり入れ替える関数swap_stringを作成せよ。

	void swap_string(char* s1, char* s2);

たとえば、配列pとqに文字列"ABCDEF"と"XYZ"が格納されていて、swap_string(p, q)と呼び出した場合、
関数から戻ってきたときの配列pの文字列は"XYZ"となって、配列qの文字列は"ABCDEF"となる。
*/

//#define _CRT_SECURE_NO_WARNINGS

#include <iostream> // 入出力
#include <cstring> // 文字列

// 名前空間stdの利用宣言
using namespace std;

// 文字列を格納する配列の長さをファイル有効範囲の定数で定義
const int STRING_SIZE = 36;

/**
*二つの文字列s1とs2の内容をそっくり入れ替える関数
*@param s1 文字列s1
*@param s2 文字列s2
*@author Kenta Yamamoto
*@since 2018-10-15
*/
void swap_string(char* s1, char* s2) {

	// 仮の入れ物の文字列を定義
	char s3[STRING_SIZE];

	// strcpy_s関数を用いて、値入れ替えの手順を行う
	strcpy_s(s3, STRING_SIZE, s1); // s1の文字列をs3に保存
	strcpy_s(s1, STRING_SIZE, s2); // s2をs1に代入
	strcpy_s(s2, STRING_SIZE, s3); // 保存していたs1の文字列をs2に代入
}

// main関数の定義
int main() {

	// テスト用の文字列の定義
	char s1[STRING_SIZE] = "ABCDEF";

	// テスト用の文字列の定義
	char s2[STRING_SIZE] = "XYZ";

	// 文字列を関数に渡す
	swap_string(s1, s2);

	// 入れ替え後のそれぞれの文字列を出力
	cout << s1 << '\n'; // 文字列s1
	cout << s2 << '\n'; // 文字列s2
}