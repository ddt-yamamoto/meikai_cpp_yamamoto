/*
■演習2-11
キーボードから読み込んだ三つの整数の中央値を求めて表示するプログラムを作成せよ。
※たとえば2,3,1の中央値は2で、1,2,1の中央値は1で、3,3,3の中央値は3である。
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
	int inputIntThird;
	
	// キーボードからの入力を促し、入力された値を変数に格納
	cout << "整数A：";		cin >> inputIntFirst;
	cout << "整数B：";		cin >> inputIntSecond;
	cout << "整数C：";		cin >> inputIntThird;
	
	// 最大値、中央値、最小値を入れる変数をそれぞれ宣言
	int maxInt;
	int midInt;
	int minInt;
	
	// 第一、第二入力値を大小比較しておき、暫定順位をつけておく
	if( inputIntFirst > inputIntSecond ){
		
		// 大きいほうをmaxInt,小さいほうをminIntに代入する
		maxInt = inputIntFirst;
		minInt = inputIntSecond;
	}
	else{
		
		// 大きいほうをmaxInt,小さいほうをminIntに代入する
		maxInt = inputIntSecond;
		minInt = inputIntFirst;
	}
	
	// 第三入力値が、暫定最大値より大きいかどうかの判定
	if( inputIntThird > maxInt ){
		
		// そうであれば、繰り下がって暫定最大値が中央値になる
		midInt = maxInt;
	}
	
	// 第三入力値が、暫定最小値より小さいかどうかの判定
	else if( inputIntThird < minInt ){
		
		// そうであれば、繰り上がって暫定最小値が中央値となる
		midInt = minInt;
	}
	
	// どれでもない場合
	else{
		
		// この場合、第三入力値が中央値ということになる
		midInt = inputIntThird;
	}
	
	// 結果を出力する
	cout << "入力値の中での中央値は、" << midInt << "です。\n";
}
