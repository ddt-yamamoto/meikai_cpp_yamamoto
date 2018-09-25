/*
■演習3-15
読み込んだ整数値の全約数を表示するList3-12を書きかえて、約数の表示が終了した後に、約数の個数を表示するプログラムを作成せよ。
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
	cout << "整数値：";
	
	// 入力値を変数に格納
	cin >> inputInt;
	
	// 約数のカウント用変数を0で初期化
	int divisorCount = 0;
	
	// 1からinputIntの値まで、約数かどうかのチェックを行うループ処理
	for( int countInt = 1; countInt <= inputInt; countInt++ ){
		
		// 剰余が0であれば約数ということで出力とカウントを行う
		if( inputInt % countInt == 0 ){
			
			// 約数を出力
			cout << countInt << '\n';
			
			// 約数のカウンタをインクリメント
			divisorCount++;
		}
	}
	
	// 最後に約数のカウント結果を出力
	cout << "約数は" << divisorCount << "個です。\n";
}
