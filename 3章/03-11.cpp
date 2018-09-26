/*
■演習3-11
1からnまでの和を求めるList3-9(p.98)をfor文で実現せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 順に足していく上限となる数値を格納する変数を宣言
	int endInt;
	
	// 説明メッセージを出力
	cout << "1からnまでの和を求めます。\n";
	
	// 入力値が0以下であれば、繰り返し入力を求める
	do{
		
		// 順に足していく上限となる数値の入力を促す
		cout << "nの値：";
		
		// 入力値を変数に格納
		cin >> endInt;
	}
	
	// 入力値が0以下であれば、ループを続ける
	while( endInt <= 0 );
	
	// 合計値を保持する変数を0で初期化して定義
	int sumInt = 0;
	
	// 1から始まり、上限として入力された値まで1周ごとに1ずつ増やしながらループする
	for( int countInt = 1; countInt <= endInt; countInt++ ){
		
		// 現在のcountIntの値を合計値に加算する
		sumInt += countInt;
	}
	
	// 結果を表示
	cout << "1から" << endInt << "までの和は" << sumInt << "です。\n";
}
