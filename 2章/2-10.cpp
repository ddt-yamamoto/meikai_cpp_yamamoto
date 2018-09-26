/*
■演習2-10
キーボードから読み込んだ三つの整数の最小値を求めて表示するプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	int inputInt1st; // 整数A
	int inputInt2nd; // 整数B
	int inputInt3rd; // 整数C
	
	// キーボードからの入力を促す
	cout << "整数A：";
	
	// 入力された値を変数に格納
	cin >> inputInt1st;
	
	// キーボードからの入力を促す
	cout << "整数B：";
	
	// 入力された値を変数に格納
	cin >> inputInt2nd;
	
	// キーボードからの入力を促す
	cout << "整数C：";
	
	// 入力された値を変数に格納
	cin >> inputInt3rd;
	
	// 最小値を入れておく変数minIntを、一つ目の入力値で初期化
	int minInt = inputInt1st;
	
	// 二つ目の入力値がminIntより小さいかを判定
	if( inputInt2nd < minInt ){
		
		// 最小値を更新する
		minInt = inputInt2nd;
	}
	
	// 同様に、三つ目の入力値がminIntより小さいかを判定
	if( inputInt3rd < minInt ){
		
		// 最小値を更新する
		minInt = inputInt3rd;
	}
	
	// メッセージを出力
	cout << "入力値の中での最小値は、" << minInt << "です。\n";
}
