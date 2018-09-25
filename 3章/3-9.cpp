/*
■演習3-9
正の整数値を0までカウントダウンするList3-4(p.88)をfor文で実現せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// カウントダウンを開始する数値を格納する変数を宣言
	int startInt;
	
	// 説明メッセージを出力
	cout << "カウントダウンします。\n";
	
	// 入力値が0以下であれば、繰り返し入力を求める
	do{
		
		// カウントダウンの開始数値の入力を促す
		cout << "正の整数値：";
		
		// 入力値を変数に格納
		cin >> startInt;
	}
	
	// 入力値が0以下であれば、ループを続ける
	while( startInt <= 0 );
	
	// startIntの値が0になるまで、ループごとに1ずつ小さくしていく
	for(; startInt >= 0; startInt-- ){
		
		// ループごとに現時点でのstartIntの値を、改行コードつきで出力
		cout << startInt << '\n';
	}
}
