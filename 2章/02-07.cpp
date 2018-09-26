/*
■演習2-7
二つの実数値を読み込んで、大きいほうの値を表示するプログラムを作成せよ。
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	double inputDouble1st; // 実数値a
	double inputDouble2nd; // 実数値b
	
	// キーボードからの入力を促す
	cout << "実数値aを入力：";
	
	// 入力された値を変数に格納
	cin >> inputDouble1st;
	
	// キーボードからの入力を促す
	cout << "実数値bを入力：";
	
	// 入力された値を変数に格納
	cin >> inputDouble2nd;
	
	// 条件演算子を用いて、aとbの大きいほうの値で変数maxDoubleを初期化
	double maxDouble = inputDouble1st > inputDouble2nd ? inputDouble1st : inputDouble2nd;
	
	// メッセージを出力
	cout << "大きいほうの実数は" << maxDouble << "です。\n";
}
