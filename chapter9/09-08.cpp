/*
■演習9-8
前問を、名前空間メンバの宣言と定義を分離したプログラムとして作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// 名前空間Englishの定義
namespace English {

	// 名前空間メンバの宣言
	// 変数xの宣言
	extern int x;

	/**
	*xの値を出力する関数
	*@author Kenta Yamamoto
	*@since 2018-10-18
	*/
	void print_x();

	/**
	*挨拶を出力する関数
	*@author Kenta Yamamoto
	*@since 2018-10-18
	*/
	void hello();
}
// 宣言だけしていた変数を定義
int English::x = 1;

// 宣言だけしていた関数を定義
void English::print_x() {

	// xの値を、名前空間によって異なる形のメッセージと組み合わせて出力
	cout << "The value of x is " << x << ".\n";
}
// 宣言だけしていた関数を定義
void English::hello() {

	// あいさつを、名前空間によって異なる形のメッセージとして出力
	cout << "Hello\n";
}

// 名前空間Japaneseの定義
namespace Japanese {

	// 名前空間メンバの宣言
	// 変数xの宣言
	extern int x;

	/**
	*xの値を出力する関数
	*@author Kenta Yamamoto
	*@since 2018-10-18
	*/
	void print_x();

	/**
	*挨拶を出力する関数
	*@author Kenta Yamamoto
	*@since 2018-10-18
	*/
	void hello();

	// 名前空間Japanese::Osakaの定義
	namespace Osaka {

		/**
		*xの値を出力する関数
		*@author Kenta Yamamoto
		*@since 2018-10-18
		*/
		void print_x();

		/**
		*挨拶を出力する関数
		*@author Kenta Yamamoto
		*@since 2018-10-18
		*/
		void hello();
	}
}
// 宣言だけしていた変数を定義
int Japanese::x = 2;

// 宣言だけしていた関数を定義
void Japanese::print_x() {

	// xの値を、名前空間によって異なる形のメッセージと組み合わせて出力
	cout << "変数xの値は" << x << "です。\n";
}
// 宣言だけしていた関数を定義
void Japanese::hello() {

	// あいさつを、名前空間によって異なる形のメッセージとして出力
	cout << "こんにちは！\n";
}
// 宣言だけしていた関数を定義
void Japanese::Osaka::print_x(){

	// xの値を、名前空間によって異なる形のメッセージと組み合わせて出力
	cout << "変数xの値は" << x << "でっせ。\n";
}
// 宣言だけしていた関数を定義
void Japanese::Osaka::hello() {

	// あいさつを、名前空間によって異なる形のメッセージとして出力
	cout << "もうかってまっか？\n";
}

// main関数の定義
int main() {

	// 名前空間Englishのメンバを出力
	cout << "English::x = " << English::x << '\n'; // 変数x
	English::print_x(); // xの値を、地域の文章で出力
	English::hello(); // 地域の挨拶を出力

	// 名前空間Japaneseのメンバを出力
	cout << "Japanese::x = " << Japanese::x << '\n'; // 変数x
	Japanese::print_x(); // xの値を、地域の文章で出力
	Japanese::hello(); // 地域の挨拶を出力

	// 名前空間Japanese::Osakaのメンバを出力
	Japanese::Osaka::print_x(); // xの値を、地域の文章で出力
	Japanese::Osaka::hello(); // 地域の挨拶を出力
}