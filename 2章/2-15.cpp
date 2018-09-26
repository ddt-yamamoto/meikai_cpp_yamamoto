/*
■演習2-15
おみくじプログラムを作成せよ。乱数を生成して、『大吉』『中吉』『小吉』『吉』『末吉』『凶』『大凶』のいずれかを表示すること。
※switch文を用いて実現すること。
*/

// 入出力、日付時刻、ランダム変数を扱うので、それぞれインクルード
#include <iostream>
#include <ctime>
#include <cstdlib>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 乱数の種を日付時刻から設定
	srand(time(NULL));
	
	// おみくじは7種類ある。変数randintを宣言し、乱数に対する7の剰余である0〜6のいずれかで初期化する
	int randInt = rand() % 7;
	
	// randIntの値に応じて、switch文を用いて処理を分岐させる
	switch(randInt){
	case 0 :              // 0の場合
		cout << "大吉\n"; // メッセージを出力
		break;            // switch文を抜ける
	case 1 :              // 0の場合
		cout << "中吉\n"; // メッセージを出力
		break;            // switch文を抜ける
	case 2 :              // 0の場合
		cout << "小吉\n"; // メッセージを出力
		break;            // switch文を抜ける
	case 3 :              // 0の場合
		cout << "吉\n";   // メッセージを出力
		break;            // switch文を抜ける
	case 4 :              // 0の場合
		cout << "末吉\n"; // メッセージを出力
		break;            // switch文を抜ける
	case 5 :              // 0の場合
		cout << "凶\n";   // メッセージを出力
		break;            // switch文を抜ける
	case 6 :              // 0の場合
		cout << "大凶\n"; // メッセージを出力
		break;            // switch文を抜ける
	default :             // 念の為の補足用
		break;            // switch文を抜ける
	}
}
