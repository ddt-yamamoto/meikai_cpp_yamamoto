/*
■演習7-17
ポインタpが指すオブジェクトの先頭nバイトにvを代入する関数mem_setを作成せよ。
void mem_set(void* p, int n, unsigned char v);
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*ポインタpが指すオブジェクトの先頭nバイトにvを代入する関数
*@param p 不明な型のオブジェクトを指すポインタ
*@param n 先頭から数えて何バイトまで代入するかを表す数
*@param v 代入する文字
*@author Kenta Yamamoto
*@since 2018-10-10
*/
void mem_set(void* p, int n, unsigned char v) {

	// char*型(1バイト)のポインタを宣言
	char* singleByte;

	// 不明な型のオブジェクトを指すポインタであるpをchar*型にキャストして、singleByteに代入
	singleByte = reinterpret_cast<char*>(p);

	// 先頭からnバイト目までループ
	for (int countInt = 0; countInt < n; countInt++) {

		// char*型のポインタsingleByteが指すアドレスに対して、1バイトの文字であるvを代入
		*singleByte = v;

		// char型は1バイトであるので、char型を指すポインタであるsingleByteの値をインクリメントすると、
		// 値の増分は1バイトとなり、1バイト先のアドレスを示すようになる。
		singleByte++;
	}
}

// main関数の定義
int main() {

	// 代入するunsigned char型の文字を定義
	const unsigned char v = 'a';

	// 先頭から何バイトに代入をするかを示す数を定義
	const int n = 8;

	// テスト用のint型配列の長さを定義
	const int SAMPLE_ARRAY_LENGTH = 4;

	// テスト用のint型配列オブジェクトを定義
	int sampleArray[SAMPLE_ARRAY_LENGTH] = { 1, 2, 3, 4 };

	// 関数を呼び出し、int型配列オブジェクト、バイト数、文字を渡す
	mem_set(sampleArray, n, v);

	// 説明メッセージを出力
	cout << "int型のまま出力\n";

	// 変換後のオブジェクトを走査して出力
	for (int countInt = 0; countInt < SAMPLE_ARRAY_LENGTH; countInt++) {

		// int型のまま出力して確認
		cout << "sampleArray[" << countInt << "] = " << sampleArray[countInt] << '\n';
	}

	// 説明メッセージを出力
	cout << "char型にキャストして出力\n";

	// 変換後のオブジェクトを走査して出力
	for (int countInt = 0; countInt < SAMPLE_ARRAY_LENGTH; countInt++) {

		// char型にキャストして出力して確認
		cout << "sampleArray[" << countInt << "] = " << char(sampleArray[countInt]) << '\n';
	}
}

/*
■実行結果
int型のまま出力
sampleArray[0] = 1633771873
sampleArray[1] = 1633771873
sampleArray[2] = 3
sampleArray[3] = 4
char型にキャストして出力
sampleArray[0] = a
sampleArray[1] = a
sampleArray[2] = 
sampleArray[3] = 

※注　空白のところは文字化け
*/