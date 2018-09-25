/*
■演習3-16
右に示すように、1からnまでの整数値の2乗値を表示するプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を格納する変数を宣言
	int inputInt;
	
	// 入力を促すメッセージを出力
	cout << "nの値：";
	
	// 入力値を変数に格納
	cin >> inputInt;
	
	// 1からnの値までループ
	for( int countInt = 1; countInt <= inputInt; countInt++ ){
		
		// 計算結果を含むメッセージを出力
		cout << countInt << "の２乗値は" << countInt * countInt << '\n';
	}
}
