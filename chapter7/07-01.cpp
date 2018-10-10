/*
■演習7-1
List7-2(p.244)に&ptrの表示を追加したプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// int型オブジェクトの定義
	int intObject = 135;

	// int型オブジェクトの出力
	cout << "intObject :" << intObject << '\n';

	// int型オブジェクトのアドレスを出力
	cout << "&intObject :" << &intObject << "番地\n";

	// int型オブジェクトへのポインタ型のintPointerを宣言し、intObjectのアドレスで初期化
	int* intPointer = &intObject;

	// ポインタ型を評価した値(アドレス)を出力
	cout << "intPointer :" << intPointer << "番地\n";

	// 間接演算子により、ポインタがさすオブジェクトそのものを評価した値を出力
	cout << "*intPointer :" << *intPointer << '\n';

	// ポインタのアドレスを出力
	cout << "&intPointer :" << &intPointer << "番地\n";
}