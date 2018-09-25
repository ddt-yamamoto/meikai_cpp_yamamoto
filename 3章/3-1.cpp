/*
■演習3-1
読み込んだ整数値の符号を判定するList2-5(p.44)を、好きなだけ何度でも入力・表示を繰り返せるようにしたプログラムを作成せよ。
*/

// 入出力、stringクラスを扱うので、インクルード
#include <iostream>
#include <string>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 繰り返しすかどうかの問いに対する、Yes/Noの格納用String型変数の宣言
	string retryConfirm;
	
	// whileの条件を満たす限り、最低一回以上繰り返し実行
	do{
		
		// 入力値を受け取るための変数の宣言
		int inputIntFirst;
		
		// キーボードからの入力を促す
		cout << "整数値：";
		
		// 入力された値を変数に格納
		cin >> inputIntFirst;
		
		// 入力された値が正である場合
		if( inputIntFirst > 0 ){
			
			// 判定結果を出力
			cout << "その値は正です。\n";
		}
		
		// 入力された値が負である場合
		else if( inputIntFirst < 0 ){
			
			// 判定結果を出力
			cout << "その値は負です。\n";
		}
		
		// 入力された値が0である場合
		else{
			
			// 判定結果を出力
			cout << "その値は0です。\n";
		}
		
		// 繰り返しすかどうかの問い、キーボード入力を促す
		cout << "もう一度？ Y…Yes/N…No:";
		
		// 入力された文字列の格納
		cin >> retryConfirm;
	}
	
	// 入力された値が"Y"または"y"ならば、条件の評価値がtrueとなり、ループ本体をもう一度実行。
	// そうでなければ、条件の評価値がfalseとなり、do文の実行を終了。
	while( retryConfirm == "Y" || retryConfirm == "y" );
}
