/*
■演習8-2
以下のように初期化された文字列sを空文字列にするコードを示せ。
char s[] = "ABC";
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {
	
	// 文字列sの定義
	char s[] = "ABC";

	// 文字列の長さと同じ回数ループ
	for (int countInt = 0; countInt < sizeof(s) / sizeof(s[0]); countInt++) {

		// 先頭から順にナル文字に置き換えていく
		s[countInt] = '\0';
	}
	// sの出力(ナル文字)
	cout << s << '\n';
}