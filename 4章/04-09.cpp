/*
■演習4-9
三つの整数値を読み込んで、その合計と平均を表示するプログラムを作成せよ。
平均は実数値で表示すること。キャスト記法を用いるもの、関数的記法を用いるもの、static_cast演算子を用いるものを作成すること。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 平均が整数にならないように、int変数を3つ定義
	int int1st = 1; // 1つ目
	int int2nd = 2; // 2つ目
	int int3rd = 4; // 3つ目

	// 算術演算と型変換の結果を出力
	cout << "合計                   ：" << int1st + int2nd + int3rd << '\n';

	// 算術演算と型変換の結果を出力
	cout << "平均(キャスト記法)     ：" << ((double)(int1st + int2nd + int3rd) / 3) << '\n';

	// 算術演算と型変換の結果を出力
	cout << "平均(関数的記法)       ：" << (double(int1st + int2nd + int3rd) / 3) << '\n';

	// 算術演算と型変換の結果を出力
	cout << "平均(static_cast演算子)：" << (static_cast<double>(int1st + int2nd + int3rd) / 3) << '\n';
}