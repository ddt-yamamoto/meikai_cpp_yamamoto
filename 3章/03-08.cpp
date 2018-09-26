/*
■演習3-8
読み込んだ値が1未満であれば改行文字を出力しないように、List3-10(p.100)を書き換えたプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を格納する変数を宣言
	int asteriskNumber;
	
	// 入力を促すメッセージを出力
	cout << "何個*を表示しますか：";
	
	// 入力された値を変数に格納
	cin >> asteriskNumber;
	
	// 入力値と同じ回数だけループ処理を行う
	for( int countInt = 0; countInt < asteriskNumber; countInt++ ){
		
		// ループごとに一つの文字を出力
		cout << '*';
	}
	
	// 入力された値が1未満であれば、最後の改行文字は出力しない
	if( asteriskNumber >= 1 ){
		
		// 最後の改行文字を出力
		cout << '\n';
	}
}
