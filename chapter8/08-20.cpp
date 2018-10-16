/*
■演習8-20
二つの文字列を指すポインタを交換する関数を作成せよ。
関数の仕様は自分で考えること。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*二つの文字列を指すポインタを交換する関数
*@param argumentPointerX 文字列Xの先頭を指すポインタのポインタ
*@param argumentPointerY 文字列Yの先頭を指すポインタのポインタ
*@author Kenta Yamamoto
*@since 2018-10-16
*/
void swapPointer(const char** argumentPointerX, const char** argumentPointerY) {

	// 仮の文字列を定義
	const char* temporaryString;

	// 仮の文字列の先頭を指すポインタのポインタを定義
	const char** temporaryPointer = &temporaryString;

	// 3値の交換を行う
	*temporaryPointer = *argumentPointerX; // Xを退避
	*argumentPointerX = *argumentPointerY; // XにYを代入
	*argumentPointerY = *temporaryPointer; // Yに退避しておいたXを代入
}

// main関数の定義
int main() {

	// サンプル用文字列を定義
	const char* sampleStringX = "ABC"; // 文字列X
	const char* sampleStringY = "XYZ"; // 文字列Y

	// 二つの文字列を指すポインタを交換する関数を呼び出し
	swapPointer(&sampleStringX, &sampleStringY);

	// はじめ文字列Xを指していたポインタを使って文字列Yを出力
	cout << sampleStringX << '\n';

	// はじめ文字列Yを指していたポインタを使って文字列Xを出力
	cout << sampleStringY << '\n';
}