/*
■演習3-10
前問とは逆に、0から正の整数値までカウントアップするプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// カウントアップの上限となる数値を格納する変数を宣言
	int endInt;
	
	// 説明メッセージを出力
	cout << "カウントアップします。\n";
	
	// 入力値が0以下であれば、繰り返し入力を求める
	do{
		
		// カウントアップの上限数値の入力を促す
		cout << "正の整数値：";
		
		// 入力値を変数に格納
		cin >> endInt;
	}
	
	// 入力値が0以下であれば、ループを続ける
	while( endInt <= 0 );
	
	// 0で初期化したcountIntを定義し、endIntに達するまでループごとに1ずつ大きくしていく
	for( int countInt = 0; countInt <= endInt; countInt++ ){
		
		// ループごとに現時点でのcountIntの値を、改行コードつきで出力
		cout << countInt << '\n';
	}
}
