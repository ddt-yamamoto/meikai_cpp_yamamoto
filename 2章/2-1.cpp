/*
�����K2-1
�E�Ɏ����悤�ɁA�����l��ǂݍ���ŁA���̐�Βl�����߂ĕ\������v���O�������쐬����B
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
	
	// ���͂��ꂽ�l�����ł��邩�ǂ����𔻒�
	if( inputIntFirst < 0 ){
		
		// ���̏ꍇ�̂݁A�����𔽓]�����A���̐��ɂ���
		inputIntFirst = - inputIntFirst;
	}
	
	// ���]�A�������͂��̂܂܂̂��̂��Βl�Ƃ��ĕW���o�͂���
	cout << "���̐�Βl��" << inputIntFirst << "�ł��B\n";
}
