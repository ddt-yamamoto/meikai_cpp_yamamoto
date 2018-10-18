#include <iostream> // 入出力
#include "09-06_header.h" // ヘッダファイル

// 名前空間の利用宣言
using namespace std;

/**
*入力を促すメッセージを出力する関数
*@author Kenta Yamamoto
*@since 2018-10-18
*/
static void promptInput() {

	// 入力受付範囲を示し、入力を促すメッセージを出力する
	cout << "0～" << MAX_NUMBER << "の数 : ";
}

/**
*回答の入力をさせ、入力値を返す関数
*@return inputValue 入力値
*@author Kenta Yamamoto
*@since 2018-10-18
*/
int inputAnswer() {

	// 入力値を格納する変数を定義
	int inputValue;

	// 正しい入力を行わせるループ
	do {
		// 入力を促すメッセージを出力
		promptInput();

		// 入力値を変数に格納
		cin >> inputValue;

	// 0～回答上限値の範囲に収まる回答が入力されるまで繰り返す
	} while (inputValue < 0 || inputValue > MAX_NUMBER);

	// 入力値を返却
	return inputValue;
}

/**
*ゲームをもう一度繰り返すか確認する関数
*@return retryAnswerBool 続行確認の結果
*@author Kenta Yamamoto
*@since 2018-10-18
*/
bool confirmRetry() {

	// 入力値を格納する変数を定義
	int retryAnswerInt;

	// 入力値をbool型に変換した値を格納する変数を定義
	bool retryAnswerBool;

	// 続行意思確認のメッセージを出力
	cout << "もう一度しますか？\n";

	// 回答候補の表示
	cout << "<Yes...1/No...0> : ";

	// 入力値を変数に格納
	cin >> retryAnswerInt;

	// 入力値をbool型に変換
	retryAnswerBool = static_cast<bool>(retryAnswerInt);

	// bool型で、続行確認の結果を返却
	return retryAnswerBool;
}

/**
*回数切れの際に正解の値を表示する関数
*@param correctAnswer 正解の値
*@author Kenta Yamamoto
*@since 2018-10-18
*/
void displayCorrectAnswer(int correctAnswer) {

	// メッセージを出力
	cout << "回数切れ。\n";

	// 引数で渡された正解の値を出力
	cout << "正解は" << correctAnswer << '\n';
}