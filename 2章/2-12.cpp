/*
■演習2-12
List2-13と同様に、二つの整数値を読み込んで、小さいほうの値と大きいほうの値の両方を表示するプログラムを作成せよ。
ただし、二つの整数値が等しい場合は、右に示すように『二つの値は同じです。』と表示すること。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	int inputIntFirst;
	int inputIntSecond;
	
	// キーボードからの入力を促し、入力された値を変数に格納
	cout << "整数a：";		cin >> inputIntFirst;
	cout << "整数b：";		cin >> inputIntSecond;
	
	// メッセージが異なるので、二値が同じ場合を先に判定して除いておく
	if( inputIntFirst == inputIntSecond ){
		cout << "二つの値は同じです。\n";
	}
	
	// 二値が同じでない場合
	else{
		
		// 最大値、最小値を入れる変数をそれぞれ宣言する
		int maxInt;
		int minInt;
		
		// 第一入力値のほうが大きい場合
		if( inputIntFirst > inputIntSecond ){
		
			// 大きいほうをmaxInt,小さいほうをminIntに代入する
			maxInt = inputIntFirst;
			minInt = inputIntSecond;
		}
		
		// 第二入力値のほうが大きい場合
		else{
		
			// 大きいほうをmaxInt,小さいほうをminIntに代入する
			maxInt = inputIntSecond;
			minInt = inputIntFirst;
		}
	
		// 結果を出力する
		cout << "小さいほうの値：" << minInt << "\n"
			 << "大きいほうの値：" << maxInt << "\n";
	}
}
