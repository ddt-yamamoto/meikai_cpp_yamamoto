/*
■演習6-6
『こんにちは。』と表示する関数helloを作成せよ。
void hello();
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
『こんにちは。』と表示する関数
@return なし
@author Kenta Yamamoto
@since 2018-10-01
*/

void sayHello() {

	// メッセージを出力
	cout << "『こんにちは。』";

	// 何も返さず呼び出し元に戻る
	return;
}


// main関数の定義
int main() {

	// 関数を呼び出して『こんにちは。』と表示
	sayHello();
}