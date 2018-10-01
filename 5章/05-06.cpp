/*
■演習5-6
要素型がint型で要素数が15の配列の全要素に0〜10の乱数を代入して、右のように棒グラフで値を表示するプログラムを作成せよ。
棒グラフは記号文字'*'を横方向に並べたものとする。
*/

#include <iostream> // 入出力
#include <cstdlib> // 乱数
#include <ctime> // 日時
#include <iomanip> // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {
	
	// 乱数の種を生成
	srand(time(NULL));

	// 配列の長さを定値オブジェクトとして定義
	const int arrayLength = 15;

	// int型配列を宣言
	int arrayInt[arrayLength];

	// 配列の長さと同じ数だけ繰り返し
	for (int countInt = 0; countInt < arrayLength; countInt++) {

		// 0〜10の乱数を生成してcountInt番目の要素として格納
		arrayInt[countInt] = rand() % 11;
	}

	// 配列を走査して出力
	for (int countInt1st = 0; countInt1st < arrayLength; countInt1st++) {

		// 配列の要素番号を出力
		cout << "a[" << setw(2) << countInt1st << "] : ";

		// 各要素に格納されている値の数だけ繰り返し
		for (int countInt2nd = 0; countInt2nd < arrayInt[countInt1st]; countInt2nd++) {

			// 記号の出力
			cout << '*';
		}

		// 記号のループ出力終了後に改行を出力
		cout << '\n';
	}
}