/*
■演習7-3
List6-16(p.222)の関数sortを、参照渡しではなく、
ポインタの値渡しによって行うように変更したプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*2つの引数のポインタが指すオブジェクトの値を入れ替える
*@param int* argumentPointerX 入れ替える対象
*@param int* argumentPointerY 入れ替える対象
*@author Kenta Yamamoto
*@since 2018-10-08
*/
void swap(int* argumentPointerX, int* argumentPointerY) {

	// 引数であるポインタの参照外しを行い、入れ替え作業を行う
	// 一時退避用変数にXを退避
	int temporaryInt = *argumentPointerX;

	// XにYを代入
	*argumentPointerX = *argumentPointerY;

	// Yに退避しておいたXを代入して入れ替え完了
	*argumentPointerY = temporaryInt;
}

/**
*3つの引数のポインタが指すオブジェクトの値を入れ替えて昇順ソートする
*@param int* argumentPointerA 並べ替える対象
*@param int* argumentPointerB 並べ替える対象
*@param int* argumentPointerC 並べ替える対象
*@author Kenta Yamamoto
*@since 2018-10-08
*/
void sort(int* argumentPointerA, int* argumentPointerB, int* argumentPointerC) {

	// aとbで大きい方がbになるようにする
	if (*argumentPointerA > *argumentPointerB) {

		// 値を入れ替える関数を呼ぶ
		swap(argumentPointerA, argumentPointerB);
	}

	// bとcで大きい方がcになるようにすることで、abcの最大値がcの位置にくる
	if (*argumentPointerB > *argumentPointerC) {

		// 値を入れ替える関数を呼ぶ
		swap(argumentPointerB, argumentPointerC);
	}

	// 残りのaとbが昇順になるように並べ替え
	if (*argumentPointerA > *argumentPointerB) {

		// 値を入れ替える関数を呼ぶ
		swap(argumentPointerA, argumentPointerB);
	}
}

// main関数の定義
int main() {

	// 入力値を格納する変数を宣言
	int inputIntA; // 変数a
	int inputIntB; // 変数b
	int inputIntC; // 変数c

	// 入力を促す
	cout << "変数a:";

	// 入力値を格納
	cin >> inputIntA;

	// 入力を促す
	cout << "変数b:";

	// 入力値を格納
	cin >> inputIntB;

	// 入力を促す
	cout << "変数c:";

	// 入力値を格納
	cin >> inputIntC;

	// ソート関数を呼び出して入力値を渡す
	sort(&inputIntA, &inputIntB, &inputIntC);

	// 結果を出力
	cout << "変数a, b, cを昇順に並べ替えました。\n";

	// 結果を出力
	cout << "変数aの値は" << inputIntA << "です。\n";

	// 結果を出力
	cout << "変数bの値は" << inputIntB << "です。\n";

	// 結果を出力
	cout << "変数cの値は" << inputIntC << "です。\n";
}