/*
■演習4-12
トランプの記号(ダイヤ、ハート、クラブ、スペード)の四つの列挙子を持つ列挙体を定義せよ。
各列挙子の値は、先頭から順に0,1,2,3とし、List4-17と同様にキーボードから値を読み込んで表示すること。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 列挙体の定義
	enum EnumTrump { ダイヤ, ハート, クラブ, スペード };

	// 列挙子に対応させ、入力値を受け取る変数を宣言
	int inputTypeInt;

	// 対応している値が入力されるまで繰り返す
	do {

		// 選択肢を提示する
		cout << "0…ダイヤ  1…ハート  2…クラブ  3…スペード\n";

		// 入力を促す
		cout << "選ぶ：";

		// 入力値を格納
		cin >> inputTypeInt;

	// 列挙子に対応する値、0〜3が入力されるまで繰り返し
	} while (inputTypeInt < ダイヤ || inputTypeInt > スペード);

	// int型の入力値0〜3を、EnumTrump型の0〜3にキャストして、取りうる値を限定する
	EnumTrump selectedTypeInt = static_cast<EnumTrump>(inputTypeInt);

	// EnumTrump型の0〜3に応じてswitchする。列挙子に対応している
	switch (selectedTypeInt) {

	// 0(ダイヤ)の場合
	case ダイヤ:

		// 列挙子と同じ文字列を出力
		cout << "ダイヤ\n";

		// switchを抜ける
		break;

	// 1(ハート)の場合
	case ハート:

		// 列挙子と同じ文字列を出力
		cout << "ハート\n";

		// switchを抜ける
		break;

	// 2(クラブ)の場合
	case クラブ:

		// 列挙子と同じ文字列を出力
		cout << "クラブ\n";

		// switchを抜ける
		break;

	// 3(スペード)の場合
	case スペード:

		// 列挙子と同じ文字列を出力
		cout << "スペード\n";

		// switchを抜ける
		break;

	// それ以外の場合
	default:

		// switchを抜ける
		break;
	}
}