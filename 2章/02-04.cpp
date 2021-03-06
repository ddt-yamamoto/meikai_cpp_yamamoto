/*
■演習2-4
正の整数値を読み込んで、それが5で割り切れれば『その値は5で割り切れます。』と表示し、そうでなければ
『その値は5で割り切れません。』と表示するプログラムを作成せよ。
※正でない値を読み込んだ場合は、『正でない値が入力されました。』と表示すること。
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
	cout << "判定する正の整数を入力：";
	
	// 入力された値を変数に格納
	cin >> inputInt1st;
	
	// 値が正であることを先にチェックする
	if( inputInt1st <= 0 ){
		
		// 判定結果を出力
		cout << "正でない値が入力されました。\n";
	}
	
	// 5で割り切れる場合
	else if( inputInt1st % 5 == 0 ){
		
		// 判定結果を出力
		cout << "その値は5で割り切れます。\n";
	}
	
	// 5で割り切れない場合
	else{
		
		// 判定結果を出力
		cout << "その値は5で割り切れません。\n";
	}
}
