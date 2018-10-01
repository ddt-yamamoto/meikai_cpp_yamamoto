/*
■演習5-12
3次元配列の要素数を求める式を示せ。プログラムを作成して確認を行うこと。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 配列の添字にする定数の定義
	const int Index1st = 3; // 第一添字
	const int Index2nd = 4; // 第二添字
	const int Index3rd = 5; // 第三添字

	// int型の3次元配列を定義
	int arrayRectangularInt[Index1st][Index2nd][Index3rd] = { 0 };

	// double型の3次元配列を定義
	double arrayRectangularDouble[Index1st][Index2nd][Index3rd] = { 0 };

	// 全体(3次元配列)のサイズを要素である2次元配列のサイズで割る
	cout << sizeof(arrayRectangularInt) / sizeof(arrayRectangularInt[0]) << '\n';

	// double型も同様に行う
	cout << sizeof(arrayRectangularDouble) / sizeof(arrayRectangularDouble[0]) << '\n';
}

/*
■出力結果
3
3
*/