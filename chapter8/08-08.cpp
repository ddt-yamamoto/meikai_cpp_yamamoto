/*
演習8-8
文字列s内の文字を末尾から先頭へと逆順に表示する関数put_revを作成せよ。

	void put_rev(const char* s);

たとえば、文字列sが"abc"であれば、「cba」と表示する。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列s内の文字を末尾から先頭へと逆順に表示する関数
*@param s 文字列
*@author Kenta Yamamoto
*@since 2018-10-11
*/
void put_rev(const char* s) {

	// strlen関数を用いて文字列sの長さを求めて定数として定義しておく
	const int STRING_SIZE = strlen(s);

	// 文字列を指すポインタの最後の添字は[長さ-1]となるので、その意味の定数を定義しておく
	const int LAST_INDEX = STRING_SIZE - 1;
	
	// 文字列の長さと同じ回数ループ
	for (int reverseIndexCount = 0 ; reverseIndexCount < STRING_SIZE; reverseIndexCount++) {

		// 文字列を末尾から逆順に走査して出力
		cout << s[LAST_INDEX - reverseIndexCount];
	}
	// 最後に改行を出力
	cout << '\n';
}

// main関数の定義
int main() {

	// 文字列の定義
	char s[] = "abcde";

	// 文字列を関数に渡す
	put_rev(s);
}