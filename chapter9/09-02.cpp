/*
■演習9-2
二つの整数値xとyの最大公約数をユークリッドの互除法を用いて求める関数

	int gcd(int x, int y);

を作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*二つの整数値xとyの最大公約数をユークリッドの互除法を用いて求める関数
*@param x 整数x
*@param y 整数y
*@return returnDivisor 求めた最大公約数
*@author Kenta Yamamoto
*@since 2018-10-16
*/
int gcd(int x, int y) {

	// x,yを2つの辺としたとき、xよりyのほうが長い場合
	if ( x < y ) {

		// 長いほうの辺から、短いほうの辺と同じだけ削った上で再帰呼び出しした結果を返す
		return gcd(x, y - x);
	}
	// yよりxのほうが長い場合
	else if( x > y ){

		// 長いほうの辺から、短いほうの辺と同じだけ削った上で再帰呼び出しした結果を返す
		return gcd(x - y, y);
	}
	// xとyが等しい場合
	else {
		// 最後の正方形が残ったということなので、その正方形の辺の大きさを返す(同じなのでyでもよい)
		return x;
	}
}

// main関数の定義
int main() {

	// サンプル長方形の辺の長さを定義
	int x = 104; // 辺xの長さ
	int y = 56; // 辺yの長さ

	// xとyの最大公約数を求めて結果を出力
	cout << gcd(x, y);
}