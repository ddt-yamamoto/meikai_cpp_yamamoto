/*
■演習7-12
要素数nの配列pの全要素にvを代入する関数fillを作成せよ。
void fill(int* p, int n, int v);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*要素数nの配列pの全要素にvを代入する関数
*@param p 配列pの先頭要素を指すポインタ
*@param n 配列pの要素数
*@param v 要素に代入する値
*@author Kenta Yamamoto
*@since 2018-10-10
*/
void fill(int* p, int n, int v) {

	// 受け取った要素数と同じ回数ループ
	while (n-- > 0) {

		// ポインタpの指す位置を参照外しして、そこにvを代入してから、
		// ポインタpをインクリメントすることで次回、その次の要素を指すようにする
		*p++ = v;
	}
}

// main関数の定義
int main() {

	// テスト用の配列を用意
	int sampleArray[5] = { 1, 2, 3, 4, 5 };

	// 配列長を要素の長さで割ることで配列の要素数を取得
	int sampleSize = sizeof(sampleArray) / sizeof(sampleArray[0]);

	// 配列を走査して要素を出力
	for (int countInt = 0; countInt < sampleSize; countInt++) {

		// 現時点での配列の要素の値を出力して確認させる
		cout << "x[" << countInt << "] = " << sampleArray[countInt] << '\n';
	}
	// 入力値を格納する変数を宣言
	int v;

	// 入力を促す
	cout << "配列に代入したい値 : ";

	// 入力値を格納
	cin >> v;

	// sampleArrayの全要素にvを代入する関数を呼び出す
	fill(sampleArray, sampleSize, v);

	// 関数実行前と同様に配列を走査して要素を出力
	for (int countInt = 0; countInt < sampleSize; countInt++) {

		// 関数によって変更された要素を出力して確認
		cout << "x[" << countInt << "] = " << sampleArray[countInt] << '\n';
	}
}