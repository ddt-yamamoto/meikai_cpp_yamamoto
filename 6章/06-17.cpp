/*
■演習6-17
呼び出された回数を表示する関数put_countを作成せよ。
void put_count();
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*呼び出された回数を表示する関数
*@param なし
*@return なし
*@author Kenta Yamamoto
*@since 2018-10-03
*/
void putCount() {

	// 呼ばれた回数を保存するための、静的記憶域期間をもつ変数を定義
	static int callCountInt = 0;

	// 回数をインクリメントしてから出力
	cout << "呼ばれた回数：" << ++callCountInt << '\n';
}

// main関数を定義
int main() {

	// putCount関数を繰り返し呼ぶかの確認を行う際の入力を格納する変数を定義
	int retryConfirm = 0;

	// 終了を選んでbreakで抜けるまで繰り返し
	while (true) {

		// 1か0を入力されるまで繰り返し
		do {

			// 選択肢を出し入力を促す
			cout << "呼ぶ？はい...1 / 終了...0 :";

			// 入力値を変数に格納
			cin >> retryConfirm;

		// 入力値が1か0でなかった場合はやり直し
		} while (retryConfirm != 1 && retryConfirm != 0);

		// 入力値をbool型に変換
		static_cast<bool>(retryConfirm);

		// いいえが選ばれていた場合
		if (!retryConfirm) {

			// whileを抜ける
			break;
		}

		// 呼ばれた回数をカウントして出力する関数を呼び出す
		putCount();
	}
}