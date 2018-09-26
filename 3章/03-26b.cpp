/*
■演習3-26
人間とコンピュータとが対戦するジャンケンプログラムを作成せよ。
・人間が望む限り何度でも繰り返せるようにするもの。
・いずれか一方が３回勝つまで繰り返すもの。
など、複数のパターンのプログラムを作ること。

※3-26-bでは、互いに各種類の手を2回までしか使えないルールで5連戦を行うジャンケンプログラムを作成します。
5戦終了後、[勝ち:分け:負け]の内訳を表示します。
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
	
	// コンピュータに手を出させるための、乱数の種を設定
	srand(time(NULL));
	
	// キーボードからの入力を格納するための変数を宣言
	int playerChoice;
	
	// コンピュータの手の選択を格納するための変数を宣言
	int comChoice;
	
	// 出題のメッセージを出力
	cout << "ジャンケンゲーム開始!!\n";
	
	// 出題のメッセージを出力
	cout << "5連戦しますが、互いに同じ手は2回までしか使えません。\n";
	
	// 出題のメッセージを出力
	cout << "グー:0 チョキ:1 パー:2 から数字で選択してください。\n\n";
	
	// ジャンケンの手を、定数の文字列で定義しておく
	const string GOO_STRING = "グー";   // グー
	const string CHO_STRING = "チョキ"; // チョキ
	const string PAR_STRING = "パー";   // パー
	
	// ジャンケンの手の残り数を2で初期化
	int gooNumberPlayer = 2; // 人間のグーの残り手数
	int choNumberPlayer = 2; // 人間のチョキの残り手数
	int parNumberPlayer = 2; // 人間のパーの残り手数
	
	int gooNumberCom = 2; // コンピュータのグーの残り手数
	int choNumberCom = 2; // コンピュータのチョキの残り手数
	int parNumberCom = 2; // コンピュータのパーの残り手数
	
	// 人間側から見た勝敗数を示す数を0で初期化
	int winNumber  = 0; // 勝ち数カウンタ
	int drawNumber = 0; // 引き分け数カウンタ
	int loseNumber = 0; // 負け数カウンタ
	
	// 5連戦なので、5回ループさせる
	for( int countInt = 0; countInt < 5; countInt++ ){
		
		// 人間に残りの手の内訳を通知するメッセージを出力
		cout << "あなたの残りの手は：" << GOO_STRING << ":" << gooNumberPlayer << " "
		                               << CHO_STRING << ":" << choNumberPlayer << " "
		                               << PAR_STRING << ":" << parNumberPlayer << "\n";
		
		// 人間に残りの手の内訳を通知するメッセージを出力
		cout << "コンピュータの手は：" << GOO_STRING << ":" << gooNumberCom << " "
		                               << CHO_STRING << ":" << choNumberCom << " "
		                               << PAR_STRING << ":" << parNumberCom << "\n";
		
		// 残っている手を選ぶまで続ける
		do{
			
			// 入力を促すメッセージを出力
			cout << "出す手を選ぶ：";
			
			// 入力値を変数に格納
			cin >> playerChoice;
			
			// どの手を選んだかで振り分け
			switch( playerChoice ){
			
			// グーの場合
			case 0:
				
				// 選んだ手がもう残っていなかった場合
				if( gooNumberPlayer <= 0 ){
					
					// 注意メッセージを表示する
					cout << "その手はもう使えません。\n";
					
					// 手を未選択状態にする
					playerChoice = -1;
				}
				
				// 選んだ手が残っていた場合
				else{
					
					// 手の数を一つ減らす
					gooNumberPlayer--;
				}
				
				// switch文を抜ける
				break;
				
			// チョキの場合
			case 1:
				
				// 選んだ手がもう残っていなかった場合
				if( choNumberPlayer <= 0 ){
					
					// 注意メッセージを表示する
					cout << "その手はもう使えません。\n";
					
					// 手を未選択状態にする
					playerChoice = -1;
				}
				
				// 選んだ手が残っていた場合
				else{
					
					// 手の数を一つ減らす
					choNumberPlayer--;
				}
				
				// switch文を抜ける
				break;
				
			// パーの場合
			case 2:
				
				// 選んだ手がもう残っていなかった場合
				if( parNumberPlayer <= 0 ){
					
					// 注意メッセージを表示する
					cout << "その手はもう使えません。\n";
					
					// 手を未選択状態にする
					playerChoice = -1;
				}
				
				// 選んだ手が残っていた場合
				else{
					
					// 手の数を一つ減らす
					parNumberPlayer--;
				}
				
				// switch文を抜ける
				break;
				
			// それ以外の場合
			default:
				
				// switch文を抜ける
				break;
			}
		}
		
		// 手を正しく選べるまで続ける
		while( playerChoice < 0 || playerChoice > 2 );
		
		// 次にコンピュータの手の選択。残っている手を選ぶまで続ける
		do{
			
			// 乱数をもとに人間同様、3種類の手を生成する
			comChoice = rand() % 3;
			
			// どの手を選んだかで振り分け
			switch( comChoice ){
				
			// グーの場合
			case 0:
				
				// 手が残っていなかった場合
				if( gooNumberCom <= 0 ){
					
					// 未選択に戻す
					comChoice = -1;
				}
				
				// 手が残っていた場合
				if( gooNumberCom > 0 ){
					
					// 手の数を一つ減らす
					gooNumberCom--;
				}
				
				// switch文を抜ける
				break;
				
			// チョキの場合
			case 1:
				
				// 手が残っていなかった場合
				if( choNumberCom <= 0 ){
					
					// 未選択に戻す
					comChoice = -1;
				}
				
				// 手が残っていた場合
				if( choNumberCom > 0 ){
					
					// 手の数を一つ減らす
					choNumberCom--;
				}
				
				// switch文を抜ける
				break;
				
			// パーの場合
			case 2:
				
				// 手が残っていなかった場合
				if( parNumberCom <= 0 ){
					
					// 未選択に戻す
					comChoice = -1;
				}
				
				// 手が残っていた場合
				if( parNumberCom > 0 ){
					
					// 手の数を一つ減らす
					parNumberCom--;
				}
				
				// switch文を抜ける
				break;
				
			// それ以外の場合
			default:
				
				// switch文を抜ける
				break;
			}
			
		// 手を正しく選べるまで続ける
		} while( comChoice < 0 || comChoice > 2 );
		
		// 勝敗の判定を行う。互いの手の数字を差し引きした結果別に判定する。
		switch( playerChoice - comChoice ){
			
		// プレイヤー:0(グー)、COM:1(チョキ)などの場合
		case -1:
		case  2:
			
			// 勝敗結果のメッセージを出力
			cout << "あなたの勝ちです。\n\n";
			
			// 勝ち数をインクリメント
			winNumber++;
			
			// switch文を抜け、for文に戻る
			break;
			
		// 互いに同じ数字の場合
		case  0:
			
			// 勝敗結果のメッセージを出力
			cout << "あいこです。\n\n";
			
			// 引き分け数をインクリメント
			drawNumber++;
			
			// switch文を抜け、for文に戻る
			break;
			
		// プレイヤー:2(パー)、COM:1(チョキ)などの場合
		case  1:
		case -2:
			
			// 勝敗結果のメッセージを出力
			cout << "あなたの負けです。\n\n";
			
			// 負け数をインクリメント
			loseNumber++;
			
			// switch文を抜け、for文に戻る
			break;
			
		// それ以外の場合
		default:
			
			// switch文を抜け、for文に戻る
			break;
		}
	}
	
	// 最終結果を出力
	cout << "結果発表します。勝ち:" << winNumber << "  分け:" << drawNumber << "  負け:" << loseNumber << '\n';
}
