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
3桁の正の整数を乱数で生成し、それらを用いた4種の計算問題のいずれかをランダムで出題する関数
x + y + z
x + y - z
x - y + z
x - y - z
@param なし
@return なし
@author Kenta Yamamoto
@since 2018-10-02
*/
void randomCalculationDrill() {

	// 乱数の種を生成
	srand(time(NULL));

	// 100〜999の乱数を3つ定義
	int randomValueX = rand() % 900 + 100; // x
	int randomValueY = rand() % 900 + 100; // y
	int randomValueZ = rand() % 900 + 100; // z

	// 出題タイプをランダムに決めるための0〜3の乱数を定義
	int randomDrillType = rand() % 4;

	// 問題文の、出題タイプによって切り替わる部分の演算子をchar型で宣言
	char operand1st; // 一つ目の演算子
	char operand2nd; // 二つ目の演算子

	// 正答を計算して格納するための変数を宣言
	int correctAnswer;

	// 乱数により出題が4種類に分岐
	switch (randomDrillType) {

	// x + y + zの場合
	case 0:

		// 出題文を切り替えるためにchar型の演算子を代入
		operand1st = '+';	// 第一オペランドが+
		operand2nd = '+';	// 第二オペランドが+

		// 正答を計算して変数に格納しておく
		correctAnswer = randomValueX + randomValueY + randomValueZ;

		// switchを抜ける
		break;

	// x + y - zの場合
	case 1:

		// 出題文を切り替えるためにchar型の演算子を代入
		operand1st = '+';	// 第一オペランドが+
		operand2nd = '-';	// 第二オペランドが-

		// 正答を計算して変数に格納しておく
		correctAnswer = randomValueX + randomValueY - randomValueZ;

		// switchを抜ける
		break;

		// x - y + zの場合
	case 2:

		// 出題文を切り替えるためにchar型の演算子を代入
		operand1st = '-';	// 第一オペランドが-
		operand2nd = '+';	// 第二オペランドが+

		// 正答を計算して変数に格納しておく
		correctAnswer = randomValueX - randomValueY + randomValueZ;

		// switchを抜ける
		break;

		// x - y - zの場合
	case 3:

		// 出題文を切り替えるためにchar型の演算子を代入
		operand1st = '-';	// 第一オペランドが-
		operand2nd = '-';	// 第二オペランドが-

		// 正答を計算して変数に格納しておく
		correctAnswer = randomValueX - randomValueY - randomValueZ;

		// switchを抜ける
		break;

	// それ以外の場合
	default:

		// switchを抜ける
		break;
	}

	// 正解してbreakで抜けるまでループ
	while (true) {

		// 回答の入力を格納する変数を宣言
		int inputAnswer;

		// 出題メッセージ
		cout << randomValueX << ' ' << operand1st << ' '
			<< randomValueY << ' ' << operand2nd << ' '
			<< randomValueZ << " = ";

		// 入力値を格納
		cin >> inputAnswer;

		// 入力値とあらかじめ用意しておいた正答とを比較
		if (inputAnswer == correctAnswer) {

			// 正解ならwhile文を抜ける
			break;
		}

		// 間違っていたらここにくるので、間違いメッセージを出力
		cout << "違いますよ！ｗ\n";
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
		// 問題出題用の関数を呼ぶ
		randomCalculationDrill();

	// 続行確認の関数を呼び出し、ループを終了するか判定
	} while (confirmRetry());
}