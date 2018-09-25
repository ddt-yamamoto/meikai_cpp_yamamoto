/*
■演習2-9
右に示すように、二つの整数値を読み込んで、それらの値の差が10以下であれば『それらの差は10以下です。』と表示し、
そうでなければ『それらの差は11以上です。』と表示するプログラムを作成せよ。
*/

// 入出力とStringクラスを扱うので、これらをインクルード
#include <iostream>
#include <string>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値を受け取るための変数の宣言
	int inputIntFirst;
	int inputIntSecond;
	
	// キーボードからの入力を促す
	cout << "整数A：";
	
	// 入力された値を変数に格納
	cin >> inputIntFirst;
	
	// キーボードからの入力を促す
	cout << "整数B：";
	
	// 入力された値を変数に格納
	cin >> inputIntSecond;
	
	// まず条件演算子を用いて大小判定を行い、大きいほうから小さいほうを引いた差にて、differenceIntを初期化する
	int differenceInt = inputIntFirst > inputIntSecond ? inputIntFirst - inputIntSecond : inputIntSecond - inputIntFirst;
	
	// 入力値の差であるdifferenceIntと10を比較し、出力するメッセージを変えつつ、文字列であるanswerStringを初期化する。
	string answerString = differenceInt <= 10 ? "それらの差は10以下です。\n" : "それらの差は11以上です。\n";
	
	// 結果のメッセージを出力
	cout << answerString;
}
