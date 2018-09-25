/*
■演習1-11
右に示すように、二つの実数値を読み込み、
その合計と平均を求めて表示するプログラムを作成せよ。
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 標準入力から実数値を受け取るためにdouble型変数を宣言
	double firstInputDouble;
	double secondInputDouble;
	
	// キーボードからの標準入力を促す
	cout << "firstInputDoubleの値：";
	
	// 標準入力ストリームから抽出子を使って値を取り出し、それをdouble型変数のfirstInputDoubleに格納
	cin >> firstInputDouble;
	
	// 続けて、secondInputDoubleについても同様に標準入力から値を受け取って格納する
	cout << "secondInputDoubleの値：";
	cin >> secondInputDouble;
	
	// 演算を行い、結果を標準出力ストリームに挿入
	cout << "合計は" <<   firstInputDouble + secondInputDouble       << "です。\n";
	cout << "平均は" << ( firstInputDouble + secondInputDouble ) / 2 << "です。\n";
}
