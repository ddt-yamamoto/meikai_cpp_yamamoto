/*
■演習6-16
静的記憶域期間をもつ配列の全要素が0で初期化されることを確認するプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// 配列の長さを定数で定義
const int ARRAY_LENGTH = 5;

// 静的記憶域期間をもつ配列を宣言し、初期化を行わない
int arrayStaticInt[ARRAY_LENGTH];

// main関数の定義
int main() {

	// 比較用に自動記憶域期間をもつ配列を宣言し、初期化を行わない
	int arrayAutoInt[ARRAY_LENGTH];

	// 配列の長さだけループ
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 静的記憶域期間をもつ配列を走査し要素を出力
		cout << "静的記憶域期間をもつ配列：" << arrayStaticInt[countInt] << "   ";

		// 自動記憶域期間をもつ配列を走査し要素を出力
		cout << "自動記憶域期間をもつ配列：" << arrayAutoInt[countInt] << '\n';
	}
}