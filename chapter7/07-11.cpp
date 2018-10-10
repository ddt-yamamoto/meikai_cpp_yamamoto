/*
■演習7-11
n行5列のint型2次元配列aの全構成要素の値を縦横に並べて表示する関数print2dを作成せよ。
void print2d(int a[][5], int n);
各構成要素がどのような値であっても、各列の数値の先頭(左端)がそろうように、最低限のスペースを空けること。
*/

#include <iostream> // 入出力
#include <iomanip> // 操作子

// 名前空間stdの利用宣言
using namespace std;

/**
*値渡しされた引数の整数型オブジェクトの桁数を返す関数。演算子'-'も一桁と数える。
*@param pointerInteger 桁数を数える対象の、整数型オブジェクト
*@return countDigit 演算子'-'も込みでの桁数を表す正の整数
*@author Kenta Yamamoto
*@since 2018-10-09
*/
int getDigit(int argumentInteger) {

	// 桁数を宣言し0で初期化
	int countDigit = 0;

	// 引数が負のとき
	if (argumentInteger < 0) {

		// 符号を反転させる
		argumentInteger = -argumentInteger;

		// マイナス記号の分、桁を一つ数える
		countDigit++;
	}
	// 引数を10で割り、その商を再び割る、を商が0になるまで繰り返し
	while (argumentInteger != 0) {

		// 引数(の商)を10で割ったものを商を代入
		argumentInteger /= 10;

		// 割るごとに桁を一つ数える
		countDigit++;
	}
	// 桁数を返す
	return countDigit;
}

/**
*n行5列のint型2次元配列aの各列の最大桁数を、要素数5の1次元配列mに格納する関数
*@param a[][5] n行5列のint型2次元配列
*@param m[] 要素数5の1次元配列
*@param n a[][5]の行数を示す
*@author Kenta Yamamoto
*@since 2018-10-09
*/
void getMaximumDigit(int a[][5], int m[], int n) {

	// 列数は5で固定されているので、定数として定義
	const int COLUMN_NUMBER = 5;

	// 列数と同じ数だけループ
	for (int countColumn = 0; countColumn < COLUMN_NUMBER; countColumn++) {

		// 各列の最大桁数を格納する変数を定義する
		int maximumDigit = 0;

		// 行数と同じ数だけループ
		for (int countLow = 0; countLow < n; countLow++) {

			// 関数で取得した桁数を一時的な変数に格納
			int temporaryDigit = getDigit(a[countLow][countColumn]);

			// 現在の最大桁数と比較して、大きいほうを新たな最大桁数として代入
			maximumDigit = maximumDigit > temporaryDigit ? maximumDigit : temporaryDigit;
		}
		// 1列終わるごとに、その列の最終的な最大桁数を、配列mのcountLow番目の要素として格納していく
		m[countColumn] = maximumDigit;
	}
}

// main関数の定義
int main() {

	// 行数を定数で定義
	const int LOW_NUMBER = 3;

	// 列数を定数で定義
	const int COLUMN_NUMBER = 5;

	// 関数に渡すためのサンプル用二次元配列を定義
	int sampleMatrix[LOW_NUMBER][COLUMN_NUMBER] =
	{ { 32, -1, 32, 45, 67 }
	, { 535, 9999, 2, 128, -127 }
	, { 2, 5, -123, 9 ,5 } };

	// 各列の最大桁数を格納するための、列数と同じ長さの1次元配列の定義
	int maximumArray[COLUMN_NUMBER] = { 0 };

	// 二次元配列の各列の最大桁数を一次元配列に格納するための関数を呼び出し
	getMaximumDigit(sampleMatrix, maximumArray, LOW_NUMBER);

	// 配列の行と同じ数だけループ
	for (int countLow = 0; countLow < LOW_NUMBER; countLow++) {

		// 配列の列を走査して要素を出力
		for (int countColumn = 0; countColumn < COLUMN_NUMBER; countColumn++) {

			// 列ごとの最大桁数を配列から取得して、長さを調整しながら要素を左詰めで出力
			cout << left << setw(maximumArray[countColumn]) << sampleMatrix[countLow][countColumn] << ' ';
		}
		// 一行ごとに改行
		cout << '\n';
	}
}