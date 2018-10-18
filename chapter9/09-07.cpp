/*
■演習9-7
名前空間Japaneseの中に大阪弁を表す名前空間OsakaをList9-15(p.339)に追加したプログラムを作成せよ。
追加した名前空間の中に、『変数xの値は1でっせ。』と表示する関数print_xと、
『もうかってまっか？』と表示する関数helloを定義すること(変数xは定義しない)。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// 名前空間Englishの定義
namespace English {

	// 名前空間メンバの定義
	// 変数xの定義
	int x = 1;

	/**
	*xの値を出力する関数
	*@author Kenta Yamamoto
	*@since 2018-10-18
	*/
	void print_x() {

		// xの値を、名前空間によって異なる形のメッセージと組み合わせて出力
		cout << "The value of x is " << x << ".\n";
	}

	/**
	*挨拶を出力する関数
	*@author Kenta Yamamoto
	*@since 2018-10-18
	*/
	void hello() {

		// あいさつを、名前空間によって異なる形のメッセージとして出力
		cout << "Hello\n";
	}
}

// 名前空間Japaneseの定義
namespace Japanese {

	// 名前空間メンバの定義
	// 変数xの定義
	int x = 2;

	/**
	*xの値を出力する関数
	*@author Kenta Yamamoto
	*@since 2018-10-18
	*/
	void print_x() {

		// xの値を、名前空間によって異なる形のメッセージと組み合わせて出力
		cout << "変数xの値は" << x << "です。\n";
	}

	/**
	*挨拶を出力する関数
	*@author Kenta Yamamoto
	*@since 2018-10-18
	*/
	void hello() {

		// あいさつを、名前空間によって異なる形のメッセージとして出力
		cout << "こんにちは！\n";
	}

	// 名前空間Japanese::Osakaの定義
	namespace Osaka {

		/**
		*xの値を出力する関数
		*@author Kenta Yamamoto
		*@since 2018-10-18
		*/
		void print_x() {

			// xの値を、名前空間によって異なる形のメッセージと組み合わせて出力
			cout << "変数xの値は" << x << "でっせ。\n";
		}

		/**
		*挨拶を出力する関数
		*@author Kenta Yamamoto
		*@since 2018-10-18
		*/
		void hello() {

			// あいさつを、名前空間によって異なる形のメッセージとして出力
			cout << "もうかってまっか？\n";
		}
	}
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