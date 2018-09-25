/*
■演習3-6
読み込んだ値の個数だけ記号文字を表示するプログラムを作成せよ。+と-を交互に表示すること。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を格納する変数を宣言
	int symbolNumber;
	
	// 説明メッセージを出力
	cout << "何個表示しますか：\n";
	
	// 入力値を変数に格納
	cin >> symbolNumber;
	
	// whileループ用のカウンタ変数を定義
	int countInt = 0;
	
	// カウンタ変数が入力値より小さい限り、ループを行う
	while( countInt < symbolNumber ){
		
		// カウンタ変数に対する2の剰余を求め、+と-の出力を交互に振り分ける。
		if( countInt % 2 == 0 ){
			
			// '+'を一つ出力
			cout << '+';
		}
		
		// 剰余が0でないときはこちらになる
		else{
			
			// '-'を一つ出力
			cout << '-';
		}
		
		// 前置増分演算子をカウンタ変数に対して適用して、それが入力値と等しくなったときはループの最後なので、一度だけ実行される
		if( symbolNumber == ++countInt ){
			
			// 最後に一度だけ改行コードを出力
			cout << '\n';
		}
	}
}
