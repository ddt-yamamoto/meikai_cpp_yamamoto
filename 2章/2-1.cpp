/*
■演習2-1
右に示すように、整数値を読み込んで、その絶対値を求めて表示するプログラムを作成せよ。
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	int inputInt1st;
	
	// キーボードからの入力を促す
	cout << "整数値：";
	
	// 入力された値を変数に格納
	cin >> inputInt1st;
	
	// 入力された値が負であるかどうかを判定
	if( inputInt1st < 0 ){
		
		// 負の場合のみ、符号を反転させ、正の数にする
		inputInt1st = - inputInt1st;
	}
	
	// 反転、もしくはそのままのものを絶対値として標準出力する
	cout << "その絶対値は" << inputInt1st << "です。\n";
}
