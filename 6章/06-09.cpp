/*
■演習6-9
a以上b未満の乱数を生成して、その値を返却する関数ramdomを作成せよ。内部で乱数を生成する標準ライブラリであるrand関数を呼び出すこと。
int random(int a, int b);
なお、bの値がa未満である場合には、aの値をそのまま返却すること。
*/

#include <iostream> // 入出力
#include <cstdlib> // rand関数
#include <ctime> // 日時(乱数の種用)

// 名前空間stdの利用宣言
using namespace std;

/**
a以上b未満の乱数を生成して、その値を返却する関数
@param argumentLowerLimit aにあたる整数で、乱数の下限、
@param argumentUpperLimit bにあたる整数で、乱数の上限(bは含まない)
@return returnRandomInt 生成した乱数、もしくはaそのもの(a>=bのとき)
@author Kenta Yamamoto
@since 2018-10-02
*/
int getRamdomInt(int argumentLowerLimit, int argumentUpperLimit) {

	// 返却値を定義。生成した乱数を格納する
	int returnRandomInt = 0;

	// 引数の差をとり、変数の初期化子にする
	int differenceInt = argumentUpperLimit - argumentLowerLimit;

	// bがa以下だったとき
	if (differenceInt <= 0) {

		// 引数aをそのまま返却する
		returnRandomInt = argumentLowerLimit;
	}

	// 正しく(a < b)だったとき
	else {

		// 乱数の種を設定
		srand(time(NULL));

		// 乱数を生成し引数の差の剰余をとり、そこに小さいほうの引数(a)を加えると、a以上b未満の乱数ができる
		returnRandomInt = rand() % differenceInt + argumentLowerLimit;
	}

	// 乱数(もしくは引数aそのまま)を返却
	return returnRandomInt;
}

// main関数の定義
int main() {

	// 入力値を格納する変数を定義
	int inputLowerLimit = 0; // 一つ目(a)
	int inputUpperLimit = 0; // 二つ目(b)

	// 説明メッセージを出力
	cout << "整数a以上整数b未満の乱数を生成して表示します。\n";

	// 入力を促す
	cout << "整数a:";

	// 入力値を変数に格納
	cin >> inputLowerLimit;

	// 入力を促す
	cout << "整数b:";

	// 入力値を変数に格納
	cin >> inputUpperLimit;

	// 乱数の上限と下限を関数に渡し、返却値の乱数を表示
	cout << getRamdomInt(inputLowerLimit, inputUpperLimit);
}