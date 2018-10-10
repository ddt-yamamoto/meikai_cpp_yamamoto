/*
■演習7-4
typeid演算子を用いて型を表示することによって、List7-10(p.260)の関数reverseの仮引数aが配列でなくポインタであることを確認せよ。
*/

#include <iostream> // 入出力
#include <typeinfo> // 型情報

// 名前空間stdの利用宣言
using namespace std;

/**
*受け取った配列の要素の並びを反転する
*@param int a[] 並び替える対象の配列
*@param int elementNumber a[]の要素数
*@author Kenta Yamamoto
*@since 2018-10-09
*/
void reverse(int a[], int elementNumber){

	// 並び替えのため、要素数の半分の回数だけループ
	// (奇数の際は中央値があり、それは入れ替えなくてよいので、余りは切り捨てで問題なし)
	for (int countInt = 0; countInt < elementNumber / 2; countInt++) {

		// XとYの入れ替えを行う
		// 一時退避用変数にXを退避
		int temporaryInt = a[countInt];

		// Xの反転位置にあたるYをXに代入
		a[countInt] = a[elementNumber - countInt - 1];

		// Yに、退避しておいたXを代入して入れ替え完了
		a[elementNumber - countInt - 1] = temporaryInt;
	}
	// 仮引数aの型を、typeid演算子によって表示
	cout << "仮引数aの型 : " << typeid(a).name() << '\n';
}

// main関数の定義
int main() {

	// 配列の要素数の定義
	const int ELEMENT_NUMBER = 5;

	// 配列の宣言
	int sampleArray[ELEMENT_NUMBER];

	// 配列を走査して入力受付
	for (int countInt = 0; countInt < ELEMENT_NUMBER; countInt++) {

		// 入力を促す
		cout << "c[" << countInt << "] : ";

		// 入力値を配列に格納
		cin >> sampleArray[countInt];
	}
	// 関数に配列と要素数を渡して、配列の要素の並びを反転させる
	reverse(sampleArray, ELEMENT_NUMBER);

	// メッセージを出力
	cout << "要素の並びを反転しました。\n";

	// 配列を走査して要素を出力
	for (int countInt = 0; countInt < ELEMENT_NUMBER; countInt++) {

		// 反転した要素を出力
		cout << "c[" << countInt << "] = " << sampleArray[countInt] << '\n';
	}
	// 比較対象としてsampleArrayの型もtypeid演算子によって表示
	cout << "sampleArrayの型 : " << typeid(sampleArray).name() << '\n';
}

/*
■実行結果(一例)
c[0] : 3
c[1] : 5
c[2] : 6
c[3] : 2
c[4] : 2
仮引数aの型 : int *
要素の並びを反転しました。
c[0] = 2
c[1] = 2
c[2] = 6
c[3] = 5
c[4] = 3
sampleArrayの型 : int [5]

■考察
main関数内で宣言したsampleArrayの型はint[5]型でありsampleArrayは配列であるが、
reverse関数の仮引数aの型はint *と判定されたので、aは配列でなくポインタである。
*/