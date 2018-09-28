/*
■演習4-1
すべての文字について、数字／英大文字／英小文字／記号文字などの文字種が分かる一覧表を出力するプログラムを作成せよ。
*/

// 文字種テスト関数、整数型の最小値と最大値、入出力、操作子を利用するため、インクルード
#include <cctype>   // 文字種テスト関数
#include <climits>  // 整数型の最小・最大値
#include <iostream> // 入出力
#include <iomanip>  // 操作子

// 名前空間stdの利用宣言
using namespace std;

// main関数を定義
int main(){
	
	// 何をするかの説明メッセージを出力
	cout << "この処理系の文字と文字コードと文字種\n";
	
	// 今回、for文の式と条件ではループ終了時の制御ができないので、ここでは条件なしでループさせる
	for( char charNumber = 0; ; charNumber++ ){
		
		// 一部の制御文字をエスケープする処理
		switch( charNumber ){
			
		// 警報
		case '\a' :
			
			// 拡張表記と同じになるようにエスケープして出力
			cout << "\\a";
			
			// switch文を抜ける
			break;
			
		// 後退
		case '\b' :
			
			// 拡張表記と同じになるようにエスケープして出力
			cout << "\\b";
			
			// swtich文を抜ける
			break;
			
		// 書式送り
		case '\f' :
			
			// 拡張表記と同じになるようにエスケープして出力
			cout << "\\f";
			
			// switch文を抜ける
			break;
			
		// 改行
		case '\n' :
			
			// 拡張表記と同じになるようにエスケープして出力
			cout << "\\n";
			
			// switch文を抜ける
			break;
			
		// 復帰
		case '\r' :
			
			// 拡張表記と同じになるようにエスケープして出力
			cout << "\\r";
			
			// switch文を抜ける
			break;
			
		// 水平タブ
		case '\t' :
			
			// 拡張表記と同じになるようにエスケープして出力
			cout << "\\t";
			
			// switch文を抜ける
			break;
			
		// 垂直タブ
		case '\v' :
			
			// 拡張表記と同じになるようにエスケープして出力
			cout << "\\v";
			
			// switch文を抜ける
			break;
			
		// それ以外
		default :
			
			// 表示文字であればそのまま、そうでなければ半角スペースを出力
			cout << ' ' << ( isprint( charNumber ) ? charNumber : ' ' );
			
			// switch文を抜ける
			break;
		}
		
		// int型にキャストして16進数字で表記(表としての見た目のために桁あわせも行う)
		cout << ' ' << hex << setw( 2 ) << int( charNumber ) << ' ';
		
		// char型のiがアルファベットまたは10進数字の場合
		if( isalnum( charNumber ) ){
			
			// 10進数字の場合
			if( isdigit( charNumber ) ){
				
				// 判定を出力
				cout << "10進数字\n";
			}
			
			// アルファベットの場合
			else{
				
				// 英大文字の場合
				if( isupper( charNumber ) ){
					
					// 判定を出力
					cout << "英大文字\n";
				}
				
				// 英小文字の場合
				else{
					
					// 判定を出力
					cout << "英小文字\n";
				}
			}
		}
		
		// 制御文字の場合
		else if( iscntrl( charNumber ) ){
			
			// 判定を出力
			cout << "制御文字\n";
		}
		
		// 区切り文字の場合
		else if( ispunct( charNumber ) ){
			
			// 判定を出力
			cout << "区切り文字\n";
		}
		
		// 空白類文字の場合
		else if( isspace( charNumber ) ){
			
			// 判定を出力
			cout << "空白文字\n";
		}
		
		// その他の場合
		else{
			
			// 改行のみ出力
			cout << '\n';
		}
		
		// 文字コードが最後まで到達したら、for文の式による最後のインクリメントが行われる前に、breakで抜ける
		if( charNumber == CHAR_MAX ){
			
			// for文を抜ける
			break;
		}
	}
}