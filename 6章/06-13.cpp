/*
■演習6-13
List6-14(p.219)のプログラムにa = y;を追加して、プログラムの挙動を確認せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

int main() {

	int  x = 1;
	int  y = 2;
	int& a = x;

	cout << "a = " << a << '\n';
	cout << "x = " << x << '\n';
	cout << "y = " << y << "\n\n";

	a = 5;

	cout << "a = " << a << '\n';
	cout << "x = " << x << '\n';
	cout << "y = " << y << "\n\n";


// ここからが追加分

	// 参照オブジェクトaに対してyの値を代入
	a = y;

	// 各変数の値を出力
	cout << "a = " << a << '\n'; // aの値
	cout << "x = " << x << '\n'; // xの値
	cout << "y = " << y << '\n'; // yの値

// ここまでが追加分
}

/*
■実行結果
a = 1
x = 1
y = 2

a = 5
x = 5
y = 2

a = 2
x = 2
y = 2

参照オブジェクトaと、参照先であるxに対してyの値が代入されていることがわかる。
*/