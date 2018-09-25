/*
■演習2-6
キーボードから読み込んだ点数に応じて、優/良/可/不可を判定して表示するプログラムを作成せよ。
判定は以下のように行うこと。
0～59⇒不可/60～69⇒可/70～79⇒良/80～100⇒優
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	int inputIntFirst;
	
	// キーボードからの入力を促す
	cout << "点数を入力：";
	
	// 入力された値を変数に格納
	cin >> inputIntFirst;
	
	// 点数が0以上60未満の場合
	if( inputIntFirst >= 0 && inputIntFirst < 60 ){
		
		// 判定を表示する
		cout << "不可\n";
	}
	
	// 点数が60以上70未満の場合
	else if( inputIntFirst >= 60 && inputIntFirst < 70 ){
		
		// 判定を表示する
		cout << "可\n";
	}
	
	// 点数が70以上80未満の場合
	else if( inputIntFirst >= 70 && inputIntFirst < 80 ){
		
		// 判定を表示する
		cout << "良\n";
	}
	
	// 点数が80以上100以下の場合
	else if( inputIntFirst >= 80 && inputIntFirst <= 100 ){
		
		// 判定を表示する
		cout << "優\n";
	}
}
