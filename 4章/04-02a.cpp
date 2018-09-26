/*
■演習4-2a
以下の二つのプログラムを作成せよ。
・int		型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
・unsigned	型の最小値から最大値までの全整数値を8進数・10進数・16進数で表示。
*/

// 整数型の最小値と最大値、入出力、操作子をを利用するため、インクルード
#include <climits>  // 整数型の最小値と最大値
#include <iostream> // 入出力
#include <iomanip>  // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数を定義
int main(){
	
	// Int型の最小値で初期化
	int countInt = INT_MIN;
	
	// 今回、for文の式と条件ではループ終了時の制御ができないので、ここでは条件なしでループさせる
	for( ; ; countInt++ ){
		
		// 10進数での表示
		cout << dec << i << ' ';
		
		// 8進数での表示
		cout << oct << i << ' ';
		
		// 16進数での表示
		cout << hex << i << '\n';
		
		// 最後まで到達したら、for文の式による最後のインクリメントが行われる前に、breakで抜ける
		if( i == INT_MAX ){
			
			// for文を抜ける
			break;
		}
	}
}