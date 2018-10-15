/*
■演習8-12
文字列sに含まれる最も先頭に位置する文字cの添字を返す関数strchr_idxを作成せよ。

	int strchr_idx(const char* s, char c);

文字列sが"ABSZXYX"で文字cが'X'であれば、返却するのは4である。
なお、文字cが文字列sに含まれない場合は-1を返却すること。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*文字列sに含まれる最も先頭に位置する文字cの添字を返す関数
*@param s 走査対象の文字列
*@param c 探す文字
*@return returnIndex 見つかった位置の添字
*@author Kenta Yamamoto
*@since 2018-10-12
*/
int strchr_idx(const char* s, char c) {

	// 返却用の添字を格納する変数を定義し、見つからなかった場合の値である-1で初期化
	int returnIndex = -1;

	// ナル文字を検出するまでループ
	for (int countInt = 0; s[countInt]; countInt++) {

		// 文字列中の文字と、探している文字が一致した場合
		if (s[countInt] == c) {

			// 返却用変数に見つかった位置の添字を代入
			returnIndex = countInt;

			// 見つかった段階でループを抜ける
			break;
		}
	}
	// 結果を返却
	return returnIndex;
}

// main関数の定義
int main() {

	// 文字列の文字数を定義
	const int STRING_LENGTH = 36;

	// 文字列の定義
	char s[STRING_LENGTH] = "ABSZXYX";

	// 文字の定義
	char c = 'X';

	// 関数に文字列と文字を渡して、結果を出力
	cout << strchr_idx(s, c);
}