/*
■演習6-10
「正の整数値：」と表示して、キーボードから正の整数値を読み込んで、その値を返却する関数read_pintを作成せよ。
0や負の値が入力されたら再入力させること。右の例であれば15を返却する。
int read_pint();
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
キーボードから正の整数値を読み込んで、その値を返却する関数。
ただし、0や負の値が入力されたら再入力させる
@param なし
@return returnPositiveInt 返却する正の整数
@author Kenta Yamamoto
@since 2018-10-02
*/
int readPositiveInt() {

	// 返却値を定義
	int returnPositiveInt = 0;

	// 正の整数値が入力されるまで繰り返し
	do {

		// 入力を促す
		cout << "正の整数値：";

		// 入力値を格納
		cin >> returnPositiveInt;

	// 入力値が0以下なら繰り返し
	} while (returnPositiveInt <= 0);

	// 正の整数値を返却
	return returnPositiveInt;
}

// main関数の定義
int main() {

	// 関数を呼び出し、返却値を出力
	cout << "返却された値は：" << readPositiveInt() << '\n';
}