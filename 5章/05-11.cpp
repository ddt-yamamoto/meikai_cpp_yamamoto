/*
■演習5-11
6人の2科目(国語・数学)の点数を読み込んで、科目ごとの合計点と平均点、学生ごとの合計点と平均点を求めるプログラムを作成せよ。
*/

#include <iostream> // 入出力
#include <iomanip> // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 定数を定値オブジェクトで定義
	const int STUDENT_NUMBER = 6;      // 学生の人数
	const int SUBJECT_NUMBER = 2;      // 科目の数(国語、数学)
	const int SUMMARY_TYPE_NUMBER = 2; // 集計する種類数(合計、平均)

	// 科目名を列挙型で定義
	enum EnumSubject { 国語, 数学 };

	// 集計の種類を列挙型で定義
	enum EnumSummary { 合計, 平均 };

	// 行列によって表す点数表(学生×科目)を定義
	int matrixScore[STUDENT_NUMBER][SUBJECT_NUMBER] = { 0 };

	// 集計結果を入れる行列を定義(各学生および科目×集計する種類)を定義
	double matrixSummary[STUDENT_NUMBER + SUBJECT_NUMBER][SUMMARY_TYPE_NUMBER] = { 0 };

	// 各学生の各科目の点数を入力させる
	// 学生の人数だけループ
	for (int countStudent = 0; countStudent < STUDENT_NUMBER; countStudent++) {

		// 科目の数だけループ
		for (int countSubject = 0; countSubject < SUBJECT_NUMBER; countSubject++) {

			// 0人目から始まるので+1する。入力説明。
			cout << countStudent + 1 << "人目の";

			// 科目の表示を切り替え
			switch (countSubject) {

			// countSubjectが0のとき
			case 国語:

				// 列挙子に合わせた文字列を出力
				cout << "国語";

				// switchを抜ける
				break;

			// countSubjectが1のとき
			case 数学:

				// 列挙子に合わせた文字列を出力
				cout << "数学";

				// switchを抜ける
				break;

			// それ以外の時
			default:

				// switchを抜ける
				break;
			}

			// 入力を促す
			cout << "の点数：";

			// ループによってすべての要素に入力が行われる。現在の位置に格納。
			cin >> matrixScore[countStudent][countSubject];
		}

		// 一人分の入力が終わるたびに区切りを出力
		cout << "----------------------\n";
	}

	// 全員分の入力が終わったら区切りを出力
	cout << "■集計結果-------------\n";

	// 点数表の行列を読み込んで「合計」の集計
	// 学生の数だけループ
	for (int countStudent = 0; countStudent < STUDENT_NUMBER; countStudent++) {

		// 科目の数だけループ
		for (int countSubject = 0; countSubject < SUBJECT_NUMBER; countSubject++) {

			// 学生ごとの合計をあらわす行列の位置に格納して合計を計算する
			matrixSummary[countStudent + SUMMARY_TYPE_NUMBER][合計] += matrixScore[countStudent][countSubject];

			// 科目ごとの合計をあらわす行列の位置に格納して合計を計算する
			matrixSummary[countSubject][合計] += matrixScore[countStudent][countSubject];
		}
	}

	// ラベルを出力
	cout << "          合計     平均\n";

	// 集計表の行列を読み込んで、「平均」部分を埋める
	// 科目数 + 学生数の数だけループ
	for (int countInt = 0; countInt < SUBJECT_NUMBER + STUDENT_NUMBER; countInt++) {

		// 集計対象が何番目かで場合分け(はじめが科目、次に学生が対象となるため)
		switch (countInt) {

		// 国語(0)の場合
		case 国語:

			// ラベルを出力
			cout << " 国語 ";

			// switch文を抜ける
			break;

		// 数学(1)の場合
		case 数学:

			// ラベルを出力
			cout << " 数学 ";

			// switch文を抜ける
			break;

		// それ以外(学生)の場合
		default:

			// 上に科目が来るので、その分人数を調節
			cout << countInt - SUBJECT_NUMBER + 1 << "人目 ";

			// switch文を抜ける
			break;
		}

		// 集計対象が科目の場合
		if (countInt < SUBJECT_NUMBER) {

			// 合計と学生数から科目の平均を求める
			matrixSummary[countInt][平均] = matrixSummary[countInt][合計] / double(STUDENT_NUMBER);
		}

		// 集計対象が学生の場合
		else {

			// 合計と科目数から個人の平均を求める
			matrixSummary[countInt][平均] = matrixSummary[countInt][合計] / double(SUBJECT_NUMBER);
		}

		// 集計項目の数だけループ(合計、平均で2つ)
		for (int countSummaryType = 0; countSummaryType < SUMMARY_TYPE_NUMBER; countSummaryType++) {

			// 整形しつつ、集計用行列の中身を走査して出力
			cout << setprecision(6) << setw(8) << matrixSummary[countInt][countSummaryType] << " ";
		}

		// 集計対象ごとに改行を出力
		cout << '\n';
	}
}