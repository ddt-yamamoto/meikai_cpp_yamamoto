/*
■演習7-10
n行5列のint型2次元配列aの各行の最大値を、要素数nの1次元配列mに格納する関数maxlineを作成せよ。
void maxline(int a[][5], int m[], int n);
たとえば、aに受け取った3行5列の配列の構成要素が
{{1, 2, 5, 4, 8}
,{6, 7, 4, 2, 3}
,{3, 0, 5, 9 ,1}}
であれば、mに{8, 7, 9}を格納すること。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*n行5列のint型2次元配列aの各行の最大値を、要素数nの1次元配列mに格納する関数
*@param a[][5] n行5列のint型2次元配列
*@param m[] 要素数nの1次元配列
*@param n a[][5]の行数およびm[]の要素数を示す
*@author Kenta Yamamoto
*@since 2018-10-09
*/
void maxline(int a[][5], int m[], int n) {

	// 列数は5で固定されているので、定数として定義
	const int COLUMN_NUMBER = 5;

	// 行数と同じ数だけループ
	for (int countLow = 0; countLow < n; countLow++) {

		// 各配列の最大値を格納する変数を宣言し、いったん各配列の先頭要素で初期化する
		int maximumInt = a[countLow][0];

		// 列数と同じ数だけループして配列を走査
		for (int countColumn = 0; countColumn < COLUMN_NUMBER; countColumn++) {

			// 現在の最大値と、順にみていく配列の要素とを比較して、大きいほうを新たな最大値として代入
			maximumInt = maximumInt > a[countLow][countColumn] ? maximumInt : a[countLow][countColumn];
		}

		// 1行終わるごとに、その行の最終的な最大値を、配列mのcountLow番目の要素として格納していく
		m[countLow] = maximumInt;
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
	{ { 1, 2, 5, 4, 8 }
	, { 6, 7, 4, 2, 3 }
	, { 3, 0, 5, 9 ,1 } };

	// 各行の最大値を格納するための、行数と同じ長さの1次元配列の定義
	int maximumArray[LOW_NUMBER] = { 0 };

	// 二次元配列の各行の最大値を一次元配列に格納するための関数を呼び出し
	maxline(sampleMatrix, maximumArray, LOW_NUMBER);

	// 配列を走査して要素を出力
	for (int countInt = 0; countInt < LOW_NUMBER; countInt++) {

		// 要素を出力
		cout << "m[" << countInt << "] = " << maximumArray[countInt] << '\n';
	}
}