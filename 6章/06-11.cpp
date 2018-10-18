/*
■演習6-11
List6-11を拡張して、以下の4種類の問題をランダムに出題するプログラムを作成せよ。
x + y + z
x + y - z
x - y + z
x - y - z
*/

#include <iostream> // 入出力
#include <cstdlib> // rand()関数
#include <ctime> // 日時

// 名前空間stdの利用宣言
using namespace std;

/**
受け取った引数に応じて、以下の4種のいずれかの演算を行った結果と、入力値とを比較して、正解か不正解かを返す関数
x + y + z
x + y - z
x - y + z
x - y - z
@param argumentRandomX 計算式中のxに相当するオペランド
@param argumentRandomY 計算式中のyに相当するオペランド
@param argumentRandomZ 計算式中のzに相当するオペランド
@param argumentRandomDrillType 4種の演算子組み合わせタイプを決定する
@return なし
@author Kenta Yamamoto
@since 2018-10-02
*/
bool answerCheck(int argumentRandomX, int argumentRandomY, int argumentRandomZ, int argumentRandomDrillType) {

	// 正答を計算して格納するための変数を宣言
	int correctAnswer;

	// 入力値を格納するための変数を宣言
	int inputAnswer;

	// 乱数により出題が4種類に分岐
	switch (argumentRandomDrillType) {

	// x + y + zの場合
	case 0:
		// 正答を計算して変数に格納しておく
		correctAnswer = argumentRandomX + argumentRandomY + argumentRandomZ;
		// switchを抜ける
		break;

	// x + y - zの場合
	case 1:
		// 正答を計算して変数に格納しておく
		correctAnswer = argumentRandomX + argumentRandomY - argumentRandomZ;
		// switchを抜ける
		break;

	// x - y + zの場合
	case 2:
		// 正答を計算して変数に格納しておく
		correctAnswer = argumentRandomX - argumentRandomY + argumentRandomZ;
		// switchを抜ける
		break;

	// x - y - zの場合
	case 3:
		// 正答を計算して変数に格納しておく
		correctAnswer = argumentRandomX - argumentRandomY - argumentRandomZ;
		// switchを抜ける
		break;

	// それ以外の場合
	default:
		// switchを抜ける
		break;
	}

	// 入力値を変数に格納
	cin >> inputAnswer;

	// 正解と比較した結果で、返却用bool型変数を初期化
	bool returnBool = (inputAnswer == correctAnswer ? true : false);

	// bool型変数を返却
	return returnBool;
}

/**
*受け取った引数に応じて、以下の4種のいずれかの演算を出題する文字列を出力する関数
*x + y + z
*x + y - z
*x - y + z
*x - y - z
*@param argumentRandomX 計算式中のxに相当するオペランド
*@param argumentRandomY 計算式中のyに相当するオペランド
*@param argumentRandomZ 計算式中のzに相当するオペランド
*@param argumentRandomDrillType 4種の演算子組み合わせタイプを決定する
*@return なし
*@author Kenta Yamamoto
*@since 2018-10-02
*/
void putQuiz(int argumentRandomX, int argumentRandomY, int argumentRandomZ, int argumentRandomDrillType) {

	// 乱数により出題が4種類に分岐
	switch (argumentRandomDrillType) {

	// x + y + zの場合
	case 0:
		// 問題文を出力
		cout << argumentRandomX << " + " << argumentRandomY << " + " << argumentRandomZ << " = ";
		// switchを抜ける
		break;

	// x + y - zの場合
	case 1:
		// 問題文を出力
		cout << argumentRandomX << " + " << argumentRandomY << " - " << argumentRandomZ << " = ";
		// switchを抜ける
		break;

	// x - y + zの場合
	case 2:
		// 問題文を出力
		cout << argumentRandomX << " - " << argumentRandomY << " + " << argumentRandomZ << " = ";
		// switchを抜ける
		break;

	// x - y - zの場合
	case 3:
		// 問題文を出力
		cout << argumentRandomX << " - " << argumentRandomY << " - " << argumentRandomZ << " = ";
		// switchを抜ける
		break;

	// それ以外の場合
	default:
		// switchを抜ける
		break;
	}
}

/**
続行の確認を行う関数
@param なし
@return bool型 true/false
@author Kenta Yamamoto
@since 2018-10-02
*/
bool confirmRetry() {

	// 入力値を格納するための変数を宣言
	int retryInt;

	// 0か1を入力されるまで繰り返し
	do {

		// 続行確認のメッセージ
		cout << "もう一度？<Yes...1 / No...0>:";

		// 入力値を受け取る
		cin >> retryInt;

	// 入力値が0でも1でもないならば続ける
	} while (retryInt != 0 && retryInt != 1);

	// 0または1をbool型に静的キャストして返却
	return static_cast<bool>(retryInt);
}

// main関数の定義
int main() {

	// 続行確認で続けるを選ぶ限り、続ける
	do {

		// 乱数の種を生成
		srand(time(NULL));

		// 100〜999の乱数を3つ定義
		int randomValueX = rand() % 900 + 100; // x
		int randomValueY = rand() % 900 + 100; // y
		int randomValueZ = rand() % 900 + 100; // z

		// 出題タイプをランダムに決めるための0〜3の乱数を定義
		int randomDrillType = rand() % 4;

		while (true) {

			// 問題文を出力するための関数を呼ぶ
			putQuiz(randomValueX, randomValueY, randomValueZ, randomDrillType);

			// 入力を受け付け、計算を行い、それらを比較して正解かを判定する関数を呼び、正解であればwhileループを抜ける
			if (answerCheck(randomValueX, randomValueY, randomValueZ, randomDrillType)) {
				break;
			}

			// 間違っていたらここにくるので、間違いメッセージを出力
			cout << "違いますよ！\n";
		}

	// 続行確認の関数を呼び出し、ループを終了するか判定
	} while (confirmRetry());
}