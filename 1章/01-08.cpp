/*
■演習1-8
int型の変数に実数値の初期化子を与えるとどうなるか。プログラムを作成して確認せよ。
*/

// 入出力ライブラリの取り込み
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// firstIntに実数値の初期化子を与えて初期化
	int firstInt  = 10;
	
	// secondIntに実数値の初期化子を与えて初期化、ためしに小数部を持った値にした
	int secondInt = 12.5;
	
	// 標準出力ストリームに文字列と変数を続けて挿入
	cout << "firstIntの値は"  << firstInt  << "です。\n";
	
	// 標準出力ストリームに文字列と変数を続けて挿入
	cout << "secondIntの値は" << secondInt << "です。\n";
}

/*
■注釈
生成済みの変数に値を代入したときと同じ結果を得た。
secondIntは整数ではないが、エラーにはならず切り捨てられて12となった。
*/