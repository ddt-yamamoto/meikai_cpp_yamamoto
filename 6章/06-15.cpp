/*
■演習6-15
x時y分の時刻を、そのdy分後の時刻へと更新する関数spendを作成せよ。なお時刻の表現は24時間制であるものとする。
たとえば、23時59分の2分後の時刻は0時1分となる。
*/

#include <iostream> // 入出力

// 名前空間stdの利用宣言
using namespace std;

/**
x時y分の時刻を、そのdy分後の時刻へと更新する関数(時刻の表現は24時間制)
@param argumentTime 「時」を表す
@param argumentMinute 「分」を表す
@param argumentMinuteDelta 「分」の増分を表す
@return なし
@author Kenta Yamamoto
@since 2018-10-02
*/
void moveClockForward(int& argumentTime, int& argumentMinute, int argumentMinuteDelta) {

	// 参照型オブジェクトの分の値に対して増分の値を加える
	argumentMinute += argumentMinuteDelta;

	// 参照型オブジェクトの時の値に対して、増えた結果の分が60を超えていた場合、60につき1加える(125分なら2加える)。
	argumentTime += argumentMinute / 60;

	// 増えた結果の分に対して60の剰余をとって代入(0分をまたいだ場合)
	argumentMinute %= 60;

	// 増えた結果の時に対して24の剰余をとって代入(0時をまたいだ場合)
	argumentTime %= 24;
}

// main関数の定義
int main() {

	// 時間、分、分の増分を格納する変数をそれぞれ定義;
	int initTime = 0;    // 時
	int initMinute = 0;  // 分
	int minuteDelta = 0; // 分の増分

	// 入力を促す
	cout << "現在時：";

	// 変数に格納
	cin >> initTime;

	// 入力を促す
	cout << "現在分：";

	// 変数に格納
	cin >> initMinute;

	// 入力を促す
	cout << "進める分：";

	// 変数に格納
	cin >> minuteDelta;

	// 関数に時、分を参照渡し、分の増分を値渡し
	moveClockForward(initTime, initMinute, minuteDelta);

	// 更新された時、分を出力
	cout << initTime << "時" << initMinute << "分\n";
}