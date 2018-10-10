/*
■演習6-19
List6-21の関数rを、不正な添字に対して安全に動作するものに書きかえよ。
静的記憶域期間をもつint型の変数を関数内部で定義して、idxが0以上a_size未満でなければ、その変数への参照を返却すること。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// 配列の長さを示す定数を定義
const int ARRAY_LENGTH = 5;

/**
*配列の要素への参照を返却する関数
*@param argumentIndex 配列のインデックスを指定する引数
*@return returnReference 返却する参照
*@author Kenta Yamamoto
*@since 2018-10-03
*/
int& referArrayIndex(int argumentIndex) {

	// 静的記憶域期間をもつ配列を宣言
	static int arrayInt[ARRAY_LENGTH];

	// 配列の添字が不正だった場合に返却するための、静的記憶域期間をもつ変数を定義
	static int safetyInt = -1;

	// 不正な添字が引数で渡された場合
	if (argumentIndex < 0 || argumentIndex >= ARRAY_LENGTH) {

		// 安全動作用に用意しておいた静的記憶域期間をもつ変数への参照を返却
		return safetyInt;
	}

	// 正しい添字が引数で渡された場合、配列の、引数で指定された要素の参照を返却
	return arrayInt[argumentIndex];
}

// main関数を定義
int main() {

	// 配列の長さだけ繰り返し
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 関数から配列の要素の参照を受け取り、そこに対して配列の添字と同じになる値を代入していく
		referArrayIndex(countInt) = countInt;
	}

	// 動作試験として、配列の添字に対して不正な値を含めた、前後に3ずつ広い範囲を走査するループを作成
	for (int countInt = -3; countInt < ARRAY_LENGTH + 3; countInt++) {

		// 関数から配列の要素への参照を受け取り、その値を出力。
		// ただし、不正な添字を引数として渡した場合は、安全用の変数の参照が渡され、その値を出力。
		cout << "arrayInt[" << countInt << "] = " << referArrayIndex(countInt) << '\n';
	}
}