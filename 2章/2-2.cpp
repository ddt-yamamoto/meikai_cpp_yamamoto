/*
■演習2-2
List2-5の最後のelseを、else if( n==0 )に変更するとどうなるかを検討せよ。
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
	
	// 入力された値が正である場合
	if( inputInt1st > 0 ){
		
		// 判定結果を出力
		cout << "その値は正です。\n";
	}
	
	// 入力された値が負である場合
	else if( inputInt1st < 0 ){
		
		// 判定結果を出力
		cout << "その値は負です。\n";
	}
	
	// 入力された値が0である場合
	else if( inputInt1st == 0 ){
		
		// 判定結果を出力
		cout << "その値は0です。\n";
	}
}

/*
■注釈
変更した結果、境界値で試験を行い、問題ないことを確認。
*/