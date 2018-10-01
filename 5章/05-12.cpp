/*
■演習5-12
3次元配列の要素数を求める式を示せ。プログラムを作成して確認を行うこと。
*/

#include <iostream> // 入出力

using namespace std;

int main() {

	// int型の3次元配列を定義
	int arrayRectangularInt[3][4][5] = { 0 };

	// double型の3次元配列を定義
	int arrayRectangularDouble[2][3][4] = { 0 };

	// 全体(3次元配列)のサイズを要素である2次元配列のサイズで割る
	cout << sizeof(arrayRectangularInt) / sizeof(arrayRectangularInt[0]) << '\n';

	// double型も同様に行う
	cout << sizeof(arrayRectangularDouble) / sizeof(arrayRectangularDouble[0]) << '\n';
}

/*
■出力結果
3
2
*/