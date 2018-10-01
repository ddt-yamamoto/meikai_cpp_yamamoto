/*
■演習5-10
4行3列の行列と3行4列の積を求めるプログラムを作成せよ。各構成要素の値はキーボードから読み込むこと。
*/

#include <iostream> // 入出力
#include <iomanip> // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 行列の行と列の長さを定値オブジェクトで定義
	const int LEFT_LOW     = 4; // 左(一つ目)の行列の行数
	const int LEFT_COLUMN  = 3; // 左(一つ目)の行列の列数
	const int RIGHT_LOW    = 3; // 右(二つ目)の行列の行数
	const int RIGHT_COLUMN = 4; // 右(二つ目)の行列の列数

	// 左の行列を定義
	int matrixLeft[LEFT_LOW][LEFT_COLUMN]     = { 0 };

	// 右の行列を定義
	int matrixRight[RIGHT_LOW][RIGHT_COLUMN]  = { 0 };

	// 積を入れる行列を定義
	int matrixProduct[LEFT_LOW][RIGHT_COLUMN] = { 0 };

	// 全般的な入力方法説明のメッセージを出力
	cout << "行列の構成要素を入力します。一度に1行ごとに、列はスペース区切りで表して入力してください。\n";

	// 左の行列についての入力説明メッセージを出力
	cout << "一つ目の行列は一行につき" << LEFT_COLUMN << "列。" << LEFT_LOW << "行分入力してください。\n";

	// 入力値を左の行列に格納するためのループ処理
	// 行のループ
	for (int countLow = 0; countLow < LEFT_LOW; countLow++) {

		// 列のループ
		for (int countColumn = 0; countColumn < LEFT_COLUMN; countColumn++) {

			// 左の行列の、行と列で特定される構成要素に、入力値を代入
			cin >> matrixLeft[countLow][countColumn];
		}
	}

	// 左の行列についての入力説明メッセージを出力
	cout << "二つ目の行列は一行につき" << RIGHT_COLUMN << "列。" << RIGHT_LOW << "行分入力してください。\n";

	// 入力値を左の行列に格納するためのループ処理
	// 行のループ
	for (int countLow = 0; countLow < RIGHT_LOW; countLow++) {

		// 列のループ
		for (int countColumn = 0; countColumn < RIGHT_COLUMN; countColumn++) {

			// 右の行列の、行と列で特定される構成要素に、入力値を代入
			cin >> matrixRight[countLow][countColumn];
		}
	}

	// 左右の行列の積の計算を行う。
	// 積を入れる行列にとっての行のループ
	for (int countLow = 0; countLow < LEFT_LOW; countLow++) {

		// 積を入れる行列にとっての列のループ
		for (int countColumn = 0; countColumn < RIGHT_COLUMN; countColumn++) {

			// 積を入れる行列の一つの構成要素(左右の行列の構成要素の内積)を計算するためのループ
			for (int countInnerProduct = 0; countInnerProduct < LEFT_COLUMN; countInnerProduct++) {

				// 左右の行列の構成要素の内積
				matrixProduct[countLow][countColumn] += matrixLeft[countLow][countInnerProduct] * matrixRight[countInnerProduct][countColumn];
			}
		}
	}

	// 結果出力のための仕切り用メッセージ
	cout << "---行列の積の計算結果---\n";

	// 積を入れた行列を走査して出力するための、行のループ
	for (int countLow = 0; countLow < LEFT_LOW; countLow++) {

		// 同じく列のループ
		for (int countColumn = 0; countColumn < RIGHT_COLUMN; countColumn++) {

			// 一つの構成要素の幅を4桁以下(+空白1桁で5桁)と想定して、整形して出力
			cout << setw(5) << matrixProduct[countLow][countColumn];
		}

		// 列が終わるごとに改行を一つ出力
		cout << '\n';
	}
}