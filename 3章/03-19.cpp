/*
■演習3-19
n段の正方形を表示するプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値の格納用変数を宣言
	int inputInt;
	
	// 入力を促すメッセージを出力
	cout << "表示する正方形の段数：";
	
	// 入力値を変数に格納
	cin >> inputInt;
	
	// 正方形の縦軸をループで表現
	for( int lowInt = 1; lowInt <= inputInt; lowInt++ ){
		
		// 正方形の横軸をループで表現
		for( int colInt = 1; colInt <= inputInt; colInt++ ){
			
			// 描画用の文字を出力
			cout << '*';
		}
		
		// 横軸のループが終わり、次の行に進むので改行を出力
		cout << '\n';
	}
}
