/*
■演習6-7
引数mで指定された月の季節を表示する関数print_seasonを作成せよ。mが3,4,5であれば「春」、6,7,8であれば「夏」
9,10,11であれば「秋」、12,1,2であれば「冬」と表示し、それ以外の値であれば何も表示しないこと。
void print_season(int m);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
引数で指定された月の季節を表示する関数
@param argumentMonth 季節を判定する月
@return なし
@author Kenta Yamamoto
@since 2018-10-02
*/
void printSeason(int argumentMonth) {

	// 引数の値によって分岐
	switch (argumentMonth) {

	// 3,4,5月の場合
	case 3: // 3月の場合
	case 4: // 4月の場合
	case 5: // 5月の場合
		// 判定を出力
		cout << "春\n";
		// switchを抜ける
		break;

	// 6,7,8月の場合
	case 6: // 6月の場合
	case 7: // 7月の場合
	case 8: // 8月の場合
		// 判定を出力
		cout << "夏\n";
		// switchを抜ける
		break;

	// 9,10,11月の場合
	case 9:  // 9月の場合
	case 10: // 10月の場合
	case 11: // 11月の場合
		// 判定を出力
		cout << "秋\n";
		// switchを抜ける
		break;

	// 12,1,2月の場合
	case 12: // 12月の場合
	case 1:  // 1月の場合
	case 2:  // 2月の場合
		// 判定を出力
		cout << "冬\n";
		// switchを抜ける
		break;

	// それ以外の場合
	default:
		// switchを抜ける
		break;
	}
}

// main関数の定義
int main() {

	// 入力値を格納する変数を定義
	int inputMonth = 0;

	// 説明メッセージを出力
	cout << "月の数字を入力すると、季節を判定します。\n";

	// 入力を促す
	cout << "月：";

	// 入力値を変数に格納
	cin >> inputMonth;

	// 月の値の変数を関数に渡す
	printSeason(inputMonth);
}