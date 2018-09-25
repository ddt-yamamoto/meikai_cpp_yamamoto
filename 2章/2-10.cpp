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
	int inputIntFirst;
	int inputIntSecond;
	int inputIntThird;
	
	// キーボードからの入力を促し、入力された値を変数に格納
	cout << "整数A：";		cin >> inputIntFirst;
	cout << "整数B：";		cin >> inputIntSecond;
	cout << "整数C：";		cin >> inputIntThird;
	
	// 最小値を入れておく変数minIntを、一つ目の入力値で初期化
	int minInt = inputIntFirst;
	
	// 二つ目の入力値がminIntより小さいかを判定
	if( inputIntSecond < minInt ){
		
		// 最小値を更新する
		minInt = inputIntSecond;
	}
	
	// 同様に、三つ目の入力値がminIntより小さいかを判定
	if( inputIntThird < minInt ){
		
		// 最小値を更新する
		minInt = inputIntThird;
	}
	
	cout << "入力値の中での最小値は、" << minInt << "です。\n";
}
