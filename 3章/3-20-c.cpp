/*
■演習3-20-c
List3-14は左下側が直角の直角三角形を表示するプログラムであった。
直角が左上側、右下側、右上側の直角三角形を表示するプログラムをそれぞれ作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 入力値の格納用変数を宣言
	int inputInt;
	
	// 説明メッセージを出力
	cout << "右上直角の三角形を表示します。\n";
	
	// 入力を促すメッセージを出力
	cout << "段数は：";
	
	// 入力値を変数に格納
	cin >> inputInt;
	
	// 図形の縦軸をループで表現
	for( int lowInt = 1; lowInt <= inputInt; lowInt++ ){
		
		// 図形の横軸をループで表現
		// 行が進むほど回数が多くなるように、ループの終了条件を調整
		for( int colInt = 1; colInt <= lowInt; colInt++ ){
			
			// 描画用の文字を出力
			cout << ' ';
		}
		
		// 図形の横軸をループで表現
		// 行が進むほど回数が少なくなるように、ループ用変数colIntの初期値を調整
		for( int colInt = lowInt; colInt <= inputInt; colInt++ ){
			
			// 描画用の文字を出力
			cout << '*';
		}
		
		// 横軸のループが終わり、次の行に進むので改行を出力
		cout << '\n';
	}
}
