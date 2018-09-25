/*
■演習1-7
三つのint型変数に値を代入し、それらの合計と平均を求めるプログラムを作成せよ。
*/

// 入出力ライブラリを取り込む
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	//int型変数を3つ宣言
	int firstInt;
	int secondInt;
	int thirdInt;
	
	// それぞれの変数に整数値を代入
	firstInt	= 10;
	secondInt	= 100;
	thirdInt	= 1000;
	
	// 合計および平均の演算を行い、標準出力ストリームに文字列と値を続けて挿入
	cout << "合計は" <<   firstInt + secondInt + thirdInt		<< "です。\n";
	cout << "平均は" << ( firstInt + secondInt + thirdInt ) / 3	<< "です。\n";
}
