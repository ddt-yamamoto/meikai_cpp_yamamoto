/*
■演習2-14
0,1,2のいずれかの値の乱数を生成し、0であれば『グー』、1であれば『チョキ』、2であれば『パー』と表示するプログラムを作成せよ。
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
	
	// 変数randintを宣言し、乱数に対する3の剰余である0,1,2のいずれかで初期化する
	int randInt = rand() % 3;
	
	// randIntの値に応じて、switch文を用いて処理を分岐させる
	switch( randInt ){
	case 0 :                // 0のとき
		cout << "グー\n";   // メッセージを出力
		break;              // switch文を抜ける
	case 1 :                // 1のとき
		cout << "チョキ\n"; // メッセージを出力
		break;              // switch文を抜ける
	case 2 :                // 2のとき
		cout << "パー\n";   // メッセージを出力
		break;              // switch文を抜ける
	default :               // 念のための補足用
		break;              // switch文を抜ける
	}
}
