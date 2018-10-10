/*
■演習7-7
要素数nの配列aから要素a[idx]を削除する関数aryrmvを作成せよ。
void aryrmv(int a[], int n, int idx);
削除はa[idx]より後方の全要素を一つ前方にずらすことによって行う。移動されずにあまってしまう末尾要素a[n-1]の値は変更しなくてよい。
たとえば、配列aの要素が{1,3,4,7,9,11}のときにaryrmv(a, 6, 2)と呼び出した後の配列aの要素は{1,3,7,9,11,11}となる。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*要素数nの配列aから要素a[idx]を削除する関数
*@param a[] 対象となる配列
*@param n 配列の要素数
*@param idx 削除する要素の番号
*@author Kenta Yamamoto
*@since 2018-10-09
*/
void aryrmv(int a[], int n, int idx) {

	// 削除する要素番号から始め、最後の一つ前の要素までa[]を走査
	for (int indexInt = idx; indexInt < n - 1; indexInt++) {

		// 代入により、要素を一つ前にずらす
		a[indexInt] = a[indexInt + 1];
	}
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

	// 削除する要素番号を格納する変数を定義
	int deleteIndex = 0;

	// 入力を促す
	cout << "どの要素を削除しますか？ : ";

	// 入力値を変数に格納
	cin >> deleteIndex;

	// 配列の先頭ポインタ、要素数、削除する要素番号を関数に渡し、削除を行う
	aryrmv(sampleArray, ELEMENT_NUMBER, deleteIndex);

	// 配列を走査して要素を出力
	for (int countInt = 0; countInt < ELEMENT_NUMBER; countInt++) {

		// 削除実行後の要素を出力
		cout << "a[" << countInt << "] = " << sampleArray[countInt] << '\n';
	}
}