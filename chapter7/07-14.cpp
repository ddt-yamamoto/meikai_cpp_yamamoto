/*
■演習7-14
要素数nの配列a内のkeyと等しい全要素の添字を配列idxに格納する関数search_idxを作成せよ。
返却するのはkeyと等しい要素の個数とする。
int search_idx(int* a, int* idx, int n, int key);
たとえば、aに受け取った配列の要素が{1, 7, 5, 7, 2, 4, 7}でkeyが7であれば、idxに{1, 3, 6}を格納したうえで3を返却する。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*要素数nの配列a内のkeyと等しい全要素の添字を配列idxに格納する関数
*@param a 線形探索の対象となる配列
*@param idx 探索結果を格納する配列
*@param n 配列aの要素数
*@param key この値と等しいものを探索する
*@return returnElementNumber idxに格納した要素数を返却する
*@author Kenta Yamamoto
*@since 2018-10-10
*/
int search_idx(int* a, int* idx, int n, int key) {

	// 一致を見つけた回数を記録する変数を宣言し0で初期化
	int searchCount = 0;

	// 要素数と同じだけループして配列aの線形探索を行う
	for (int indexInt = 0; indexInt < n; indexInt++) {

		// keyと同じ値かどうかの判定
		// 判定後、aが指すポインタを一つ後にずらすことで次の要素を指すようにする
		if (*a++ == key) {

			// 一致した場合、そのときの配列aの要素番号を、配列idxに先頭要素から順に格納していく
			// 格納後に、見つかった数searchCountをインクリメントすることでカウントする
			idx[searchCount++] = indexInt;
		}
	}
	// 一致を見つけた回数を返却
	return searchCount;
}

// main関数の定義
int main() {

	// 配列aの長さを定数で定義
	const int ARRAY_LENGTH = 7;

	// 探索する定数の定義
	const int key = 7;

	// 配列aの定義
	int a[ARRAY_LENGTH]	= { 1, 7, 5, 7, 2, 4, 7 };

	// 一致場所の格納用の配列idxの定義。長さは最大で配列aと同じになるので、配列aと同じにしておく。
	// 一致場所が先頭(0)という場合もあるので、すべての要素を-1で初期化しておく。
	int idx[ARRAY_LENGTH] = { -1 };

	// 配列a内のkeyと等しい全要素の添字を配列idxに格納する関数を呼び出し、返り値である一致回数(idxに格納した長さ)を受け取る
	int indexLength = search_idx(a, idx, ARRAY_LENGTH, key);

	// idxに-1以外の要素が格納されている個数と同じだけループ
	for (int i = 0; i < indexLength; i++) {

		// 先頭から順にidxの要素を出力
		cout << "idx[" << i << "] = " << idx[i] << '\n';
	}
}