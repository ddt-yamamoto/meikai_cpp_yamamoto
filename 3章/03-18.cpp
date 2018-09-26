/*
■演習3-18
九九の表を表示するList3-13(p.106)を、setw操作子を用いることなく実現するように書きかえたプログラムを作成せよ。
*/

// 入出力を扱うので、インクルード
#include <iostream>

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 九九表の縦軸をループで表現
	for( int lowInt = 1; lowInt <= 9; lowInt++ ){
		
		// 九九表の横軸をループで表現
		for( int colInt = 1; colInt <= 9; colInt++ ){
			
			// 九九の計算結果が1桁の場合
			if( lowInt * colInt < 10 ){
				
				// 合計3桁となるよう、先頭に半角スペースを2桁追加して出力
				cout << "  " << lowInt * colInt;
			}
			
			// 九九の計算結果が2桁の場合
			else{
				
				// 合計3桁となるよう、先頭に半角スペースを1桁追加して出力
				cout << " " << lowInt * colInt;
			}
		}
		
		// 横軸のループが終わり、次の行に進むので改行を出力
		cout << '\n';
	}
}
