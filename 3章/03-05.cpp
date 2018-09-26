/*
■演習3-5
読み込んだ値が1未満であれば改行文字を出力しないようにList3-6(p.92)を書き換えたプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を格納する変数を宣言
	int asteriskNumber;
	
	// 説明メッセージを出力
	cout << "何個*を表示しますか：\n";
	
	// 入力値を変数に格納
	cin >> asteriskNumber;
	
	// whileループ用のカウンタ変数を定義
	int countInt = 0;
	
	// カウンタ変数が入力値より小さい限り、ループを行う
	while( countInt < asteriskNumber ){
		
		// '*'を一つ出力
		cout << '*';
		
		// 前置増分演算子をカウンタ変数に対して適用して、それが入力値と等しくなったときはループの最後なので、一度だけ実行される
		if( asteriskNumber == ++countInt ){
			
			// 最後に一度だけ改行コードを出力
			cout << '\n';
		}
	}
}
