/*
■演習3-22
n段の下向き数字ピラミッドを表示するプログラムを作成せよ。
第i行目には i % 10 によって得られる数字を表示すること。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値の格納用変数を宣言
	int inputInt;
	
	// 入力を促すメッセージを出力
	cout << "段数は：";
	
	// 入力値を変数に格納
	cin >> inputInt;
	
	// 図形の縦軸をループで表現
	for( int lowInt = 1; lowInt <= inputInt; lowInt++ ){
		
		// 図形の横軸をループで表現
		// 行が進むほど回数が多くなるように、ループの終了条件を調整
		for( int colInt = 1; colInt < lowInt ; colInt++ ){
			
			// 描画用の文字を出力
			cout << ' ';
		}
		
		// 図形の横軸をループで表現
		// 行が進むほど回数が少なくなるように、ループの終了条件を調整
		for( int colInt = 1; colInt <= ( inputInt - lowInt ) * 2 + 1; colInt++ ){
			
			// 描画用の文字を出力
			cout << lowInt % 10;
		}
		
		// 図形の横軸をループで表現
		// 行が進むほど回数が多くなるように、ループの終了条件を調整
		for( int colInt = 1; colInt < lowInt ; colInt++ ){
			
			// 描画用の文字を出力
			cout << ' ';
		}
		
		// 横軸のループが終わり、次の行に進むので改行を出力
		cout << '\n';
	}
}
