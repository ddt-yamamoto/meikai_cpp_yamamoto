/*
■演習5-2
要素型がdouble型で要素数が5の配列の全要素に0.0を代入して表示するプログラムを作成せよ。
*/

#include <iostream> // 入出力
#include <iomanip> // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 配列の長さを示す定値オブジェクトの定義
	const int arrayLength = 5;

	// double型配列の宣言
	double arrayDouble[arrayLength];

	// 配列の長さと同じ数だけ繰り返し
	for (int countInt = 0; countInt < arrayLength; countInt++) {

		// すべての要素に0.0を代入していく
		arrayDouble[countInt] = 0.0;
	}

	// 浮動小数点数を固定小数点記法で出力、かつ小数部を1桁とする
	cout << fixed << setprecision(1);

	// 配列の長さと同じ数だけ繰り返し
	for (int countInt = 0; countInt < arrayLength; countInt++) {

		// 配列を走査して出力
		cout << "arrayDouble[" << countInt << "] = " << arrayDouble[countInt] << '\n';
	}
}