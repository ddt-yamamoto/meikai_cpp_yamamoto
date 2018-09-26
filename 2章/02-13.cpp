/*
■演習2-13
二つの整数値を読み込んで降順(大きい順)に並べかえるプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	int inputInt1st;
	int inputInt2nd;
	
	// キーボードからの入力を促す
	cout << "変数a：";
	
	// 入力された値を変数に格納
	cin >> inputInt1st;
	
	// キーボードからの入力を促す
	cout << "変数b：";
	
	// 入力された値を変数に格納
	cin >> inputInt2nd;
	
	// 降順にしようとしたとき、入れ替えが必要なのは、一つ目の値 < 二つ目の値 のとき
	if( inputInt1st < inputInt2nd ){
		
		// 入れ替えのための保管用変数を宣言し一つ目の入力値で初期化
		int tempInt = inputInt1st;
		
		// 二つ目の入力値を、一つ目の入力値に代入
		inputInt1st = inputInt2nd;
		
		// 保管してあった一つ目の入力値を、二つ目の入力値に代入、これで入れ替えが完了
		inputInt2nd = tempInt;
	}
	
	// 中身を入れ替えたため、メッセージの出力順は、降順に1st⇒2ndで固定
	cout << "a≧bとなるようにソートしました。\n";
	
	// メッセージを出力
	cout << "変数aは" << inputInt1st << "です。\n";
	
	// メッセージを出力
	cout << "変数bは" << inputInt2nd << "です。\n";
}
