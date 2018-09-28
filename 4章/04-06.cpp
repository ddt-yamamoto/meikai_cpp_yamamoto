/*
■演習4-6
3種類の浮動小数点型の大きさをsizeof演算子によって表示するプログラムを作成せよ。
*/

// 入出力を扱うのでインクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// sizeof演算子を用いて3種類の浮動小数点型の大きさを出力
	cout << "float      型の大きさ：" << sizeof(float)       << '\n'; // float型
	cout << "double     型の大きさ：" << sizeof(double)      << '\n'; // double型
	cout << "long double型の大きさ：" << sizeof(long double) << '\n'; // long double型
}