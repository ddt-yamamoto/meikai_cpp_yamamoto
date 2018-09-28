/*
■演習4-10
List4-15のように、float型変数を0.0から1.0まで0.001ずつ増やしていく様子と、
List4-16のように、int型の変数を0から1000までインクリメントした値を1000で割った値を求める様子を、
横に並べて表示するプログラムを作成せよ。
*/

#include <iostream> // 入出力
#include <iomanip>  // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数の宣言
int main() {
	
	// float型変数を定義
	float countFloat = 0.0F;

	// fixed操作子により、浮動小数点数を固定小数点記法で出力
	// setprecision操作子により、小数部の桁数を6にする
	cout << fixed << setprecision(6);

	// ラベルを出力
	cout << "  float      int\n";

	// ラベルを出力
	cout << "-------------------\n";

	// 1000回繰り返す
	for (int countInt = 0; countInt <= 1000; countInt++) {

		// int型変数を1000で割ったものをfloat型にキャストし、float型変数に格納する
		float dividedCountInt = static_cast<float>(countInt) / 1000;

		// 現時点でのfloat型変数と、元々整数だったものを1000で割ったものを並べて表示
		cout << countFloat << "   " << dividedCountInt << '\n';

		// float型変数を(誤差含む)0.001ずつインクリメント
		countFloat += 0.001F;
	}
}