/*
■演習8-13
文字列sに含まれる最も先頭に位置する文字cへのポインタを返す関数strchr_ptrを作成せよ。

	const char* strchr_ptr(const char* s, char c);

文字列sが"ABSZXYX"で文字cが'X'であれば、返却するのは&s[4]である。
なお、文字cが文字列sに含まれない場合はNULLを返却すること。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列sに含まれる最も先頭に位置する文字cへのポインタを返す関数
*@param s 走査対象の文字列
*@param c 探す文字
*@return returnPointer 見つかった場所を指すポインタ
*@author Kenta Yamamoto
*@since 2018-10-15
*/
const char* strchr_ptr(const char* s, char c) {

	// 返却用のポインタを格納する変数を定義し、見つからなかった場合の値であるNULLで初期化
	const char* returnPointer = NULL;

	// ナル文字を検出するまでループ
	for (int countInt = 0; s[countInt]; countInt++) {

		// 文字列中の文字と、探している文字が一致した場合
		if (s[countInt] == c) {

			// 返却用変数に、見つかった位置へのポインタを代入
			returnPointer = &s[countInt];

			// 見つかった段階でループを抜ける
			break;
		}
	}
	// 結果を返却
	return returnPointer;
}

// main関数の定義
int main() {

	// 文字列の文字数を定義
	const int STRING_LENGTH = 36;

	// 文字列の定義
	char s[STRING_LENGTH] = "ABSZXYX";

	// 文字の定義
	char c = 'C';

	// 関数に文字列と文字を渡して、結果をchar型のポインタ型の値として受け取る
	const char* returnPointer = strchr_ptr(s, c);

	// 受け取ったポインタがNULLかどうかを先にチェック
	if (returnPointer == NULL) {

		// 見つからなかった時のメッセージ
		cout << "文字が見つかりませんでした。\n";
	}
	// 文字が見つかった時
	else {

		// ポインタ以降の文字列を出力
		cout << returnPointer;
	}
}