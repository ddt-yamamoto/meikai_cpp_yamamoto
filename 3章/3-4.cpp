/*
■演習3-4
List3-4のwhile文終了時にxの値が-1になることを確認できるように書き換えたプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// カウントダウンを開始する数値を格納する変数を宣言
	int countInt;
	
	// 説明メッセージを出力
	cout << "カウントダウンします。\n";
	
	// 入力値が0以下であれば、繰り返し入力を求める
	do{
		
		// カウントダウンの開始数値の入力を促す
		cout << "正の整数値：";
		
		// 入力値を変数に格納
		cin >> countInt;
	}
	
	// 入力値が0以下であれば、ループを続ける
	while( countInt <= 0 );
	
	// countIntが0以上である限り、カウントダウンを行う
	while( countInt >= 0 ){
		
		// 現在のcountIntの値を、改行コードとともに出力
		cout << countInt << "\n";
		
		// countIntの値をデクリメントする。
		countInt--;
	}
	
	// カウントダウン終了後、さらにもう一度デクリメントされたcountIntの現在値を表示する
	cout << "現在のxの値は" << countInt << "です\n";
}
