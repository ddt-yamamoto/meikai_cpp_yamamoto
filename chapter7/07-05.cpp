/*
■演習7-5
List7-10の関数reverseでの2要素の交換を、
演習7-2(p.253)で作成した関数swapの呼び出しによって行うように変更したプログラムを作成せよ。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
*受け取った2つのポインタが指すオブジェクトの値を互いに入れ替える関数
*@param argumentPointerX, argumentPointerY
*@author Kenta Yamamoto
*@since 2018-10-04
*/
void swap(int* argumentPointerX, int* argumentPointerY) {

	// 受け取ったポインタに間接演算子を適用して参照外しを行い、オブジェクトを指す。
	// 入れ替えのための一時退避用の変数を宣言し、Xの値で初期化することで、Xの値を退避
	int temporaryInt = *argumentPointerX;

	// 参照を外したオブジェクトであるXに対して、同じくオブジェクトであるYの値を代入
	*argumentPointerX = *argumentPointerY;

	// Yに、退避しておいたXの値を代入
	*argumentPointerY = temporaryInt;
}

/**
*受け取った配列の要素の並びを反転する
*@param int a[] 並び替える対象の配列
*@param int elementNumber a[]の要素数
*@author Kenta Yamamoto
*@since 2018-10-09
*/
void reverse(int a[], int elementNumber) {

	// 並び替えのため、要素数の半分の回数だけループ
	// (奇数の際は中央値があり、それは入れ替えなくてよいので、余りは切り捨てで問題なし)
	for (int countInt = 0; countInt < elementNumber / 2; countInt++) {

		// a[countInt]と、その反転位置にあたる要素とを入れ替え
		swap(a[countInt], a[elementNumber - countInt - 1]);
	}
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
}