/*
演習4-13
性別、季節、曜日などを表す列挙体を自由に定義し、それを用いたプログラムを作成せよ。

※今回は、任意の曜日に任意の日数を足したとき、何曜日になるか表示するプログラムを作成する。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// EnumWeekday型の列挙型を定義
	enum EnumWeekday { Sunday, Monday, Tuesday, Wednesday, Thirsday, Friday, Saturday };

	// 曜日選択のために入力された値を格納する変数を宣言
	int inputWeekdayInt;

	// 経過日数の入力値を格納する変数を宣言
	int daysPassInt;

	// 正しく曜日を選ぶまで続ける
	do {

		// 選び方ガイドの出力
		cout << "0…Sunday, 1…Monday, 2…Tuesday, 3…Wednesday, 4…Thirsday, 5…Friday, 6…Saturday\n";

		// 入力を促す
		cout << "現在の曜日を選ぶ：";

		// 入力値を格納
		cin >> inputWeekdayInt;

	// 列挙子に対応する値である0〜6が入力されるまで続ける
	} while (inputWeekdayInt < Sunday || inputWeekdayInt > Saturday);

	// 経過さえる日数の入力を促す
	cout << "経過させる日数：";

	// 入力値を格納
	cin >> daysPassInt;

	// int型の入力値をEnumWeekday型にキャストして、EnumWeekday型変数の初期化子とする
	EnumWeekday selectedWeekday = static_cast<EnumWeekday>(inputWeekdayInt);

	// 選択した曜日と経過日数に対する7の剰余を求め、それをEnumWeekday型にキャストして、EnumWeekday型変数の初期化子とする
	EnumWeekday passedWeekday = static_cast<EnumWeekday>((inputWeekdayInt + daysPassInt) % 7);

	// 結果メッセージの前半を出力
	cout << "日数経過後の曜日は";

	// 日数経過後の曜日によって分岐
	switch (passedWeekday) {

	// 0(Sunday)の場合
	case Sunday:

		// 結果を出力
		cout << "Sunday\n";

		// switchを抜ける
		break;

	// 1(Monday)の場合
	case Monday:

		// 結果を出力
		cout << "Monday\n";

		// switchを抜ける
		break;

	// 2(Tuesday)の場合
	case Tuesday:

		// 結果を出力
		cout << "Tuesday\n";

		// switchを抜ける
		break;

	// 3(Wednesday)の場合
	case Wednesday:

		// 結果を出力
		cout << "Wednesday\n";

		// switchを抜ける
		break;

	// 4(Thirsday)の場合
	case Thirsday:

		// 結果を出力
		cout << "Thirsday\n";

		// switchを抜ける
		break;

	// 5(Friday)の場合
	case Friday:

		// 結果を出力
		cout << "Friday\n";

		// switchを抜ける
		break;

	// 6(Saturday)の場合
	case Saturday:

		// 結果を出力
		cout << "Saturday\n";

		// switchを抜ける
		break;

	// それ以外の場合
	default:

		// switchを抜ける
		break;
	}
}