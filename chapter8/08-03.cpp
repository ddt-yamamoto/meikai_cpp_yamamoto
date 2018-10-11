/*
■演習8-3
文字列中の大文字を小文字に変換したうえで表示する関数put_lowerを作成せよ。
void put_lower(const char s[]);
*/

#include <iostream> // 入出力
#include <cctype> // 文字列ライブラリ(toupper関数)

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列中の大文字を小文字に変換したうえで表示する関数
*@param s 変換する文字列の先頭ポインタ
*@author Kenta Yamamoto
*@since 2018-10-11
*/
void put_lower(const char s[]) {

	// sを走査して、ナル文字(整数リテラルの0)を検出したところで終了
	for (int countInt = 0; s[countInt]; countInt++) {

		// sの要素を小文字に変換し、返り値のint型をchar型に静的キャストして出力
		cout << static_cast<char>(tolower(s[countInt]));
	}
}

// main関数を定義
int main() {

	// 文字列の長さを定義
	const int charLength = 36;

	// char型の配列を宣言
	char str[charLength];

	// 入力を促す
	cout << "文字列 : ";

	// 入力値を格納
	cin >> str;

	// 関数を呼び出し、strの大文字を小文字に変換して表示
	put_lower(str);

	// 改行を出力
	cout << '\n';
}