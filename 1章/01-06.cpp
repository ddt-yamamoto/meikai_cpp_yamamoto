/*
■List1-7のプログラムを変更して、小数部をもつ実数値をxやyに代入するプログラムを作成せよ。
その実行結果から、int型変数が整数値のみしか扱えないことを確認すること。
*/

// 入出力ライブラリを利用する
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// int型変数を2つ宣言
	int firstInt;  // 一つ目
	int secondInt; // 二つ目
	
	// 演習として、int型変数に対し、少数部を持つ実数値を代入する
	firstInt  = 63.1; // 一つ目
	secondInt = 18.9; // 二つ目
	
	// 標準出力ストリームに対して、文字列と変数を挿入していく
	cout << "xの値は" << firstInt  << "です。\n";
	
	// 標準出力ストリームに対して、文字列と変数を挿入していく
	cout << "yの値は" << secondInt << "です。\n";
	
	// 変数を演算子によって加工することもできる
	cout << "合計は" <<   firstInt + secondInt       << "です。\n";
	
	// 変数を演算子によって加工することもできる
	cout << "平均は" << ( firstInt + secondInt ) / 2 << "です。\n";
}

/*
■注釈
出力結果は、順に63,18,81,40となる。
firstIntとsecondIntの小数部が切り捨てられていることを確認。
合計は少数を反映すれば82となるが、81となっていることを確認。
切り捨て後に平均をとると40.5となるが、これも40となることを確認。
*/
