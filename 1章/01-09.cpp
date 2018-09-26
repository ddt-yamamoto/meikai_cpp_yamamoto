/*
■演習1-9
右に示すように、キーボードから読み込んだ整数値をそのまま反復して表示するプログラムを作成せよ。
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// int変数の宣言
	int firstInputInt;
	
	// firstInputIntの値の入力を促す
	cout << "整数値：";
	
	// 標準入力で受け取った値を、抽出子を用いてfirstInputIntに格納
	cin >> firstInputInt;
	
	// 受け取った値を標準出力する
	cout << firstInputInt << "と入力しましたね。\n";
}
