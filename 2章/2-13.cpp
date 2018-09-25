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
	int inputIntFirst;
	int inputIntSecond;
	
	// キーボードからの入力を促し、入力された値を変数に格納
	cout << "変数a：";		cin >> inputIntFirst;
	cout << "変数b：";		cin >> inputIntSecond;
	
	// 降順にしようとしたとき、入れ替えが必要なのは、一つ目の値 < 二つ目の値 のとき
	if( inputIntFirst < inputIntSecond ){
		
		// 入れ替えのための保管用変数を宣言し一つ目の入力値で初期化
		int tempInt		= inputIntFirst;
		
		// 二つ目の入力値を、一つ目の入力値に代入
		inputIntFirst	= inputIntSecond;
		
		// 保管してあった一つ目の入力値を、二つ目の入力値に代入、これで入れ替えが完了
		inputIntSecond	= tempInt;
	}
	
	// 中身を入れ替えたため、メッセージの出力順は、降順にFirst⇒Secondで固定
	cout << "a≧bとなるようにソートしました。\n";
	cout << "変数aは" << inputIntFirst << "です。\n";
	cout << "変数bは" << inputIntSecond << "です。\n";
}
