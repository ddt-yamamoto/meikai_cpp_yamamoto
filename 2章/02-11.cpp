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
	int inputInt1st; // 整数A
	int inputInt2nd; // 整数B
	int inputInt3rd; // 整数C
	
	// キーボードからの入力を促す
	cout << "整数A：";
	
	// 入力された値を変数に格納
	cin >> inputInt1st;
	
	// キーボードからの入力を促す
	cout << "整数B：";
	
	// 入力された値を変数に格納
	cin >> inputInt2nd;
	
	// キーボードからの入力を促す
	cout << "整数C：";
	
	// 入力された値を変数に格納
	cin >> inputInt3rd;
	
	// 最大値、中央値、最小値を入れる変数をそれぞれ宣言
	int maxInt; // 最大値
	int midInt; // 中央値
	int minInt; // 最小値
	
	// 第一、第二入力値を大小比較しておき、暫定順位をつけておく
	if( inputInt1st > inputInt2nd ){
		
		// 大きいほうをmaxInt,小さいほうをminIntに代入する
		maxInt = inputInt1st; // 大きいほう
		minInt = inputInt2nd; // 小さいほう
	}
	else{
		
		// 大きいほうをmaxInt,小さいほうをminIntに代入する
		maxInt = inputInt2nd; // 大きいほう
		minInt = inputInt1st; // 小さいほう
	}
	
	// 第三入力値が、暫定最大値より大きいかどうかの判定
	if( inputInt3rd > maxInt ){
		
		// そうであれば、繰り下がって暫定最大値が中央値になる
		midInt = maxInt;
	}
	
	// 第三入力値が、暫定最小値より小さいかどうかの判定
	else if( inputInt3rd < minInt ){
		
		// そうであれば、繰り上がって暫定最小値が中央値となる
		midInt = minInt;
	}
	
	// どれでもない場合
	else{
		
		// この場合、第三入力値が中央値ということになる
		midInt = inputInt3rd;
	}
	
	// 結果を出力する
	cout << "入力値の中での中央値は、" << midInt << "です。\n";
}
