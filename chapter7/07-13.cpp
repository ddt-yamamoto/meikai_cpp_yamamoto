/*
■演習7-12
要素数がnである配列bの全要素を配列aにコピーする関数を作成せよ。
void ary_cpy(int* a, const int* b, int n);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*要素数がnである配列bの全要素を配列aにコピーする関数
*@param a 配列aの先頭要素を指すポインタ
*@param b 配列bの先頭要素を指すポインタ
*@param n 配列bの要素数
*@author Kenta Yamamoto
*@since 2018-10-10
*/
void ary_cpy(int* a, const int* b, int n) {

	// 受け取った要素数と同じ回数ループ
	while (n-- > 0) {

		// aとbを参照外しすることで、aが示す配列aに対してbが示す配列bの要素をコピーする。
		// コピーのあと、ポインタであるaとbをインクリメントし、次の要素を指すようにする。
		*a++ = *b++;
	}
}

// main関数の定義
int main() {

	// テスト用の配列を用意
	int sampleArrayA[5] = { 1, 2, 3, 4, 5 };	// 配列a
	int sampleArrayB[5] = { 6, 7, 8, 9, 10 };	// 配列b

	// 配列長を要素の長さで割ることで配列bの要素数を取得
	int sampleSize = sizeof(sampleArrayB) / sizeof(sampleArrayB[0]);

	// 配列を走査して要素を出力
	for (int countInt = 0; countInt < sampleSize; countInt++) {

		// 現時点での配列aの要素の値を出力して確認させる
		cout << "a[" << countInt << "] = " << sampleArrayA[countInt] << "   ";

		// 現時点での配列bの要素の値を出力して確認させる
		cout << "b[" << countInt << "] = " << sampleArrayB[countInt] << '\n';
	}
	// sampleArrayBの全要素をsampleArrayAにコピーする関数を呼び出す
	ary_cpy(sampleArrayA, sampleArrayB, sampleSize);

	// メッセージの出力
	cout << "関数を呼び出します。\n";

	// 関数実行前と同様に配列を走査して要素を出力
	for (int countInt = 0; countInt < sampleSize; countInt++) {

		// 関数実行後の配列aの要素を出力して確認
		cout << "a[" << countInt << "] = " << sampleArrayA[countInt] << "   ";

		// 関数実行後の配列bの要素を出力して確認
		cout << "b[" << countInt << "] = " << sampleArrayB[countInt] << '\n';
	}
}