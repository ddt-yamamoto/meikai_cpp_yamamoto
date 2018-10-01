/*
■演習5-1
要素型がint型で要素数が5の配列の要素に対して、先頭から順に5,4,3,2,1を代入して表示するプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {
	
	// 配列の長さを示す定値オブジェクトを定義
	const int ARRAY_LENGTH = 5;

	// int型配列を宣言
	int arrayInt[ARRAY_LENGTH] = { 0 };

	// 配列の長さと同じ数繰り返す
	for(int countInt = 0; countInt < ARRAY_LENGTH; countInt++){

		// 要素数 - 要素番号 を配列に格納する
		arrayInt[countInt] = ARRAY_LENGTH - countInt;
	}

	// 配列の長さと同じ数繰り返す
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 配列を走査して出力
		cout << "arrayInt[" << countInt << "] =" << arrayInt[countInt] << '\n';
	}
}