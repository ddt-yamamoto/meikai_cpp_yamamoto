/*
■演習4-5
float型の変数とdouble型の変数にキーボードから数値を読み込んで、その値を表示するプログラムを作成せよ。
いろいろな値を入力して、動作を検証すること。
*/

#include <iomanip>  // 操作子
#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	float  inputFloat  = 0; // float 型の入力を格納する変数を定義
	double inputDouble = 0; // double型の入力を格納する変数を定義
	
	// 入力を促すメッセージを出力
	cout << "float 型の入力：";
	
	// 入力値を格納
	cin >> inputFloat;
	
	// 入力を促すメッセージを出力
	cout << "double型の入力：";
	
	// 入力値を格納
	cin >> inputDouble;
	
	// 精度を30にして結果の出力
	cout << "float 型の出力：" << setprecision(30) << inputFloat  << '\n';
	
	// 精度を30にして結果の出力
	cout << "double型の出力：" << setprecision(30) << inputDouble << '\n';
}

/*
■実行結果例

float 型の入力：123456789012345678901234567890.0
double型の入力：123456789012345678901234567890.0
float 型の出力：123456789182729271864492818432
double型の出力：123456789012345677877719597056

------------------------------------------------

float 型の入力：0.12345678901234567890
double型の入力：0.12345678901234567890
float 型の出力：0.12345679104328155517578125
double型の出力：0.1234567890123456773698862321

------------------------------------------------

float 型の入力：1234567890.12345678901234567890
double型の入力：1234567890.12345678901234567890
float 型の出力：1234567936
double型の出力：1234567890.12345671653747558594

*/