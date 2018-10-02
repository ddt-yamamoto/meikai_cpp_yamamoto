/*
■演習6-8
List6-8の関数put_starsを、その内部でList6-9の関数put_ncharを呼び出すことによって表示を行うように書きかえたプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
指定された文字を指定された個数連続で表示する関数
@param argumentNumber 表示する文字の個数
@param argumentSymbolChar 表示に使う記号や文字
@return なし
@author Kenta Yamamoto
@since 2018-10-02
*/
void putNumberChar(int argumentNumber, char argumentSymbolChar){

	// 一つ出力するごとに引数の数値を減らすことで、引数の数値と同じ数出力する
	while (argumentNumber-- > 0) {

		// 引数の文字を一つ出力
		cout << argumentSymbolChar;
	}
}

/**
指定された段数の大きさの、'*'で構成された左下直角の三角形を表示する関数
@param argumentLowNumber 表示する三角形の段数
@return なし
@author Kenta Yamamoto
@since 2018-10-02
*/
void putStarTriangle(int argumentLowNumber) {

	// 段数と同じだけループ
	for (int countInt = 1; countInt <= argumentLowNumber; countInt++) {

		// 現在の段数(=出力すべき文字数)と、出力すべき文字を関数に渡す
		putNumberChar(countInt, '*');

		// 一段終わるごとに改行する
		cout << '\n';
	}
}

// main関数の定義
int main() {

	// 入力値を格納する変数を定義
	int inputLowNumber = 0;

	// 説明メッセージを出力
	cout << "'*'で構成された、左下直角の三角形を表示します。\n";

	// 入力を促す
	cout << "段数：";

	// 入力値を変数に格納
	cin >> inputLowNumber;

	// 段数の値の変数を関数に渡す
	putStarTriangle(inputLowNumber);
}