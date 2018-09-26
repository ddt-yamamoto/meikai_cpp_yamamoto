/*
■演習1-12
右に示すように、三角形の底辺と高さを読み込んで、
その面積を表示するプログラムを作成せよ。
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 標準入力から実数値を受け取るためにdouble型変数を宣言
	double inputBottomDouble; // 底辺
	double inputHeightDouble; // 高さ
	
	// キーボードからの標準入力を促す
	cout << "底辺：";
	
	// 標準入力ストリームから抽出子を使って値を取り出し、それをdouble型変数のinputBottomDoubleに格納
	cin >> inputBottomDouble;
	
	// 続けて、inputHeightDoubleについても同様に標準入力から値を受け取って格納する
	// 入力を促す
	cout << "高さ：";
	
	// 値を格納
	cin >> inputHeightDouble;
	
	// 演算を行い、結果を標準出力ストリームに挿入
	cout << "合計は" << ( inputBottomDouble * inputHeightDouble ) / 2 << "です。\n";
}
