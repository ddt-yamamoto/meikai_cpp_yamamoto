/*
■演習5-8
配列の要素の並びをシャッフルする(要素の並びがランダムになるようにかき混ぜる)プログラムを作成せよ。
*/

#include <iostream> // 入出力
#include <cstdlib> // 乱数
#include <ctime> // 日時

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main() {

	// 定数オブジェクトにより配列の要素数を定義
	const int ARRAY_LENGTH = 7;

	// 配列を初期化
	int  arrayInt[ARRAY_LENGTH] = { 0 };

	// 乱数の種を生成
	srand(time(NULL));

	// 配列の長さと同じ回数ループ
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 0〜99の乱数を配列に格納
		arrayInt[countInt] = rand() % 100;

		// 配列を走査して出力
		cout << "arrayInt[" << countInt << "] = " << arrayInt[countInt] << '\n';
	}

	// 先頭から順に、それ以降の添字のランダムな要素と入れ替えを行う
	// 最後の一回は残り物なので選ぶ必要がなく、ループは要素数より1回少なくてよい
	for (int countInt = 0; countInt < ARRAY_LENGTH - 1; countInt++) {
		// rand() % (ARRAY_LENGTH - countInt) + countInt　と countIntを交換

		// 現在のcountIntの位置以降の要素から一つを選び、変数randSelectedに代入
		int randSelected = rand() % (ARRAY_LENGTH - countInt) + countInt;

		// 入れ替え操作を行う。Aを一時的な箱に退避
		int temporaryInt = arrayInt[countInt];

		// 退避させたので、BをAに代入
		arrayInt[countInt] = arrayInt[randSelected];

		// 退避させておいたAをBに代入して入れ替え完了
		arrayInt[randSelected] = temporaryInt;
	}

	// 仕切りを出力
	cout << "要素の並びをシャッフルしました。\n";

	// 配列の長さと同じだけループ
	for (int countInt = 0; countInt < ARRAY_LENGTH; countInt++) {

		// 入れ替えが終わった配列を走査し出力
		cout << "arrayInt[" << countInt << "] = " << arrayInt[countInt] << '\n';
	}
}