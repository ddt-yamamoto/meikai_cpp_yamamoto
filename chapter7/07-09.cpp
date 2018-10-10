/*
■演習7-9
要素数nの配列aから要素a[idx]にxを挿入する関数arynrmvを作成せよ。
void aryrmv(int a[], int n, int idx, int x);
挿入に伴ってa[idx]〜a[n-2]を一つ後方にずらさなければならない。
たとえば、配列aの要素が{1,3,4,7,9,11}のときにaryins(a,6,2,99)と呼び出した後の配列aの要素は
{1,3,99,4,7,9}となる。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*要素数nの配列aから要素a[idx]にxを挿入する関数
*@param a[] 対象となる配列
*@param n 配列の要素数
*@param idx 挿入する位置の要素番号
*@param x 挿入する値
*@author Kenta Yamamoto
*@since 2018-10-09
*/
void aryrmv(int a[], int n, int idx, int k) {

	// 挿入する位置の次の要素番号から始め、最後の要素までa[]を走査
	for (int indexInt = idx + 1; indexInt < n; indexInt++) {

		// 代入により、要素をひとつ後にずらす
		a[indexInt] = a[indexInt - 1];
	}

	// 指定位置に指定値を挿入する
	a[idx] = k;
}

// main関数の定義
int main() {

	// 配列の要素数の定義
	const int ELEMENT_NUMBER = 6;

	// 配列の宣言
	int sampleArray[ELEMENT_NUMBER] = { 0 };

	// 配列を走査して入力受付
	for (int countInt = 0; countInt < ELEMENT_NUMBER; countInt++) {

		// 入力を促す
		cout << "a[" << countInt << "] : ";

		// 入力値を配列に格納
		cin >> sampleArray[countInt];
	}

	// 挿入する位置の要素番号を格納する変数を定義
	int insertIndex = 0;

	// 挿入する値を格納する変数を定義
	int insertValue = 0;

	// 入力を促す
	cout << "何番目に挿入しますか？ : ";

	// 入力値を変数に格納
	cin >> insertIndex;

	// 入力を促す
	cout << "挿入する値 : ";

	// 入力値を変数に格納
	cin >> insertValue;

	// 配列の先頭ポインタ、要素数、挿入する位置、挿入する値を関数に渡し、挿入を行う
	aryrmv(sampleArray, ELEMENT_NUMBER, insertIndex, insertValue);

	// 配列を走査して要素を出力
	for (int countInt = 0; countInt < ELEMENT_NUMBER; countInt++) {

		// 挿入実行後の要素を出力
		cout << "a[" << countInt << "] = " << sampleArray[countInt] << '\n';
	}
}