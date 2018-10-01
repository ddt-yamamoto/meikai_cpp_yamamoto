/*
■演習5-3
要素型がint型で要素数が6の配列の全要素を1〜10の乱数で埋め尽くす(1以上10以下のランダムな値を代入する)プログラムを作成せよ。
*/

#include <iostream> // 入出力
#include <cstdlib> // 乱数
#include <ctime> // 日時

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 乱数の種を生成
	srand(time(NULL));

	// 配列の長さを示す定値オブジェクトを定義
	const int ARRAY_LENGTH = 6;

	// int型配列の宣言
	int arrayInt[ARRAY_LENGTH] = { 0 };

	// 配列と同じ長さだけ繰り返し
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 乱数の10の剰余+1を代入して、1〜10の乱数とする
		arrayInt[countInt] = rand() % 10 + 1;
	}

	// 配列と同じ長さだけ繰り返し
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 配列を走査し、出力
		cout << "arrayInt[" << countInt << "] = " << arrayInt[countInt] << '\n';
	}
}