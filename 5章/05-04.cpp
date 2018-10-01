/*
■演習5-4
連続する要素が同じ値とならないように、演習5-3のプログラムを改変したプログラムを作成せよ。
たとえば、{1, 3, 5, 5, 3, 2}とならないようにすること。
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

	// 一つ前の要素を格納する変数を定義
	int formerElementInt = 0;

	// 配列と同じ長さだけ繰り返し
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {
		
		// 同じ値が連続しないように繰り返し
		do {

			// 乱数の10の剰余+1を代入して、1〜10の乱数とする
			arrayInt[countInt] = rand() % 10 + 1;

		// 一つ前の要素と同じ値が格納されることがなくなるまで繰り返す
		} while (arrayInt[countInt] == formerElementInt);

		// 乱数が決定したら、それを新たに「一つ前の要素」としておく
		formerElementInt = arrayInt[countInt];
	}

	// 配列と同じ長さだけ繰り返し
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 配列を走査し、出力
		cout << "arrayInt[" << countInt << "] = " << arrayInt[countInt] << '\n';
	}
}