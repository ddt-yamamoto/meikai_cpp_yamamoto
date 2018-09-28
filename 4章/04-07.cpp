#include <iostream> // 入出力
#include <typeinfo> // typeid演算子

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){

	// float変数を定義
	float floatValue = 12.345F;

	// double変数を定義
	double doubleValue = 12.3456789012345;

	// long double変数を定義
	long double longDoubleValue = 12.3456789012345678901234567890L;

	// floatValueの型を出力
	cout << "変数aの型：" << typeid( floatValue ).name() << '\n';

	// floatValueの値を出力
	cout << "変数aの値：" << floatValue << "\n\n";

	// doubleValueの型を出力
	cout << "変数bの型：" << typeid( doubleValue ).name() << '\n';

	// doubleValueの値を出力
	cout << "変数bの値：" << doubleValue << "\n\n";

	// longDoubleValueの型を出力
	cout << "変数cの型：" << typeid(longDoubleValue).name() << '\n';

	// longDoubleValueの値を出力
	cout << "変数cの値：" << longDoubleValue << "\n\n";
}