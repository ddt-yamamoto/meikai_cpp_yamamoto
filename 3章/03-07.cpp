/*
■演習3-7
右に示すように、正の整数値を読み込んで、その桁数を出力するプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を格納する変数を宣言
	int quotientInt;
	
	// 説明メッセージを出力
	cout << "正の整数値：\n";
	
	// 入力値を変数に格納
	cin >> quotientInt;
	
	// 求める桁数を宣言して0で初期化
	int digitNumber = 0;
	
	// 入力値(2周目以降は商)が0より大きい限り、ループを行う
	while( quotientInt > 0 ){
		
		// 入力値の商を求める
		quotientInt /= 10;
		
		// 桁数をインクリメント
		digitNumber++;
		
		// 商が0の場合
		if( quotientInt == 0 ){
			
			// 最終的な桁数を出力
			cout << "その値は" << digitNumber << "桁です。\n";
		}
	}
}
