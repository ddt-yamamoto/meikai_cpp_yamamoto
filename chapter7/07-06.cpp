/*
■演習7-6
要素数nの配列aの全要素の合計を求めて返却する関数sum_ofを作成せよ。
int sum_of(const int a[], int n);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*配列の全要素の合計を求めて返却する関数
*@param a[] 対象となる配列
*@param n 配列の要素数
*@return returnSummary 求めた合計値
*@author Kenta Yamamoto
*@since 2018-10-09
*/
int sum_of(const int a[], int n) {

	// 返却値である合計値をはじめ0で定義
	int returnSummary = 0;

	// 要素数と同じ回数ループしてa[]を走査
	for (int indexInt = 0; indexInt < n; indexInt++) {

		// 配列の要素を順に合計値に足していく
		returnSummary += a[indexInt];
	}
	// 求めた合計値を返却
	return returnSummary;
}

// main関数の定義
int main() {

	// 配列の要素数の定義
	const int ELEMENT_NUMBER = 5;

	// 配列の宣言
	int sampleArray[ELEMENT_NUMBER] = { 0 };

	// 配列を走査して入力受付
	for (int countInt = 0; countInt < ELEMENT_NUMBER; countInt++) {

		// 入力を促す
		cout << "a[" << countInt << "] : ";

		// 入力値を配列に格納
		cin >> sampleArray[countInt];
	}
	// 配列の先頭要素のポインタと要素数を関数に渡して、返却された合計値を出力
	cout << "配列aの合計値は" << sum_of(sampleArray, ELEMENT_NUMBER);
}