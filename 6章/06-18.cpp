/*
■演習6-18
0以上9以下の乱数を返却する関数rand1を作成せよ。複数回呼び出された場合に、連続して同じ値を返さないようにすること
(たとえば1回前に呼び出された際に5を返却していれば、5以外の値を返却しなければならない)。
int rand1();
*/

#include <iostream> // 入出力
#include <cstdlib> // rand()関数
#include <ctime> // 日時

// 名前空間stdの利用宣言
using namespace std;

/**
*0以上9以下の乱数を、続けて同じ数にならないように返却する関数
*@param なし
*@return returnRandomInt 前回実行時と必ず異なる0〜9の乱数
*@author Kenta Yamamoto
*@since 2018-10-03
*/
int randomNoRepeat() {

	// 前回実行時に返却した乱数を保存するための、静的記憶域期間をもつ変数を定義(最初は0〜9以外の値にしておく)
	static int formerRandomInt = -1;

	// 乱数の種を生成
	srand(time(NULL));

	// 返却値を格納する変数を宣言
	int returnRandomInt;

	// 前回と異なる乱数ができるまで繰り返し
	do {

		// 乱数に対して10の剰余をとり、返却用変数に格納
		returnRandomInt = rand() % 10;

	// 前回返却値と同じならばやり直し
	} while (returnRandomInt == formerRandomInt);

	// 前回返却値として、今回の返却値を保存しておく
	formerRandomInt = returnRandomInt;

	// 乱数を返却
	return returnRandomInt;
}

// main関数を定義
int main() {

	// randomNoRepeat関数を繰り返し呼ぶかの確認を行う際の入力を格納する変数を定義
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

		// 乱数を返却する関数を呼び出して、返却値を出力
		cout << randomNoRepeat() << '\n';
	}
}