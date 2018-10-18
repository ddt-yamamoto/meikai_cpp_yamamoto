#include <ctime> // 日時(乱数の種用)
#include <cstdlib> // rand関数
#include "09-09_header.h" // ヘッダファイル

// 名前空間の利用宣言
using namespace std;

// 名前無し名前空間を定義
namespace {
	// 正解を格納するstatic変数を定義
	int correctAnswer = 0;

	// 回答回数を格納するstatic変数を定義
	int answerTimes = 0;

	// 回数制限を定数として定義
	const int LIMIT_SETTING = 10;
}

/**
*ゲームの初期化処理を行う関数
*@author Kenta Yamamoto
*@since 2018-10-18
*/
void initializeGame() {

	// 乱数の種を設定
	srand(time(NULL));
}

/**
*正解を設定する関数
*@author Kenta Yamamoto
*@since 2018-10-18
*/
void generateAnswer() {
	correctAnswer = rand() % (MAX_NUMBER + 1);
}

/**
*回答と正解とを比較して結果を返す関数
*@param argumentInputInt 回答値
*@return answerDifference 正答値と回答値の差を返却
*@author Kenta Yamamoto
*@since 2018-10-18
*/
int judgeAnswer(int argumentInputInt) {

	// 正答値と回答値の差を、返却用変数として定義
	int answerDifference = correctAnswer - argumentInputInt;

	// 結果を返却
	return answerDifference;
}

/**
*回答回数をカウントし、回数切れかどうかを判定する関数
*@return TRUE...回数残あり / FALSE...回数切れ
*@author Kenta Yamamoto
*@since 2018-10-18
*/
bool countLimit() {

	// これまでの回答回数と今回の一回を合わせて回答上限に達したとき
	if (answerTimes + 1 == LIMIT_SETTING) {

		// 回答回数をリセット
		answerTimes = 0;

		// 正解を表示する関数に、正解の値を渡して呼ぶ
		displayCorrectAnswer(correctAnswer);

		// 回数切れであることを返却して伝える
		return false;
	}
	// まだ回答可能回数が残っている場合
	else {
		// 回答回数を今回の分として1足す
		answerTimes++;

		// 回数が残っていることを返却して伝える
		return true;
	}
}

/**
*回答回数を返却する関数
*@return answerTimes 回答回数
*@author Kenta Yamamoto
*@since 2018-10-18
*/
int displayAnswerTimes() {

	// static int型変数の回答回数を返却
	return answerTimes;
}