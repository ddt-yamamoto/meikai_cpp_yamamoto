/*
■演習7-8
要素数nの配列aから要素a[idx]を先頭とするk個の要素を削除する関数arynrmvを作成せよ。
void aryrmv(int a[], int n, int idx, int k);
削除はa[idx]より後方の全要素をk個前方にずらすことによって行う。移動されずにあまってしまう要素の値は変更しなくてよい。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*要素数nの配列aから要素a[idx]を先頭とするk個の要素を削除する関数
*@param a[] 対象となる配列
*@param n 配列の要素数
*@param idx 削除する要素の番号
*@param k 削除する個数
*@author Kenta Yamamoto
*@since 2018-10-09
*/
void aryrmv(int a[], int n, int idx, int k) {

	// 削除する要素番号から始め、最後のk個前の要素までa[]を走査
	for (int indexInt = idx; indexInt < n - k; indexInt++) {

		// 代入により、要素をk個前にずらす
		a[indexInt] = a[indexInt + k];
	}
}

// main関数の定義
int main() {

	// 配列の要素数の定義
	const int ELEMENT_NUMBER = 10;

	// 配列の宣言
	int sampleArray[ELEMENT_NUMBER] = { 0 };

	// 配列を走査して入力受付
	for (int countInt = 0; countInt < ELEMENT_NUMBER; countInt++) {

		// 入力を促す
		cout << "a[" << countInt << "] : ";

		// 入力値を配列に格納
		cin >> sampleArray[countInt];
	}

	// 削除する要素番号を格納する変数を定義
	int deleteIndex = 0;

	// 削除する個数を格納する変数を定義
	int deleteNumber = 0;

	// 入力を促す
	cout << "何番目以降の要素を削除しますか？ : ";

	// 入力値を変数に格納
	cin >> deleteIndex;

	// 入力を促す
	cout << "何個削除しますか？ : ";

	// 入力値を変数に格納
	cin >> deleteNumber;

	// 配列の先頭ポインタ、要素数、削除する要素番号、削除する数を関数に渡し、削除を行う
	aryrmv(sampleArray, ELEMENT_NUMBER, deleteIndex, deleteNumber);

	// 配列を走査して要素を出力
	for (int countInt = 0; countInt < ELEMENT_NUMBER; countInt++) {

		// 削除実行後の要素を出力
		cout << "a[" << countInt << "] = " << sampleArray[countInt] << '\n';
	}
}