/*
■演習8-15
文字列s1の中に含まれる最も先頭に位置する文字列s2の先頭文字へのポインタを返す関数str_matchを作成せよ。

	const char* str_match(char* s1, char* s2);

たとえば、受け取った文字列s1が"abcabcdef"でs2が"abcd"であれば、返却するのは&s1[3]の値である。
文字列s2がs1に含まれない場合はNULLを返却すること。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列s1の中に含まれる最も先頭に位置する文字列s2の先頭文字へのポインタを返す関数
*@param s1
*@param s2
*@return returnPointer
*@author Kenta Yamamoto
*@since 2018-10-15
*/
const char* str_match(char* s1, char* s2) {

	// 返却用のポインタをNULLで定義
	char* returnPointer = NULL;

	// 文字列s2の文字数を定義しておく
	const int S2_SIZE = strlen(s2);

	// 文字列s1を走査(比較の開始位置をずらしていく)
	for (int countIndexS1 = 0; s1[countIndexS1]; countIndexS1++) {

		// 文字列s2と一致するか、一文字ずつ比較していく
		for (int countIndexS2 = 0; countIndexS2 < S2_SIZE; countIndexS2++) {

			// 比較中に文字が違った場合
			if (s1[countIndexS1 + countIndexS2] != s2[countIndexS2]) {

				// その時点でループを抜け、再びs1のひとつ次の文字からやり直し
				break;
			}
			// s2の文字数分、比較を行いすべて一致した場合
			if (countIndexS2 + 1 == S2_SIZE) {

				// 比較開始したs1中の位置を指すポインタを返却用変数に代入
				returnPointer = s1 + countIndexS1;
			}
		}
	}
	// ポインタを返却
	return returnPointer;
}

// main関数の定義
int main() {

	// テスト用の文字列を定義
	char s1[] = "abcabcdef";

	// テスト用の文字列を定義
	char s2[] = "abcd";

	// 関数に文字列を渡し、返却値のポインタを受け取る
	const char* returnPointer = str_match(s1, s2);

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