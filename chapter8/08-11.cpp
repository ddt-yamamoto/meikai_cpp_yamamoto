/*
■演習8-11
p.312で学習したstrcmp関数およびstrncmp関数と同等な関数を作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*s1が指す文字列とs2が指す文字列の大小関係(先頭から順に1文字ずつunsigned char型の値として比較していき、
*異なる文字が出現したときに、それらの文字の対に成立する大小関係とする)の比較を行う
*@param s1 比較対象の文字列の1つ目
*@param s2 比較対象の文字列の2つ目
*@return returnSign 等しければ0、s1がs2より大きければ正の整数値、s1がs2より小さければ負の整数値
*@author Kenta Yamamoto
*@since 2018-10-12
*/
int myStringCompare(char* s1, const char* s2) {

	// 比較結果の返却値を定義
	int returnSign = 0;

	// 先頭から1文字ずつの比較結果が等しい限りループする
	for (int countInt = 0; returnSign == 0; countInt++) {

		// 文字列s1と文字列s2がともに同じ位置で終了した場合
		if (s1[countInt] == '\0' && s2[countInt] == '\0') {

			// ループを抜ける
			break;
		}
		// 文字列の比較を行い、結果を返却値に格納
		returnSign = static_cast<int>(s1[countInt]) - static_cast<int>(s2[countInt]);
	}
	// 比較結果を返却
	return returnSign;
}

/**
*s1が指す文字の配列とs2が指す文字の配列の先頭n文字までの大小関係の比較を行う。
*ナル文字以降の文字は比較しない。
*@param s1 比較対象の文字の配列の1つ目
*@param s2 比較対象の文字の配列の2つ目
*@param n 比較する文字数
*@return returnSign 等しければ0、s1がs2より大きければ正の整数値、s1がs2より小さければ負の整数値
*@author Kenta Yamamoto
*@since 2018-10-12
*/
int myStringNumberCompare(char* s1, const char* s2, size_t n) {

	// 比較結果の返却値を定義
	int returnSign = 0;

	// 引数で指定された回数(n回)ループする
	for (int countInt = 0; countInt < static_cast<int>(n); countInt++) {

		// 文字の配列s1と文字の配列s2の少なくとも一方がナル文字だった場合
		if (s1[countInt] == '\0' || s2[countInt] == '\0') {

			// ループを抜ける
			break;
		}
		// 文字の配列の比較を行い、結果を返却値に格納
		returnSign = static_cast<int>(s1[countInt] - s2[countInt]);
		
		// 比較の結果、等しくなかった場合
		if (returnSign != 0) {

			// ループを抜ける
			break;
		}
	}
	// 比較結果を返却
	return returnSign;
}

// main関数の定義
int main() {

	// テスト用文字列の長さを定義
	const int CHAR_LENGTH = 36;

	// テスト用文字列の定義
	char s1[CHAR_LENGTH] = "abcdefghijkl"; // myStringCompare関数 比較対象1
	char s2[CHAR_LENGTH] = "vwxyz"; // myStringCompare関数 比較対象2

	char s3[CHAR_LENGTH] = "abcdefghijkl"; // myStringNumberCompare関数 比較対象1
	char s4[CHAR_LENGTH] = "vwxyz"; // myStringNumberCompare関数 比較対象2

	// myStringNumberCompare関数に渡すための、比較する長さを定義
	const int COMPARE_LENGTH = 4;

	// メッセージを出力
	cout << s1 << " と " << s2 << " をmyStringCompare関数で比較します。\n";

	// 文字列を関数に渡して結果の出力
	cout << "結果 : " << myStringCompare(s1, s2) << '\n';

	// メッセージを出力
	cout << s3 << " を " << s4 << " を " << COMPARE_LENGTH << " 文字だけmyStringNumberCompare関数で比較します。\n";

	// 文字列とコピー長さを関数に渡して結果の出力
	cout << "結果 : " << myStringNumberCompare(s3, s4, COMPARE_LENGTH) << '\n';
}