/*
■演習5-9
配列aの全要素を配列bに対して逆順にコピーするプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 配列の長さを定値オブジェクトで定義
	const int ARRAY_LENGTH = 5;

	// コピー元にする配列を定義
	int arrayIntOriginal[ARRAY_LENGTH] = { 0 };

	// リバースコピー先の配列を定義
	int arrayIntReverse[ARRAY_LENGTH]  = { 0 };

	// 配列の長さと同じだけループ
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 配列に格納する値の入力を促す
		cout << "arrayIntOriginal[" << countInt << "] : ";

		// 配列の要素に順に格納
		cin >> arrayIntOriginal[countInt];
	}

	// 配列の長さと同じだけループ
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// コピー元の最後尾から順に、コピー先の先頭から順に代入していく
		arrayIntReverse[countInt] = arrayIntOriginal[ARRAY_LENGTH - countInt - 1];
	}

	// メッセージを出力
	cout << "逆順コピーしたものを出力します。\n";

	// 配列の長さと同じだけループ
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// リバースコピー先の配列を走査して出力
		cout << "arrayIntReverse[" << countInt << "] : " << arrayIntReverse[countInt] << '\n';
	}
}