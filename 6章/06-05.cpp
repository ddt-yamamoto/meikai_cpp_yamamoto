/*
■演習6-5
1からnまでの全整数の和を求めて返却する関数sumupを作成せよ。
int sumup(int n);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// 関数宣言を行う
int getSumUp(int);

// main関数の定義
int main() {

	// 入力値を格納する変数を定義
	int inputInt = 0;

	// 説明メッセージを出力
	cout << "1からnまでの全整数の和を求めて返します。\n";

	// 入力を促す
	cout << "整数n：";

	// 入力値を変数に格納
	cin >> inputInt;

	// 入力値を関数に渡し、返却値を出力
	cout << getSumUp(inputInt);
}

/**
1からnまでの全整数の和を求めて返却する関数
@param returnSummary 次々と足していった値を入れる
@param countInt ループ処理の際に1からnまでカウントを行う
@return 1からnまでの全整数の和を表すint型の値
@author Kenta Yamamoto
@since 2018-10-01
*/

int getSumUp(int argumentInt) {

	// 返却用変数の定義
	int returnSummary = 0;

	// 1からnまでループする
	for (int countInt = 1; countInt <= argumentInt; countInt++) {

		// 返却用変数に次々と足していく
		returnSummary += countInt;
	}

	// 合計値を返却する
	return returnSummary;
}