/*
■演習3-24
合計だけでなく平均も求めるように、List3-17を書きかえたプログラムを作成せよ。
なお、読み込んだ負の数の個数は平均を求める際の分母から除外すること。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 個数として入力された値の格納用変数を宣言
	int inputNumber;
	
	// 説明メッセージを出力
	cout << "整数の合計と平均を求めます。\n";
	
	// 入力を促すメッセージを出力
	cout << "何個加算しますか：";
	
	// 入力値を変数に格納
	cin >> inputNumber;
	
	// 合計値を格納する変数を0で初期化。これは必ず整数になるが、平均の計算のためにdouble型にする。
	double sumDouble = 0;
	
	// 平均値を格納する変数を0で初期化
	double avgDouble = 0;
	
	// 加算していく入力値のうち、負の数を除いたものをカウントするための変数を0で初期化
	int practicalCountInt = 0;
	
	// inputNumberと同じ回数だけ、加算の入力を受け付けるようにループする
	for( int countInt = 1; countInt <= inputNumber; countInt++ ){
		
		// 加算していく入力値を受け取る変数を宣言
		int temporaryInputInt;
		
		// 入力を促すメッセージを出力
		cout << "整数：";
		
		// 入力値を変数に格納
		cin >> temporaryInputInt;
		
		// 負の数が入力されたとき、以降の処理を飛ばしてfor文の式に戻る
		if( temporaryInputInt < 0 ){
			
			// 注意メッセージを表示
			cout << "負の数は加算しません。\n";
			
			// for文内の以降の処理を飛ばし、for文の<<式>>(countInt++)を実行して<<条件>>(countInt <= inputNumber)の判定に戻る
			continue;
		}
		
		// 入力値を合計値に足していく
		sumDouble += temporaryInputInt;
		
		// 現在までの「負の数を除く入力回数」をインクリメント
		practicalCountInt++;
	}
	
	// 合計値を、「負の数を除く入力回数」で割る
	avgDouble = sumDouble / practicalCountInt;
	
	// 結果メッセージを出力
	cout << "合計は" << sumDouble << "です。\n";
	cout << "平均は" << avgDouble << "です。\n";
}
