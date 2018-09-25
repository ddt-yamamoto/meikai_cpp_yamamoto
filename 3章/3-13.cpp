/*
■演習3-13
身長と標準体重の対応表を表示するプログラムを作成せよ。
表示する身長の範囲(開始値/終了値/増分)は、整数値として読み込むこと。
※標準体重は( 身長 - 100 ) * 0.9によって求める。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 身長の開始値、終了値、増分を格納する変数を宣言
	int minHeightInt;		// 開始値
	int maxHeightInt;		// 終了値
	int intervalInt;		// 増分
	
	// 身長の開始値の入力を促す
	cout << "何cmから：";
	
	// 入力値を変数に格納
	cin >> minHeightInt;
	
	// 身長の終了値の入力を促す
	cout << "何cmまで：";
	
	// 入力値を変数に格納
	cin >> maxHeightInt;
	
	// 表示する身長の間隔(増分)の入力を促す
	cout << "何cmごと：";
	
	// 入力値を変数に格納
	cin >> intervalInt;
	
	// ラベルとなる文字列を出力
	cout << "身長" << " 標準体重\n";
	
	// 終了値を超えないように、開始値に増分を加算しながらループを行う
	for( int countInt = minHeightInt; countInt <= maxHeightInt; countInt += intervalInt ){
		
		// 1周ごとに1行、身長と標準体重の組を出力する
		cout << countInt << "   " << ( countInt - 100 ) * 0.9 << '\n';
	}
}
