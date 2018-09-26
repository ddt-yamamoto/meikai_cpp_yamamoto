/*
■演習2-3
二つのint型変数a,bに値を読み込んで、その大小関係を以下のいずれかで表示するプログラムを作成せよ。
『aのほうが大きいです。』『bのほうが大きいです。』『aとbは同じ値です。』
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	int inputInt1st; // 整数a
	int inputInt2nd; // 整数b
	
	// キーボードからの入力を促す
	cout << "整数a：";
	
	// 入力された値を変数に格納
	cin >> inputInt1st;
	
	// キーボードからの入力を促す
	cout << "整数b：";
	
	// 入力された値を変数に格納
	cin >> inputInt2nd;
	
	// a > b の場合
	if( inputInt1st > inputInt2nd ){
		
		// 判定結果を出力
		cout << "aのほうが大きいです。\n";
	}
	
	// a < b の場合
	else if( inputInt1st < inputInt2nd ){
		
		// 判定結果を出力
		cout << "bのほうが大きいです。\n";
	}
	
	// それ以外( a == b )の場合
	else{
		
		// 判定結果を出力
		cout << "aとbは同じ値です。\n";
	}
}
