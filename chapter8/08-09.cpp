/*
■演習8-9
p.308で学習したstrcpy関数およびstrncpy関数と同等な関数を作成せよ。
*/

#include <iostream> // 入出力
#include <cstring> // 文字列

// 名前空間stdの利用宣言
using namespace std;

/**
*s2が指す文字列を、s1が指す配列にコピーする。コピー元とコピー先が重なる場合の動作は定義されない。
*@param s1 コピー先の文字型配列
*@param s2 コピー元の文字列
*@return s1 コピー先の文字型配列(の先頭要素のポインタ)
*@author Kenta Yamamoto
*@since 2018-10-11
*/
char* myStringCopy(char* s1, const char* s2) {

	// ナル文字を検出するまでs2を走査
	for (int countInt = 0; s2[countInt]; countInt++) {

		// s2の先頭(0番目)から数えてcountInt番目の文字を、s1の同じ位置にコピーする。
		s1[countInt] = s2[countInt];

		// ループが終わったときのため、s1の一つ次の文字を毎回ナル文字にしておく
		// (まだ文字列が続けばこのナル文字は上書きされる)
		s1[countInt + 1] = '\0';
	}
	// 文字列s1の先頭文字のポインタを返す
	return s1;
}

/**
*s2が指す文字列を、s1が指す配列にコピーする。s2の長さがn以上の場合はn文字までをコピーし、
*nより短い場合は残りをナル文字で埋め尽くす。コピー元とコピー先が重なる場合の動作は定義されない。
*@param s1 コピー先の文字型配列
*@param s2 コピー元の文字列
*@param n コピーする文字数
*@return s1 コピー先の文字型配列(の先頭要素のポインタ)
*@author Kenta Yamamoto
*@since 2018-10-12
*/
char* myStringNumberCopy(char* s1, const char* s2, size_t n) {

	// s2の長さ(ナル文字除く)を取得して変数に格納
	int s2Length = strlen(s2);

	// nと同じ回数ループしてs2を走査
	for (int countInt = 0; countInt < static_cast<int>(n); countInt++) {

		// 先頭から順に数えて、s2の文字部分がまだある場合
		if (s2Length >= countInt) {

			// s2の先頭(0番目)から数えてcountInt番目の文字を、s1の同じ位置にコピーする。
			s1[countInt] = s2[countInt];
		}
		// s2の文字部分を超えてコピーしようとした場合
		else {
			// s1をナル文字で埋めていく
			s1[countInt] = '\0';
		}
	}
	// 文字列s1の先頭文字のポインタを返す
	return s1;
}

// main関数の定義
int main() {

	// テスト用文字列の長さを定義
	const int CHAR_LENGTH = 36;

	// テスト用文字列の定義
	char s1[CHAR_LENGTH] = "abcdefghijkl"; // myStringCopy関数 コピー先
	char s2[CHAR_LENGTH] = "vwxyz"; // myStringCopy関数 コピー元
	char s3[CHAR_LENGTH] = "abcdefghijkl"; // myStringNumberCopy関数 コピー先
	char s4[CHAR_LENGTH] = "vwxyz"; // myStringNumberCopy関数 コピー元

	// myStringNumberCopy関数に渡すための、コピーする長さを定義
	const int COPY_LENGTH = 4;

	// メッセージを出力
	cout << s2 << " を " << s1 << " にmyStringCopy関数でコピーします。\n";

	// 文字列を関数に渡して結果の出力
	cout << "結果 : " << myStringCopy(s1, s2) << '\n';

	// メッセージを出力
	cout << s4 << " を " << s3 << " に " << COPY_LENGTH << " 文字だけmyStringNumberCopy関数でコピーします。\n";

	// 文字列とコピー長さを関数に渡して結果の出力
	cout << "結果 : " << myStringNumberCopy(s3, s4, COPY_LENGTH) << '\n';
}