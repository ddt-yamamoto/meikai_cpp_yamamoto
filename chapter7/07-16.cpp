/*
■演習7-16
double型の配列を動的に生成するプログラムを作成せよ。要素数はキーボードから読み込むこと。
また、生成に失敗した場合の処理も行うこと。
*/

#include <iostream> // 入出力
#include <new> // 動的メモリ管理

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 要素数を格納するための変数を定義
	int elementNumber = 0;

	// 入力を促す
	cout << "要素数 : ";

	// 入力値を変数に格納
	cin >> elementNumber;

	// 例外を発生させるかもしれない処理の開始
	try {
		// 要素数が可変のdouble型配列を動的生成して、ポインタの初期化子にする
		double* sampleArray = new double[elementNumber];
	}
	// try内でbad_alloc例外(メモリ確保が失敗したときに投げられる例外)が投げられたときにここで補足
	catch (bad_alloc) {

		// 中断メッセージを出力
		cout << "配列の生成に失敗しましたのでプログラムを中断します。\n";

		// 異常終了判定を実行環境(OS)に返す
		return 1;
	}
}