/*
■演習2-8
二つの整数値を読み込んで、それらの値の差を表示するプログラムを作成せよ。
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	int inputInt1st; // 整数a
	int inputInt2nd; // 整数b
	
	// キーボードからの入力を促す
	cout << "整数aを入力：";
	
	// 入力された値を変数に格納
	cin >> inputInt1st;
	
	// キーボードからの入力を促す
	cout << "整数bを入力：";
	
	// 入力された値を変数に格納
	cin >> inputInt2nd;
	
	// まず条件演算子を用いて大小判定を行い、大きいほうから小さいほうを引いた差にて、differenceIntを初期化する
	int differenceInt = inputInt1st > inputInt2nd ? inputInt1st - inputInt2nd : inputInt2nd - inputInt1st;
	
	// 結果を表示
	cout << "二つの整数の差は" << differenceInt << "です。\n";
}
