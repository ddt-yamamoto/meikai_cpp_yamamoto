/*
■演習7-2
List6-15(p.220)の関数swapを、参照渡しではなく、ポインタの値渡しによって行うように変更したプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*受け取った2つのポインタが指すオブジェクトの値を互いに入れ替える関数
*@param argumentPointerX, argumentPointerY
*@author Kenta Yamamoto
*@since 2018-10-04
*/
void swap(int* argumentPointerX, int* argumentPointerY) {

	// 受け取ったポインタに間接演算子を適用して参照外しを行い、オブジェクトを指す。
	// 入れ替えのための一時退避用の変数を宣言し、Xの値で初期化することで、Xの値を退避
	int temporaryInt = *argumentPointerX;

	// 参照を外したオブジェクトであるXに対して、同じくオブジェクトであるYの値を代入
	*argumentPointerX = *argumentPointerY;

	// Yに、退避しておいたXの値を代入
	*argumentPointerY = temporaryInt;
}

// main変数を定義
int main() {

	// 入力値を格納する変数を宣言
	int inputIntA; // 変数a
	int inputIntB; // 変数b

	// 入力を促すメッセージを出力
	cout << "変数a:";

	// 入力値を格納
	cin >> inputIntA;

	// 入力を促すメッセージを出力
	cout << "変数b:";

	// 入力値を格納
	cin >> inputIntB;

	// 引数に渡した2つの変数の値を入れ替える関数を呼び出す
	swap(&inputIntA, &inputIntB);

	// 結果の出力
	cout << "変数aとbの値を交換しました。\n";

	// 入れ替えた結果の変数aの値を出力
	cout << "変数aの値は" << inputIntA << "です。\n";

	// 入れ替えた結果の変数bの値を出力
	cout << "変数bの値は" << inputIntB << "です。\n";
}