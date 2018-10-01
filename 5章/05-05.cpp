/*
■演習5-5
異なる要素が同じ値とならないように、演習5-3のプログラムを改変したプログラムを作成せよ。
たとえば、{1, 3, 5, 6, 1, 2}とならないようにすること。
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

		// この時点で中身を入れ終わっている要素の数から1引いた数だけ繰り返し
		for (int formerInt = 0; formerInt < countInt; formerInt++) {

			// 最後尾の要素を、formerInt番目の要素と比較する
			if (arrayInt[countInt] == arrayInt[formerInt]){

				// 一致したら、乱数生成をやり直す
				arrayInt[countInt] = rand() % 10 + 1;

				// かつ、また0から確かめなおすために条件式の値をもとに戻す(直後に+1されるので-1にしておく)
				formerInt = -1;
			}
		}
	}

	// 配列と同じ長さだけ繰り返し
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 配列を走査し、出力
		cout << "arrayInt[" << countInt << "] = " << arrayInt[countInt] << '\n';
	}
}