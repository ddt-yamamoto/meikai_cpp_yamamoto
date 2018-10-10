/*
■演習6-14
a, bを昇順にソートする( a <= b となるように並べ替える)関数sortを作成せよ。
void sort(int& a, int& b);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
a, bを昇順にソートする( a <= b となるように並べ替える)関数
@param argumentInt1st 第一引数aの参照型
@param argumentInt2nd 第二引数bの参照型
@return なし
@author Kenta Yamamoto
@since 2018-10-02
*/
void sortAscending(int& argumentInt1st, int& argumentInt2nd) {

	// ソート操作が必要かどうかの判定
	if (argumentInt1st > argumentInt2nd) {

		// 移し替え用の一時的な変数を定義してaの値を保存する
		int temporaryInt = argumentInt1st;

		// 参照先のaに、bの値を代入
		argumentInt1st = argumentInt2nd;

		// 参照先のbに、保存しておいたaの値を代入
		argumentInt2nd = temporaryInt;
	}
}

// main関数の定義
int main() {

	// 入力値を受け取る変数を宣言
	int inputInt1st; // a
	int inputInt2nd; // b

	// 入力を促す
	cout << "aの値：";

	// 入力値を変数に格納
	cin >> inputInt1st;

	// 入力を促す
	cout << "bの値：";

	// 入力値を変数に格納
	cin >> inputInt2nd;

	// 昇順ソート関数にaとbを参照渡し
	sortAscending(inputInt1st, inputInt2nd);

	// 結果を出力
	cout << "昇順ソート後のaの値：" << inputInt1st << '\n';

	// 結果を出力
	cout << "昇順ソート後のbの値：" << inputInt2nd << '\n';
}