/*
■演習4-11
float型の変数を0.0から1.0まで0.001ずつ増やしながら、その値と、その値の2乗を表示するプログラムを作成せよ。
*/

#include <iostream> // 入出力
#include <iomanip>  // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// fixed操作子により、浮動小数点数を固定小数点記法で出力
	// setprecision操作子により、小数部の桁数を6にする
	cout << fixed << setprecision(6);

	// ラベルを出力
	cout << "  float      square\n";

	// ラベルを出力
	cout << "-------------------\n";

	// 0.001ずつ増やしていくcountFloatが1.0に達するまでループ
	for (float countFloat = 0.0F; countFloat <= 1.0F; countFloat += 0.001F) {

		// countFloatと、その2乗を並べて表示
		cout << countFloat << "   " << countFloat * countFloat << '\n';
	}
}