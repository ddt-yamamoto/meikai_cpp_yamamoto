/*
■演習5-7
前問を書きかえて、縦方向の棒グラフによって値を表示するプログラムを作成せよ。
添字を10で割った剰余を最下段に表示すること。
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
	const int ARRAY_LENGTH = 15;

	// int型配列を宣言
	int arrayInt[ARRAY_LENGTH] = { 0 };

	// 配列の長さと同じ数だけ繰り返し
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 0〜10の乱数を生成してcountInt番目の要素として格納
		arrayInt[countInt] = rand() % 11;
	}

	// 縦のループ⇒内部に横のループとする。縦の長さは星の最大数と同じなので10であり、
	// 上に伸びているものを上から下に見ていくので、デクリメントしながらループする
	for (int lowCountInt = 10; lowCountInt > 0; lowCountInt--) {

		// 横に並んだ配列を走査
		for (int columnCountInt = 0; columnCountInt < ARRAY_LENGTH; columnCountInt++) {

			// columnCountInt列・lowCountInt行の位置に星を出力する条件のチェック
			if (arrayInt[columnCountInt] >= lowCountInt) {

				// 記号の出力
				cout << " *";
			}

			// 当てはまらないとき
			else {

				// 空白を出力
				cout << "  ";
			}
		}

		// 記号のループ出力終了後に改行を出力
		cout << '\n';
	}

	// 区切り用の記号を出力するためのループ
	for (int countInt = 0; countInt < ARRAY_LENGTH * 2 + 1; countInt++) {

		// 記号を出力
		cout << '-';
	}

	// ループ後に改行を出力
	cout << '\n';

	// 最下段のラベルを出力するためのループ
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 配列の添字にあたる数字の10の剰余を、幅をそろえて出力
		cout << setw(2) << countInt % 10;
	}

	// ループ後に改行を出力
	cout << '\n';
}