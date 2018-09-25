/*
■演習3-25
List3-3(p.87)の数当てゲームのプレーヤが値を入力できる回数に制限を設けたプログラムを作成せよ。
制限回数内に当てられなかった場合は、正解を表示してゲームを終了すること。
*/

// 入出力、乱数、日付時刻を扱うので、インクルード
#include <iostream>
#include <cstdlib>
#include <ctime>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 日付時刻から乱数の種を生成
	srand(time(NULL));
	
	// 乱数を加工して、0～99の乱数を生成し、数当ての正答であるanswerIntを初期化
	int answerInt = rand() % 100;
	
	// キーボードからの回答入力を格納するための変数を宣言
	int inputInt;
	
	// 回答の回数制限を定数で設定する。今回は5と定義。
	const int LIMIT_INT = 5;
	
	// 出題のメッセージを出力
	cout << "数当てゲーム開始!!\n";
	cout << "0～99の数を当ててください。\n";
	
	// カウンタ変数をループの外でも使うので、あらかじめ定義しておく
	int countInt = 0;
	
	// int型定数LIMIT_INTの値と同じだけループする
	for( ; countInt < LIMIT_INT; countInt++ ){
		
		// 回答入力を促すメッセージを出力
		cout << "いくつかな：";
		
		// 入力された値をinputIntに格納
		cin >> inputInt;
		
		// 入力値が正解と一致した場合
		if( inputInt == answerInt ){
			
			// for文を抜ける
			break;
		}
		
		// 入力値と正答値を比較し、入力値のほうが大きい場合
		if( inputInt > answerInt ){
			
			// ヒントになるメッセージを出力
			cout << "もっと小さな数だよ。\n";
		}
		
		// 入力値と正答値を比較し、入力値のほうが小さい場合
		else if( inputInt < answerInt ){
			
			// ヒントになるメッセージを出力
			cout << "もっと大きな数だよ。\n";
		}
	}
	
	// 回数制限と回答回数を比較して、正解によってループを抜けたのかを判定
	if( countInt < LIMIT_INT ){
		
		// 正解のメッセージを出力
		cout << "正解です。\n";
	}
	
	// 正解していない場合
	else{
		
		// 回数切れのメッセージと正解の値を出力
		cout << "残念、回数切れです。正解は、" << answerInt << "でした。\n";
	}
}
