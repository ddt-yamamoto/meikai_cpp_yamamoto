/*
■演習3-23-b
合計だけでなく平均も求めるように、List3-15およびList3-16を書きかえたプログラムをそれぞれ作成せよ。
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
	
	// カウント変数をループの外でも使うので、先に定義だけしておく
	int countInt = 0;
	
	// inputNumberと同じ回数だけ、加算の入力を受け付けるようにループする
	for( ; countInt < inputNumber; countInt++ ){
		
		// 加算していく入力値を受け取る変数を宣言
		int temporaryInputInt;
		
		// 入力を促すメッセージを出力
		cout << "整数：";
		
		// 入力値を変数に格納
		cin >> temporaryInputInt;
		
		// 合計値が1000を超える場合、最後の数値は無視してループを抜ける
		if( sumDouble + temporaryInputInt > 1000 ){
			
			// 注意メッセージを出力
			cout << "合計が1,000を超えました。\n最後の数値は無視します。\n";
			
			// for文を抜ける
			break;
		}
		
		// 入力値を合計値に足していく
		sumDouble += temporaryInputInt;
	}
	
	// 足していく整数の入力の際、初めが1000以上ですぐ終わった場合、平均は求めない
	if( countInt != 0 ){
		
		// 合計値を、入力回数で割る
		avgDouble = sumDouble / countInt;
	}
	
	// 結果メッセージを出力
	cout << "合計は" << sumDouble << "です。\n";
	
	// 結果メッセージを出力
	cout << "平均は" << avgDouble << "です。\n";
}
