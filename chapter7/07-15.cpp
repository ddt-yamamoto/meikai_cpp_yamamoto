/*
■演習7-15
double型のオブジェクトを生成して0.0で初期化するプログラムを作成せよ。
*/

#include <iostream> // 入出力
#include <iomanip> // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// double型オブジェクトを生成し、0.0で初期化し、それを初期化子としてdouble*型ポインタsampleDoubleを定義する。
	double* sampleDouble = new double(0.0);

	// 小数部1桁まで表示するように操作子による処理をして、ポインタsampleDoubleの指すDouble型オブジェクトの値を出力
	cout << fixed << setprecision(1) << *sampleDouble;
}