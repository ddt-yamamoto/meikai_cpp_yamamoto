/*
■演習8-10
p.310で学習したstrcat関数およびstrncat関数と同等な関数を作成せよ。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列

// 名前空間stdの利用宣言
using namespace std;

/**
*s2が指す文字列を、s1が指す文字列の末尾に連結する。コピー元とコピー先が重なる場合の動作は定義されない。
*@param s1 連結先の文字列
*@param s2 連結する文字列
*@return s1 連結先の文字列(の先頭要素のポインタ)
*@author Kenta Yamamoto
*@since 2018-10-11
*/
char* myStringConcatenate(char* s1, const char* s2) {

	// s1の長さ(ナル文字除く)を取得して変数に格納
	int s1Length = strlen(s1);

	// ナル文字を検出するまでs2を走査
	for (int countInt = 0; s2[countInt]; countInt++) {

		// s2の先頭(0番目)から数えてcountInt番目の文字を、s1の同じ位置にコピーする。
		s1[s1Length + countInt] = s2[countInt];

		// ループが終わったときのため、s1の一つ次の文字を毎回ナル文字にしておく
		// (まだ文字列が続けばこのナル文字は上書きされる)
		s1[s1Length + countInt + 1] = '\0';
	}
	// 文字列s1の先頭文字のポインタを返す
	return s1;
}

/**
*s2が指す文字列を、s1が指す文字列の末尾に連結する。s2の長さがnより長い場合は、切り捨てる。
*コピー元とコピー先が重なる場合の動作は定義されない。
*@param s1 連結先の文字列
*@param s2 連結する文字列
*@param n 連結する文字数
*@return s1 連結先の文字列(の先頭要素のポインタ)
*@author Kenta Yamamoto
*@since 2018-10-12
*/
char* myStringNumberConcatenate(char* s1, const char* s2, size_t n) {

	// s1の長さ(ナル文字除く)を取得して変数に格納
	int s1Length = strlen(s1);

	// nと同じ回数ループしてs2を走査
	for (int countInt = 0; countInt < static_cast<int>(n); countInt++) {

		// 文字列s2の末尾まで来たとき
		if (s2[countInt] == '\0') {

			// ループを強制的に抜ける
			break;
		}
		// s2の先頭(0番目)から数えてcountInt番目の文字を、s1の同じ位置にコピーする。
		s1[s1Length + countInt] = s2[countInt];

		// ループが終わったときのため、s1の一つ次の文字を毎回ナル文字にしておく
		// (まだ文字列が続けばこのナル文字は上書きされる)
		s1[s1Length + countInt + 1] = '\0';
	}
	// 文字列s1の先頭文字のポインタを返す
	return s1;
}

// main関数の定義
int main() {

	// テスト用文字列の長さを定義
	const int CHAR_LENGTH = 36;

	// テスト用文字列の定義
	char s1[CHAR_LENGTH] = "abcdefghijkl"; // myStringCopy関数 連結先
	char s2[CHAR_LENGTH] = "vwxyz"; // myStringCopy関数 連結する文字列
	char s3[CHAR_LENGTH] = "abcdefghijkl"; // myStringNumberConcatenate関数 連結先
	char s4[CHAR_LENGTH] = "vwxyz"; // myStringNumberConcatenate関数 連結する文字列

	// myStringNumberConcatenate関数に渡すための、連結する長さを定義
	const int CONCATENATE_LENGTH = 4;

	// メッセージを出力
	cout << s2 << " を " << s1 << " にmyStringCopy関数で連結します。\n";

	// 文字列を関数に渡して結果の出力
	cout << "結果 : " << myStringConcatenate(s1, s2) << '\n';

	// メッセージを出力
	cout << s4 << " を " << s3 << " に " << CONCATENATE_LENGTH << " 文字だけmyStringNumberConcatenate関数で連結します。\n";

	// 文字列とコピー長さを関数に渡して結果の出力
	cout << "結果 : " << myStringNumberConcatenate(s3, s4, CONCATENATE_LENGTH) << '\n';
}