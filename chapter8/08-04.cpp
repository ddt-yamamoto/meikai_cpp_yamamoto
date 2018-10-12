/*
■演習8-4
List8-11では、各配列の文字列の個数3が定数としてプログラム中(for文の制御式)に埋め込まれている。
計算によって求めるように書きかえたプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 配列による文字列の配列を定義
	char a[][5]	= { "LISP", "C", "Ada" };

	// ポインタによる文字列の配列を定義
	const char* p[]	= { "PAUL", "X", "MAC" };

	// 配列全体のサイズを、a[0](文字列一つあたりのサイズ)で割ることで文字列の個数を取得し、その数だけループ
	for (int countInt = 0; countInt < sizeof(a) / sizeof(a[0]); countInt++) {

		// 配列の中身の文字列を出力
		cout << "a[" << countInt << "] = \"" << a[countInt] << "\"\n";
	}

	// ポインタの配列全体のサイズを、ポインタ一つあたりのサイズで割ることで、
	// ポインタの数(=ポインタが指す文字列の数)を取得し、その数だけループ
	for (int countInt = 0; countInt < sizeof(p) / sizeof(p[0]); countInt++) {

		// 「ポインタの配列」の中身のポインタが指す文字列を出力
		cout << "p[" << countInt << "] = \"" << p[countInt] << "\"\n";
	}
}