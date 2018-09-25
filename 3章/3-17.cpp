/*
■演習3-17
季節を求めるList3-1(p.82)の月の読込みにおいて、1～12以外の値が入力された場合は、
再入力させるように変更したプログラムを作成せよ(do文の中にdo文が入る二重ループとなる)。
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
		int inputInt;
		
		// 1～12の整数が入力されるまで繰り返す
		do{
			// キーボードからの入力を促す
			cout << "季節を求めます。\n何月ですか：";
			
			// 入力された値を変数に格納
			cin >> inputInt;
		}
		
		// 入力値が1～12でない場合、もう一度繰り返す
		while( inputInt < 1 || inputInt > 12 );
		
		// 3～5月の場合
		if( inputInt >= 3 && inputInt <= 5 ){
			
			//判定メッセージを出力
			cout << "それは春です。\n";
		}
		
		// 6～8月の場合
		else if( inputInt >= 6 && inputInt <= 8 ){
			
			//判定メッセージを出力
			cout << "それは夏です。\n";
		}
		
		// 9～11月の場合
		else if( inputInt >= 9 && inputInt <= 11 ){
			
			//判定メッセージを出力
			cout << "それは秋です。\n";
		}
		
		// 12, 1, 2月の場合
		else if( inputInt == 12 || inputInt == 1 || inputInt == 2 ){
			
			//判定メッセージを出力
			cout << "それは冬です。\n";
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
