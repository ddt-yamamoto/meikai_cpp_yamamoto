/*
■演習4-8
以下の算術演算を行う各式にsizeof演算子やtypeid円座しを適用した値を表示するプログラムを作成せよ。
また、実行結果に対する考察を行うこと。
int + int, double + double, int + double, double + int
*/

# include <iostream> // 入出力
# include <typeinfo> // typeid演算子

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// int型変数を2つ用意
	int int1st = 1; // 一つ目
	int int2nd = 2; // 二つ目

	// double型変数を2つ用意
	double double1st = 1.5; // 一つ目
	double double2nd = 2.5; // 二つ目

	// sizeof演算子の適用結果
	cout << "int    + int   の式のサイズ：" << sizeof( int1st    + int2nd    )        << '\n';

	// typeid演算子の適用結果
	cout << "int    + int   の式の型    ：" << typeid( int1st    + int2nd    ).name() << "\n\n";

	// sizeof演算子の適用結果
	cout << "double + doubleの式のサイズ：" << sizeof( double1st + double2nd )        << '\n';

	// typeid演算子の適用結果
	cout << "double + doubleの式の型    ：" << typeid( double1st + double2nd ).name() << "\n\n";

	// sizeof演算子の適用結果
	cout << "int    + doubleの式のサイズ：" << sizeof( int1st    + double1st )        << '\n';

	// typeid演算子の適用結果
	cout << "int    + doubleの式の型    ：" << typeid( int1st    + double1st ).name() << "\n\n";

	// sizeof演算子の適用結果
	cout << "double + int   の式のサイズ：" << sizeof( double1st + int1st    )        << '\n';

	// typeid演算子の適用結果
	cout << "double + int   の式の型    ：" << typeid( double1st + int1st    ).name() << "\n\n";
}