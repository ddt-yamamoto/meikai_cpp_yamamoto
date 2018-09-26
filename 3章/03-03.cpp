/*
■演習3-3
右に示すように、二つの整数値を読み込んで、小さいほうの数以上で大きいほうの数以下の全整数を、小さいほうから順に表示するプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// キーボードからの回答入力を格納するための変数を宣言
	int inputInt1st; // 整数A
	int inputInt2nd; // 整数B
	
	// 入力を促すメッセージを出力
	cout << "整数A:";
	
	// 入力値を変数に格納
	cin >> inputInt1st;
	
	// 入力を促すメッセージを出力
	cout << "整数B:";
	
	// 入力値を変数に格納
	cin >> inputInt2nd;
	
	// 整数Aのほうが整数Bより大きい場合、AとBの値を入れ替える。
	if( inputInt1st > inputInt2nd ){
		
		// 一時的な器を用意して、整数Aの値を保管
		int temporaryInt = inputInt1st;
		
		// 整数Aの変数に整数Bの値を代入
		inputInt1st = inputInt2nd;
		
		// 整数Bの変数に、保管してあった整数Aの値を代入して入れ替えを完了
		inputInt2nd = temporaryInt;
	}
	
	// whileの条件を満たす限り、最低一回以上繰り返し実行
	do{
		
		// 2値のうち小さいほうの値を出力したあと、1大きくする。続いて数字が来るときのために半角スペースを末尾につける。
		cout << inputInt1st++ << " ";
	}
	
	// 小さいほうの値を1ずつ大きくしていった結果、大きいほうの値を超えた時点でループ本体を抜ける
	while( inputInt1st <= inputInt2nd );
	
	// ループを抜けた後、最後に改行コードを出力
	cout << "\n";
}
