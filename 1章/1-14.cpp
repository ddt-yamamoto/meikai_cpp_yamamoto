/*
■演習1-14
キーボードから読み込んだ整数値プラスマイナス5の範囲の整数値をランダムに生成して表示するプログラムを作成せよ。
※キーボードから読み込んだ値が100であれば、95～105の整数値を表示すること。
*/

// 種にするための日時にかかわるライブラリと、ランダム関数のある標準ライブラリ、入出力ライブラリの取り込み
#include <ctime>
#include <cstdlib>
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 乱数の種に日時を使って設定
	srand(time(NULL));
	
	// -5～5の乱数を生成し、それでint変数を初期化
	int randIntFirst = rand() % 11 - 5;
	
	// キーボードからの入力値の受け取り用変数を宣言
	int inputIntFirst;
	
	// キーボードからの数値入力を促す
	cout << "整数値：";
	
	// キーボードに入力された値を抽出子を使って変数に格納
	cin >> inputIntFirst;
	
	// 入力値とランダムの変化幅を加算し、標準出力する
	cout << "その値の±5の乱数を生成しました。それは" << inputIntFirst + randIntFirst << "です。\n";
}
