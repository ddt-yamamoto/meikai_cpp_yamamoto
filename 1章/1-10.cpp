/*
■演習1-10
右に示すように、キーボードから読み込んだ整数値に
10を加えた値と10を減じた値を出力するプログラムを作成せよ。
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 標準入力を受け取るためのint型変数の宣言
	int firstInputInt;
	
	// キーボードからの標準入力を促す
	cout << "整数値：";
	
	// 標準入力ストリームから抽出子を使って値を取り出し、それをint型変数のfirstInputIntに格納
	cin >> firstInputInt;
	
	// 演算結果を標準出力ストリームに挿入
	cout << "10を加えた値は" << firstInputInt + 10 << "です。\n";
	cout << "10を減じた値は" << firstInputInt - 10 << "です。\n";
}
