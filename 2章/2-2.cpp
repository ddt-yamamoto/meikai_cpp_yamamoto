/*
�����K2-2
List2-5�̍Ō��else���Aelse if( n==0 )�ɕύX����Ƃǂ��Ȃ邩����������B
*/

// ���o�̓��C�u�����̎�荞��
#include <iostream>

// ���O���std�̗��p�錾
using namespace std;

// main�֐��̒�`
int main(){
	
	// ���͒l���󂯎�邽�߂̕ϐ��̐錾
	int inputIntFirst;
	
	// �L�[�{�[�h����̓��͂𑣂�
	cout << "�����l�F";
	
	// ���͂��ꂽ�l��ϐ��Ɋi�[
	cin >> inputIntFirst;
	
	// ���͂��ꂽ�l�����ł���ꍇ
	if( inputIntFirst > 0 ){
		
		// ���茋�ʂ��o��
		cout << "���̒l�͐��ł��B\n";
	}
	
	// ���͂��ꂽ�l�����ł���ꍇ
	else if( inputIntFirst < 0 ){
		
		// ���茋�ʂ��o��
		cout << "���̒l�͕��ł��B\n";
	}
	
	// ���͂��ꂽ�l��0�ł���ꍇ
	else if( inputIntFirst == 0 ){
		
		// ���茋�ʂ��o��
		cout << "���̒l��0�ł��B\n";
	}
}

/*
������
�ύX�������ʁA���E�l�Ŏ������s���A���Ȃ����Ƃ��m�F�B
*/