/*
■演習5-13
本文で解説した2次元配列の初期化を、実際にプログラムを作成して確認せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 二次元配列の行数を定義
	const int LOW_NUMBER = 5;

	// 二次元配列の列数を定義
	const int COLUMN_NUMBER = 4;

	// 二次元配列を、初期化子を一部しか与えない歯抜け状態で定義
	int arrayInt[LOW_NUMBER][COLUMN_NUMBER] = { {0}, {2, 3}, {4, 5, 6, 7} };

	// 走査して出力をするため、行のループ
	for (int countLow = 0; countLow < LOW_NUMBER; countLow++) {

		// 列のループ
		for (int countColumn = 0; countColumn < COLUMN_NUMBER; countColumn++) {

			// 構成要素の値を出力
			cout << arrayInt[countLow][countColumn];
		}

		// 1行ごとに改行を出力
		cout << '\n';
	}
}

/*
■実行結果
0000
2300
4567
0000
0000
*/