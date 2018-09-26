/*
■演習3-26
人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
・人間が望む限り何度でも繰り返せるようにするもの。
・いずれか一方が３回勝つまで繰り返すもの。
など、複数のパターンのプログラムを作ること。

※3-26-aでは、1/2の確率で人間が勝ち、あいこと負けはどちらも1/4となる、イカサマ入りプログラムを作成します。
人間が2回勝ち越す(例：○×△×○○○←で終了)まで繰り返します。
*/

// 入出力、乱数、日付時刻、文字列を扱うので、インクルード
#include <iostream> // 入出力
#include <cstdlib>  // 乱数
#include <ctime>    // 日付時刻
#include <string>   // 文字列

// 名前空間stdの利用宣言
using namespace std;

// main関数の定義
int main(){
	
	// 日付時刻から乱数の種を生成
	srand(time(NULL));
	
	// キーボードからの入力を格納するための変数を宣言
	int inputInt;
	
	// 出題のメッセージを出力
	cout << "ジャンケンゲーム開始!!\n";
	
	// 出題のメッセージを出力
	cout << "2回勝ち越しすまで終われません。\n";
	
	// 出題のメッセージを出力
	cout << "グー:0 チョキ:1 パー:2 から数字で選択してください。\n";
	
	// ジャンケンの手を、定数の文字列で定義しておく
	const string GOO_STRING = "グー   "; // グー
	const string CHO_STRING = "チョキ "; // チョキ
	const string PAR_STRING = "パー   "; // パー
	
	// 勝ち越し数を示す数を0で初期化
	int winNumber = 0;
	
	// 2回勝ち越すまでループし続ける
	while( winNumber < 2 ){
		
		// 正しく手が選ばれるまで繰り返す
		do{
			
			// 入力を促すメッセージを出力
			cout << "出す手を選ぶ：";
			
			// 入力値を変数に格納
			cin >> inputInt;
			
		}
		
		// 0〜2の範囲の入力があるまで続ける
		while( inputInt < 0 || inputInt > 2 );
		
		// 乱数を加工して、0〜3の乱数を生成し、先に勝敗を決定する
		int winRateInt = rand() % 4;
		
		// 乱数をもとに、勝敗結果を振り分ける
		switch( winRateInt ){
		
		// 勝ちの場合(あいこと負けの2倍の確率で勝つのでcase2つを該当させる)
		case 0:
		case 1:
			
			// 人間が出した手によって、出力メッセージを使い分ける
			switch( inputInt ){
			
			// グーの場合
			case 0:
				
				// メッセージを出力
				cout << "あなた：" << GOO_STRING << "  COM：" << CHO_STRING << "であなたの勝ち！\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// チョキの場合
			case 1:
				
				// メッセージを出力
				cout << "あなた：" << CHO_STRING << "  COM：" << PAR_STRING << "であなたの勝ち！\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// パーの場合
			case 2:
				
				// メッセージを出力
				cout << "あなた：" << PAR_STRING << "  COM：" << GOO_STRING << "であなたの勝ち！\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// その他の場合
			default:
				
				// メッセージ分岐を抜ける
				break;
			}
			
			// 勝ち越し数を1増やす
			winNumber++;
			
			// ループを抜け、再戦判定へ
			break;
			
		// あいこの場合
		case 2:
			
			// 人間が出した手によって、出力メッセージを使い分ける
			switch( inputInt ){
			
			// グーの場合
			case 0:
				
				// メッセージを出力
				cout << "あなた：" << GOO_STRING << "  COM：" << GOO_STRING << "であいこ。\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// チョキの場合
			case 1:
				
				// メッセージを出力
				cout << "あなた：" << CHO_STRING << "  COM：" << CHO_STRING << "であいこ。\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// パーの場合
			case 2:
				
				// メッセージを出力
				cout << "あなた：" << PAR_STRING << "  COM：" << PAR_STRING << "であいこ。\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// その他の場合
			default:
				
				// メッセージ分岐を抜ける
				break;
			}
			
			// ループを抜け、再戦判定へ
			break;
			
		// 負けの場合
		case 3:
			
			// 人間が出した手によって、出力メッセージを使い分ける
			switch( inputInt ){
			
			// グーの場合
			case 0:
				
				// メッセージを出力
				cout << "あなた：" << GOO_STRING << "  COM：" << PAR_STRING << "であなたの負け。\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// チョキの場合
			case 1:
				
				// メッセージを出力
				cout << "あなた：" << CHO_STRING << "  COM：" << GOO_STRING << "であなたの負け。\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// パーの場合
			case 2:
				
				// メッセージを出力
				cout << "あなた：" << PAR_STRING << "  COM：" << CHO_STRING << "であなたの負け。\n";
				
				// メッセージ分岐を抜ける
				break;
				
			// その他の場合
			default:
				
				// メッセージ分岐を抜ける
				break;
			}
			
			// 勝ち越し数を1減らす
			winNumber--;
			
			// ループを抜け、再戦判定へ
			break;
		
		// その他の場合
		default:
			
			// ループを抜け、再戦判定へ
			break;
		}
	}
	
	// 勝利メッセージを出力
	cout << "連戦の結果、あなたは総計で2回勝ち越しました。";
}
