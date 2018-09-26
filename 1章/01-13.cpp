/*
■演習1-13
以下に示すプログラムを作成せよ。
・1桁の正の整数値(すなわち 1以上 9以下の値)をランダムに生成して表示。
・1桁の負の整数値(すなわち-9以上-1以下の値)をランダムに生成して表示。
・2桁の正の整数値(すなわち10以上99以下の値)をランダムに生成して表示。
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
	
	// 1〜9の乱数を生成し、それでint変数を初期化
	int randOneDigitPlus  =     rand() % 9 + 1;
	
	// -9〜-1の乱数を生成し、それでint変数を初期化
	int randOneDigitMinus = - ( rand() % 9 + 1 );
	
	// 10〜99の乱数を生成し、それでint変数を初期化
	int randTwoDigitPlus  =     rand() % 90 + 10;
	
	// 各乱数を標準出力
	cout << "1桁の正の整数値：" << randOneDigitPlus  << "\n";
	cout << "1桁の負の整数値：" << randOneDigitMinus << "\n";
	cout << "2桁の正の整数値：" << randTwoDigitPlus  << "\n";
}
