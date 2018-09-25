/*
■演習3-2
2桁の整数値(10～99)を当てさせる《数当てゲーム》を作成せよ。
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
	
	// 乱数を加工して、10～99の乱数を生成し、数当ての正答であるanswerIntを初期化
	int answerInt = rand() % 90 + 10;
	
	// キーボードからの回答入力を格納するための変数を宣言
	int inputInt;
	
	// 出題のメッセージを出力
	cout << "数当てゲーム開始!!\n";
	cout << "10～99の数を当ててください。\n";
	
	// whileの条件を満たす限り、最低一回以上繰り返し実行
	do{
		
		// 回答入力を促すメッセージを出力
		cout << "いくつかな：";
		
		// 入力された値をinputIntに格納
		cin >> inputInt;
		
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
	
	// 入力された値と答えの値が異なれば、条件の評価値がtrueとなり、ループ本体をもう一度実行。
	// そうでなければ(正答ならば)、条件の評価値がfalseとなり、do文の実行を終了。
	while( inputInt != answerInt );
	
	// 最後に一度だけ正解のメッセージを出力
	cout << "正解です。\n";
}
