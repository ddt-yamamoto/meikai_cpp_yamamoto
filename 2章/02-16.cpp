/*
■演習2-16
月を1〜12の整数値として読み込んで、それに対応する季節を表示するプログラムを作成せよ。
※switch文を用いて実現すること。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力される月を格納する変数を宣言
	int inputMonth;
	
	// キーボードからの入力を促す
	cout << "季節を判定する月：";
	
	// 入力された値を変数に格納
	cin >> inputMonth;
	
	// inputMonthの値に応じて、switch文を用いて処理を分岐させる
	switch(inputMonth){
	case 3 :            // 3月のとき
	case 4 :            // 4月のとき
	case 5 :            // 5月のとき
		cout << "春\n"; // メッセージを出力
		break;          // switch文を抜ける
	case 6 :            // 6月のとき
	case 7 :            // 7月のとき
	case 8 :            // 8月のとき
		cout << "夏\n"; // メッセージを出力
		break;          // switch文を抜ける
	case 9 :            // 9月のとき
	case 10:            // 10月のとき
	case 11:            // 11月のとき
		cout << "秋\n"; // メッセージを出力
		break;          // switch文を抜ける
	case 12:            // 12月のとき
	case 1 :            // 1月のとき
	case 2 :            // 2月のとき
		cout << "冬\n"; // メッセージを出力
		break;          // switch文を抜ける
	default:            // 念のための補足用
		break;          // switch文を抜ける
	}
}
